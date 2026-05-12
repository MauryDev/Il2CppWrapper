#pragma once
#include "MetadataView.h"

namespace Il2CppWrapper::Metadata {
	struct SourceInformation {
		std::string headerName;
		std::string headerCode;
		std::string fullHeaderPath;
	};
	struct CodeGeneration {
		std::vector<SourceInformation> GenerateSource(MetadataView& metadataView, const char* nameInterop = "Il2Cpp");

	private:
		static std::string BuildBeginNamespace(const std::string& namezpace);
		static std::string_view BuildEndScope();
		static std::string BuildStruct(const std::string& cppClassName,  ClassInfo& classInfo);


		static std::string BuildMethod(Method* method, const MethodInfo& methodInfo, int idx);
		static std::string BuildField(Field* field, const FieldInfo& fieldinfo, int idx);


		static std::string ReplaceAll(const std::string& value, const std::string& oldvalue, const std::string& newvalue);
		static std::string NormalizeCppName(const std::string& name);

		static std::string BuildMethodSignature(Method* method);
		static std::string BuildFieldSignature(Field* field);
	};
}