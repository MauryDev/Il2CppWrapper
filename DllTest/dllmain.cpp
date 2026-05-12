// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <Il2Cpp/Il2CppWrapper.h>
#include <Il2Cpp/WindowsDist.h>
#include <thread>
#include <Il2Cpp/metadata/CodeGeneration.h>
#include <Il2Cpp/metadata/MetadataView.h>
#include <filesystem>
#include <Il2Cpp/Il2CppCoreTypes.h>
#include <fstream>
#include <nlohmann/json.hpp>
#include <Il2Cpp/Il2CppDelegate.h>
#include <Il2Cpp/UnityInterop/metadata.h>

using json = nlohmann::json;
namespace fs = std::filesystem;

struct ClassFind {
	const char* namespaceName;
	const char* className;
	const char* assemblyName;
};

const ClassFind coreTypes[] = {
    // Primitives
    {"System", "SByte", "mscorlib"}, {"System", "Byte", "mscorlib"},
    {"System", "Int16", "mscorlib"}, {"System", "UInt16", "mscorlib"},
    {"System", "Int32", "mscorlib"}, {"System", "UInt32", "mscorlib"},
    {"System", "Int64", "mscorlib"}, {"System", "UInt64", "mscorlib"},
    {"System", "Char", "mscorlib"}, {"System", "Single", "mscorlib"},
    {"System", "Double", "mscorlib"}, {"System", "Decimal", "mscorlib"},
    {"System", "Boolean", "mscorlib"}, {"System", "Void", "mscorlib"},
    {"System", "Object", "mscorlib"}, {"System", "String", "mscorlib"},

    // Generic Collections
    {"System.Collections.Generic", "List`1", "mscorlib"}, {"System.Collections.Generic", "Dictionary`2", "mscorlib"},
    {"System.Collections.Generic", "HashSet`1", "mscorlib"}, {"System.Collections.Generic", "Queue`1", "mscorlib"},
    {"System.Collections.Generic", "Stack`1", "mscorlib"}, {"System.Collections.Generic", "LinkedList`1", "mscorlib"},
    {"System.Collections.Generic", "IEnumerable`1", "mscorlib"}, {"System.Collections", "IEnumerable", "mscorlib"},
    {"System.Collections.Generic", "IEnumerator`1", "mscorlib"}, {"System.Collections", "IEnumerator", "mscorlib"},
    {"System.Collections.Generic", "ICollection`1", "mscorlib"}, {"System.Collections", "ICollection", "mscorlib"},
    {"System.Collections.Generic", "IList`1", "mscorlib"}, {"System.Collections.Generic", "IDictionary`2", "mscorlib"},

    // LINQ & Nullable
    {"System.Linq", "IQueryable`1", "System.Core"}, {"System", "Nullable`1", "mscorlib"},

    // Delegates
    {"System", "Action", "mscorlib"}, {"System", "Action`1", "mscorlib"},
    {"System", "Func`1", "mscorlib"}, {"System", "Func`2", "mscorlib"},
    {"System", "Predicate`1", "mscorlib"}, {"System", "EventHandler", "mscorlib"},
    {"System", "Delegate", "mscorlib"},

    // Async/Threading
    {"System.Threading.Tasks", "Task", "mscorlib"}, {"System.Threading.Tasks", "Task`1", "mscorlib"},
    {"System.Threading", "Thread", "mscorlib"}, {"System.Threading", "CancellationToken", "mscorlib"},

    // Date/Time
    {"System", "DateTime", "mscorlib"}, {"System", "DateTimeOffset", "mscorlib"},
    {"System", "TimeSpan", "mscorlib"},

    // IO
    {"System.IO", "File", "mscorlib"}, {"System.IO", "Directory", "mscorlib"},
    {"System.IO", "Stream", "mscorlib"}, {"System.IO", "MemoryStream", "mscorlib"},
    {"System.IO", "BinaryReader", "mscorlib"}, {"System.IO", "BinaryWriter", "mscorlib"},

    // Net
    {"System.Net.Http", "HttpClient", "System.Net.Http"}, {"System.Net.Http", "HttpRequestMessage", "System.Net.Http"},
    {"System.Net.Http", "HttpResponseMessage", "System.Net.Http"},

    // Reflection
    {"System", "Type", "mscorlib"}, {"System.Reflection", "MethodInfo", "mscorlib"},
    {"System.Reflection", "PropertyInfo", "mscorlib"}, {"System.Reflection", "FieldInfo", "mscorlib"},
    {"System", "Attribute", "mscorlib"},     {"System.Reflection", "MethodBase", "mscorlib"},


    // Utilities
    {"System", "Activator", "mscorlib"}, {"System", "Random", "mscorlib"},
    {"System", "Guid", "mscorlib"}, {"System", "Version", "mscorlib"},
    {"System", "Uri", "mscorlib"}, {"System", "Environment", "mscorlib"},
    {"System", "Math", "mscorlib"}, {"System", "Convert", "mscorlib"},
    {"System", "Exception", "mscorlib"},

    // Interfaces Core
    {"System", "IDisposable", "mscorlib"}, {"System", "IComparable", "mscorlib"},
    {"System", "IComparable`1", "mscorlib"}, {"System", "IEquatable`1", "mscorlib"},
    {"System", "Array", "mscorlib"}, {"System.Collections", "IList", "mscorlib"},
    {"System.Collections", "IDictionary", "mscorlib"},
};
const ClassFind unityTypes[] = {
    {"UnityEngine", "GameObject", "UnityEngine.CoreModule"},
    {"UnityEngine", "Component", "UnityEngine.CoreModule"},
    {"UnityEngine", "Transform", "UnityEngine.CoreModule"},
    {"UnityEngine", "MonoBehaviour", "UnityEngine.CoreModule"},
    {"UnityEngine", "Behaviour", "UnityEngine.CoreModule"},
    {"UnityEngine", "Object", "UnityEngine.CoreModule"},
    {"UnityEngine", "Camera", "UnityEngine.CoreModule"},
    {"UnityEngine", "Rigidbody", "UnityEngine.PhysicsModule"},
    {"UnityEngine", "Collider", "UnityEngine.PhysicsModule"},
    {"UnityEngine", "BoxCollider", "UnityEngine.PhysicsModule"},
    {"UnityEngine", "SphereCollider", "UnityEngine.PhysicsModule"},
    {"UnityEngine", "CapsuleCollider", "UnityEngine.PhysicsModule"},
    {"UnityEngine", "MeshRenderer", "UnityEngine.CoreModule"},
    {"UnityEngine", "Renderer", "UnityEngine.CoreModule"},
    {"UnityEngine", "MeshFilter", "UnityEngine.CoreModule"},
    {"UnityEngine", "Material", "UnityEngine.CoreModule"},
    {"UnityEngine", "Shader", "UnityEngine.CoreModule"},
    {"UnityEngine", "Texture", "UnityEngine.CoreModule"},
    {"UnityEngine", "Texture2D", "UnityEngine.CoreModule"},
    {"UnityEngine", "Sprite", "UnityEngine.CoreModule"},
    {"UnityEngine", "Animator", "UnityEngine.AnimationModule"},
    {"UnityEngine", "Animation", "UnityEngine.AnimationModule"},
    {"UnityEngine", "AudioSource", "UnityEngine.AudioModule"},
    {"UnityEngine", "AudioClip", "UnityEngine.AudioModule"},
    {"UnityEngine", "Canvas", "UnityEngine.UIModule"},
    {"UnityEngine.UI", "Button", "UnityEngine.UI"},
    {"UnityEngine.UI", "Image", "UnityEngine.UI"},
    {"UnityEngine.UI", "Text", "UnityEngine.UI"},
    {"TMPro", "TextMeshProUGUI", "Unity.TextMeshPro"},
    {"TMPro", "TMP_Text", "Unity.TextMeshPro"},
    {"UnityEngine", "Time", "UnityEngine.CoreModule"},
    {"UnityEngine", "Input", "UnityEngine.InputLegacyModule"},
    {"UnityEngine", "Physics", "UnityEngine.PhysicsModule"},
    {"UnityEngine.SceneManagement", "Scene", "UnityEngine.CoreModule"},
    {"UnityEngine", "Application", "UnityEngine.CoreModule"},
    {"UnityEngine", "Resources", "UnityEngine.CoreModule"},
    {"UnityEngine", "Debug", "UnityEngine.CoreModule"},
    {"UnityEngine", "ScriptableObject", "UnityEngine.CoreModule"},
    {"UnityEngine", "Coroutine", "UnityEngine.CoreModule"},
    {"UnityEngine", "WaitForSeconds", "UnityEngine.CoreModule"},
    {"UnityEngine", "Vector2", "UnityEngine.CoreModule"},
    {"UnityEngine", "Vector3", "UnityEngine.CoreModule"},
    {"UnityEngine", "Quaternion", "UnityEngine.CoreModule"},
    {"UnityEngine", "Color", "UnityEngine.CoreModule"},
    {"UnityEngine", "RaycastHit", "UnityEngine.PhysicsModule"},
    {"UnityEngine", "LayerMask", "UnityEngine.CoreModule"},
};
void AddCoreTypesToMetadata(Il2CppWrapper::Metadata::MetadataView& metadataView)
{
    Il2CppWrapper::CoreTypes::Initialize();
    for (const auto& find : coreTypes) {
		auto image = Il2CppWrapper::Image::Get(find.assemblyName);
        auto cls = image->GetClass(find.namespaceName, find.className);
        if (!cls) continue;

        Il2CppWrapper::Metadata::ClassInfo info;
        info.FromClass(cls);
        metadataView.klasses.push_back(std::move(info));
    }
}
void AddUnityTypesToMetadata(Il2CppWrapper::Metadata::MetadataView& metadataView)
{
    for (const auto& find : unityTypes) {
        auto image = Il2CppWrapper::Image::Get(find.assemblyName);
        if (!image) continue;
        auto cls = image->GetClass(find.namespaceName, find.className);
        if (!cls) continue;

        Il2CppWrapper::Metadata::ClassInfo info;
        info.FromClass(cls);
        metadataView.klasses.push_back(std::move(info));
    }
}

