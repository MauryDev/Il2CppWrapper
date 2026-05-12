
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct ScriptableObject {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 6> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Void UnityEngine::ScriptableObject::.ctor() */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* UnityEngine.ScriptableObject UnityEngine::ScriptableObject::CreateInstance(System.Type) */
inline static auto& m1_CreateInstance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* T UnityEngine::ScriptableObject::CreateInstance() */
inline static auto& m2_CreateInstance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* System.Void UnityEngine::ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject) */
inline static auto& m3_CreateScriptableObject = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* UnityEngine.ScriptableObject UnityEngine::ScriptableObject::CreateScriptableObjectInstanceFromType(System.Type, System.Boolean) */
inline static auto& m4_CreateScriptableObjectInstanceFromType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.IntPtr UnityEngine::ScriptableObject::CreateScriptableObjectInstanceFromType_Injected(System.Type, System.Boolean) */
inline static auto& m5_CreateScriptableObjectInstanceFromType_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);

};

}