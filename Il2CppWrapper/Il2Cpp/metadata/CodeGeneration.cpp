#include "CodeGeneration.h"
#include <format>
#include <execution>
#include <algorithm>


std::vector<Il2CppWrapper::Metadata::SourceInformation> Il2CppWrapper::Metadata::CodeGeneration::GenerateSource(MetadataView& metadataView, const char* nameInterop)
{
    const size_t classCount = metadataView.klasses.size();
    std::vector<SourceInformation> ret(classCount);
    std::vector<std::string> generatedClasses(classCount);
    const char* rootNamespace = nameInterop == nullptr ? "Il2Cpp" : nameInterop;

    auto indices = std::views::iota(0ULL, classCount);

    std::for_each(std::execution::par, indices.begin(), indices.end(), [&](size_t i) {
        auto* currentThread = Thread::Current();
        if (!currentThread)
            Thread::Attach(Domain::GetCurrent());
        auto& klassInfo = metadataView.klasses[i];

        const std::string& folder = klassInfo.assemblyName;
        const std::string& pathNamespace = klassInfo.namespaceName;

        std::string cppNamespace = pathNamespace.empty() ? rootNamespace : std::format("{}::{}", rootNamespace, ReplaceAll(pathNamespace, ".", "::"));
        std::string cppClassName = NormalizeCppName(klassInfo.name);
        std::string safeFileName = ReplaceAll(klassInfo.name, "/", "_");

        generatedClasses[i] = std::format("{}::{}", cppNamespace, cppClassName);

        std::string headerCode = BuildBeginNamespace(cppNamespace);
        headerCode += BuildStruct(cppClassName, klassInfo);
        headerCode += BuildEndScope();

        std::string fullPath = folder;
        if (!pathNamespace.empty())
            fullPath += "/" + pathNamespace;
        fullPath += "/" + safeFileName + ".h";

        ret[i] = {
            .headerName = safeFileName + ".h",
            .headerCode = std::move(headerCode),
            .fullHeaderPath = std::move(fullPath)
        };
        });

    // Geração do metadata.h e metadata.cpp (Sequential)
    std::string initialCode;
    initialCode.reserve(classCount * 64);
    for (const auto& info : ret) {
        initialCode += std::format("#include \"{0}\"\n", info.fullHeaderPath);
    }

    initialCode += std::format(R"(
#include <Il2Cpp/metadata/MetadataView.h>

namespace {0} {{
void $init(Il2CppWrapper::Metadata::MetadataView& view);
}}
)", rootNamespace);

    std::string initGeneratedClasses;
    initGeneratedClasses.reserve(classCount * 128);

    int classIdx = 0;
    for (const auto& className : generatedClasses) {
        initGeneratedClasses += std::format("    view.klasses[{1}].InitWrapperClassInfo<{0}>();\n", className, classIdx++);
    }

    std::string sourceInit = std::format(R"(
#include "metadata.h"

namespace {0} {{
    void $init(Il2CppWrapper::Metadata::MetadataView& view) {{
        {1}
    }}
}}
)", rootNamespace, initGeneratedClasses);

    // Adiciona os arquivos de controle ao final do vetor
    ret.push_back({ "metadata.h", std::move(initialCode), "metadata.h" });
    ret.push_back({ "metadata.cpp", std::move(sourceInit), "metadata.cpp" });

    return ret;
}




std::string Il2CppWrapper::Metadata::CodeGeneration::BuildBeginNamespace(const std::string& namezpace)
{
    return std::format(R"(
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace {} {{
)",
namezpace);

}

std::string_view Il2CppWrapper::Metadata::CodeGeneration::BuildEndScope()
{
    return "\n}";
}

std::string Il2CppWrapper::Metadata::CodeGeneration::BuildStruct(const std::string& cppClassName,ClassInfo& classInfo)
{
	auto methodsLen = classInfo.methodsInfo.size();
    auto fieldsLen = classInfo.fieldsInfo.size();
    int methodIdx = 0, fieldIdx = 0;
    auto klass = Il2CppWrapper::Class::FromName(Il2CppWrapper::Image::Get(classInfo.assemblyName.c_str()), classInfo.namespaceName.c_str(), classInfo.name.c_str());
    std::string fieldsStr, methodsStr;
    for (auto& methodInfo : classInfo.methodsInfo)
    {
		auto method = klass->GetMethodByPredicate([&methodInfo](Method* method) {
            if (methodInfo.name != method->GetName())
                return false;
            
            auto methodInfoLen = methodInfo.typesName.size();

            if (methodInfoLen != method->GetParamCount())
                return false;

            for (int j = 0; j < methodInfo.typesName.size(); j++) {

                auto paramType = method->GetParamType(j);
                if (methodInfo.typesName.at(j) != paramType->GetName())
                {
                    return false;
                }
            }
            return true;
		});
		methodsStr += BuildMethod(method, methodInfo, methodIdx++);
    }
    for (auto& fieldInfo : classInfo.fieldsInfo)
    {
		auto field = klass->GetFieldFromName(fieldInfo.name.c_str());
        fieldsStr += BuildField(field, fieldInfo, fieldIdx++);
    }



    return std::format(R"(
struct {} {{
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, {}> methods;
    inline static std::array<Il2CppWrapper::Field*, {}> fields;  
    {}  
    {}
}};
)",
cppClassName, methodsLen, fieldsLen, fieldsStr, methodsStr);
}