void SaveMetadataToJson(const Il2CppWrapper::Metadata::MetadataView& metadataView, const std::string& filePath) {
	metadataView.generateFile(filePath);
   
}



void WaitForGameAssembly() {
    while (GetModuleHandle(L"GameAssembly.dll") == nullptr) {
        Sleep(10000);
    }
    Sleep(10000);
}

void InitializeWrapper() {
    auto callbacks = Il2CppWrapper::Windows::GetCallbacks();
    Il2CppWrapper::Initialize(callbacks);
    Il2CppWrapper::Thread::Attach(Il2CppWrapper::Domain::GetCurrent());
}

void PopulateMetadata(Il2CppWrapper::Metadata::MetadataView& metadataView) {
    AddCoreTypesToMetadata(metadataView);

    auto corlib = Il2CppWrapper::Domain::GetCorlib();
    Il2CppWrapper::Metadata::ClassInfo methodBase;
    methodBase.FromClass(corlib->GetClass("System.Reflection", "MethodBase"));
    metadataView.klasses.push_back(methodBase);
}

void WriteGeneratedHeaders(const std::string& basePath, const std::vector<Il2CppWrapper::Metadata::SourceInformation>& codeGenerationInfo) {
    for (const auto& info : codeGenerationInfo) {
        fs::path fullPath = fs::path(basePath) / info.fullHeaderPath;
        try {
            fs::create_directories(fullPath.parent_path());
            std::ofstream file(fullPath);
            if (file.is_open()) {
                file << info.headerCode;
                file.close();
            }
        }
        catch (const fs::filesystem_error&) {}
    }
}

