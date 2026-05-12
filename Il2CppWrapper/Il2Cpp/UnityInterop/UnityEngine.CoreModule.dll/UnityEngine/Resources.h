
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Resources {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 12> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* T[] UnityEngine::Resources::ConvertObjects(UnityEngine.Object[]) */
inline static auto& m0_ConvertObjects = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* UnityEngine.Object[] UnityEngine::Resources::FindObjectsOfTypeAll(System.Type) */
inline static auto& m1_FindObjectsOfTypeAll = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* T[] UnityEngine::Resources::FindObjectsOfTypeAll() */
inline static auto& m2_FindObjectsOfTypeAll = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* UnityEngine.Object UnityEngine::Resources::Load(System.String) */
inline static auto& m3_Load = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* UnityEngine.Object UnityEngine::Resources::Load(System.String) */
inline static auto& m4_Load = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* UnityEngine.Object UnityEngine::Resources::Load(System.String, System.Type) */
inline static auto& m5_Load = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* UnityEngine.Object UnityEngine::Resources::GetBuiltinResource(System.Type, System.String) */
inline static auto& m6_GetBuiltinResource = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* T UnityEngine::Resources::GetBuiltinResource(System.String) */
inline static auto& m7_GetBuiltinResource = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Void UnityEngine::Resources::UnloadAsset(UnityEngine.Object) */
inline static auto& m8_UnloadAsset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);
/* UnityEngine.AsyncOperation UnityEngine::Resources::UnloadUnusedAssets() */
inline static auto& m9_UnloadUnusedAssets = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* System.IntPtr UnityEngine::Resources::GetBuiltinResource_Injected(System.Type, UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m10_GetBuiltinResource_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);
/* System.IntPtr UnityEngine::Resources::UnloadUnusedAssets_Injected() */
inline static auto& m11_UnloadUnusedAssets_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);

};

}