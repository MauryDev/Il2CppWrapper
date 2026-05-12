
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine::SceneManagement {

struct Scene {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 14> methods;
    inline static std::array<Il2CppWrapper::Field*, 1> fields;  
    /* System.Int32 UnityEngine.SceneManagement::Scene::m_Handle */
inline static auto& f_m_Handle = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
  
    /* System.Boolean UnityEngine.SceneManagement::Scene::IsValidInternal(System.Int32) */
inline static auto& m0_IsValidInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.String UnityEngine.SceneManagement::Scene::GetNameInternal(System.Int32) */
inline static auto& m1_GetNameInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* System.Boolean UnityEngine.SceneManagement::Scene::GetIsLoadedInternal(System.Int32) */
inline static auto& m2_GetIsLoadedInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* System.Int32 UnityEngine.SceneManagement::Scene::GetRootCountInternal(System.Int32) */
inline static auto& m3_GetRootCountInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* System.Void UnityEngine.SceneManagement::Scene::GetRootGameObjectsInternal(System.Int32, System.Object) */
inline static auto& m4_GetRootGameObjectsInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.Int32 UnityEngine.SceneManagement::Scene::get_handle() */
inline static auto& m5_get_handle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Boolean UnityEngine.SceneManagement::Scene::IsValid() */
inline static auto& m6_IsValid = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.String UnityEngine.SceneManagement::Scene::get_name() */
inline static auto& m7_get_name = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.Boolean UnityEngine.SceneManagement::Scene::get_isLoaded() */
inline static auto& m8_get_isLoaded = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Int32 UnityEngine.SceneManagement::Scene::get_rootCount() */
inline static auto& m9_get_rootCount = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.Void UnityEngine.SceneManagement::Scene::GetRootGameObjects(System.Collections.Generic.List<UnityEngine.GameObject>) */
inline static auto& m10_GetRootGameObjects = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Int32 UnityEngine.SceneManagement::Scene::GetHashCode() */
inline static auto& m11_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[11]);
/* System.Boolean UnityEngine.SceneManagement::Scene::Equals(System.Object) */
inline static auto& m12_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[12]);
/* System.Void UnityEngine.SceneManagement::Scene::GetNameInternal_Injected(System.Int32, UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m13_GetNameInternal_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);

};

}