void SaveMetadataFiles(const std::string& basePath, const Il2CppWrapper::Metadata::MetadataView& metadataView) {
    metadataView.generateFile(basePath + "metadata.dat");
    SaveMetadataToJson(metadataView, basePath + "metadata.json");
}
void CoreInterop()
{
    Il2CppWrapper::Metadata::CodeGeneration codeGeneration;
    Il2CppWrapper::Metadata::MetadataView metadataView;

    PopulateMetadata(metadataView);

    auto codeGenerationInfo = codeGeneration.GenerateSource(metadataView, "Il2CppWrapper::CoreInterop");
    auto basePath = R"(C:/dev/Visual Studio/KoGaMaTools.Native/x64/Debug/metadata/core/)";

    WriteGeneratedHeaders(basePath, codeGenerationInfo);
    SaveMetadataFiles(basePath, metadataView);
}
void UnityInterop()
{
    Il2CppWrapper::Metadata::CodeGeneration codeGeneration;
    Il2CppWrapper::Metadata::MetadataView metadataView;

    AddUnityTypesToMetadata(metadataView);

    auto codeGenerationInfo = codeGeneration.GenerateSource(metadataView, "Il2CppWrapper::UnityInterop");
    auto basePath = R"(C:/dev/Visual Studio/KoGaMaTools.Native/x64/Debug/metadata/unity/)";

    WriteGeneratedHeaders(basePath, codeGenerationInfo);
    SaveMetadataFiles(basePath, metadataView);
}
void MainThread()
{
    WaitForGameAssembly();
    InitializeWrapper();
    CoreInterop();

    UnityInterop();

    Il2CppWrapper::Metadata::MetadataView mt;

	mt.readFromFile(R"(C:/dev/Visual Studio/KoGaMaTools.Native/x64/Debug/metadata/unity/metadata.json)");

    Il2CppWrapper::UnityInterop::$init(mt);
	auto size = Il2CppWrapper::UnityInterop::UnityEngine::Vector3::f_y->GetOffset();

    auto e = size + 3;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        std::thread(MainThread).detach();
        break;
    }
    return TRUE;
}