std::string Il2CppWrapper::Metadata::CodeGeneration::BuildMethod(Method* method, const MethodInfo& methodInfo, int idx)
{
    auto flagsMethod = method->GetFlags().flags;
    const char* isStatic = method->IsStatic() ? "true" : "false";
    bool virtualBit = ((int)flagsMethod & (int)MethodFlagsEnum::Virtual) != 0;
    bool abstractBit = ((int)flagsMethod & (int)MethodFlagsEnum::Abstract) != 0;
    const char* isVirtual = virtualBit || abstractBit ? "true" : "false";
    return std::format(
        "/* {4} */\ninline static auto& m{2}_{3} = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<{0}, {1}>*&>(methods[{2}]);\n",
        isStatic, isVirtual, idx, NormalizeCppName(methodInfo.name), BuildMethodSignature(method)
    );
}

std::string Il2CppWrapper::Metadata::CodeGeneration::BuildField(Field* field, const FieldInfo& fieldinfo, int idx)
{
    auto isStatic = ((int)field->GetFlags() & (int)MethodFlagsEnum::Static) != 0;
	const char* isStaticStr = isStatic ? "true" : "false";
    return std::format("/* {3} */\ninline static auto& f_{1} = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<{0}>*&>(fields[{2}]);\n", isStaticStr, NormalizeCppName(fieldinfo.name), idx, BuildFieldSignature(field));
}

std::string Il2CppWrapper::Metadata::CodeGeneration::ReplaceAll(const std::string& value, const std::string& oldvalue, const std::string& newvalue)
{
	std::string ret = value;
	size_t pos = 0;
    while ((pos = ret.find(oldvalue, pos)) != std::string::npos) {
        ret.replace(pos, oldvalue.length(), newvalue);
        pos += newvalue.length();
    }
	return ret;
}

std::string Il2CppWrapper::Metadata::CodeGeneration::NormalizeCppName(const std::string& name)
{
    std::string result;
    result.reserve(name.size());
    for (char c : name)
    {
        if (std::isalnum(static_cast<unsigned char>(c)) || c == '_')
            result += c;
        else
            result += '_';
    }
    if (!result.empty() && std::isdigit(static_cast<unsigned char>(result[0])))
        result = "_" + result;
    return result;
}

std::string Il2CppWrapper::Metadata::CodeGeneration::BuildMethodSignature(Method* method)
{
    if (!method) return "nullptr";

    Class* klass = method->GetDeclaringType();
	auto returnType = method->GetReturnType();
    if (!klass) return std::format("UnknownClass::{}", method->GetName());

    const char* ns = klass->GetNamespace();
    const char* className = klass->GetName();
    const char* methodName = method->GetName();

    std::string signature = std::format("{2} {0}{1}",
        ns ? std::format("{}::", ns) : "",
        className, returnType->GetName());

    signature += std::format("::{}", methodName);
    signature += "(";

    uint32_t paramCount = method->GetParamCount();
    for (uint32_t i = 0; i < paramCount; ++i) {
        Type* paramType = method->GetParamType(i);
        signature += paramType ? paramType->GetName() : "unknown";
        if (i < paramCount - 1) {
            signature += ", ";
        }
    }
    signature += ")";

    return signature;
}

std::string Il2CppWrapper::Metadata::CodeGeneration::BuildFieldSignature(Field* field)
{
    if (!field) return "nullptr";

    Class* klass = field->GetParent();
	auto typeField = field->GetType();
    if (!klass) return std::format("{1} UnknownClass::{0}", field->GetName(), typeField->GetName());

    const char* ns = klass->GetNamespace();
    const char* className = klass->GetName();
    const char* fieldName = field->GetName();

    return std::format("{} {}{}::{}",
        typeField->GetName(),
        ns ? std::format("{}::", ns) : "",
        className,
        fieldName);
}