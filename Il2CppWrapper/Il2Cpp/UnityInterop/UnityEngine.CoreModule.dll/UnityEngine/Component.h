
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Component {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 28> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* UnityEngine.Transform UnityEngine::Component::get_transform() */
inline static auto& m0_get_transform = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* UnityEngine.GameObject UnityEngine::Component::get_gameObject() */
inline static auto& m1_get_gameObject = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* UnityEngine.Component UnityEngine::Component::GetComponent(System.Type) */
inline static auto& m2_GetComponent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void UnityEngine::Component::GetComponentFastPath(System.Type, System.IntPtr) */
inline static auto& m3_GetComponentFastPath = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* T UnityEngine::Component::GetComponent() */
inline static auto& m4_GetComponent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Boolean UnityEngine::Component::TryGetComponent(System.Type, UnityEngine.Component&) */
inline static auto& m5_TryGetComponent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Boolean UnityEngine::Component::TryGetComponent(T&) */
inline static auto& m6_TryGetComponent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* UnityEngine.Component UnityEngine::Component::GetComponentInChildren(System.Type, System.Boolean) */
inline static auto& m7_GetComponentInChildren = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* T UnityEngine::Component::GetComponentInChildren() */
inline static auto& m8_GetComponentInChildren = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* T[] UnityEngine::Component::GetComponentsInChildren(System.Boolean) */
inline static auto& m9_GetComponentsInChildren = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.Void UnityEngine::Component::GetComponentsInChildren(System.Boolean, System.Collections.Generic.List<T>) */
inline static auto& m10_GetComponentsInChildren = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* T[] UnityEngine::Component::GetComponentsInChildren() */
inline static auto& m11_GetComponentsInChildren = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* System.Void UnityEngine::Component::GetComponentsInChildren(System.Collections.Generic.List<T>) */
inline static auto& m12_GetComponentsInChildren = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* UnityEngine.Component UnityEngine::Component::GetComponentInParent(System.Type, System.Boolean) */
inline static auto& m13_GetComponentInParent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* T UnityEngine::Component::GetComponentInParent(System.Boolean) */
inline static auto& m14_GetComponentInParent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* T UnityEngine::Component::GetComponentInParent() */
inline static auto& m15_GetComponentInParent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* T[] UnityEngine::Component::GetComponentsInParent(System.Boolean) */
inline static auto& m16_GetComponentsInParent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* System.Void UnityEngine::Component::GetComponentsInParent(System.Boolean, System.Collections.Generic.List<T>) */
inline static auto& m17_GetComponentsInParent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* T[] UnityEngine::Component::GetComponentsInParent() */
inline static auto& m18_GetComponentsInParent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* System.Void UnityEngine::Component::GetComponentsForListInternal(System.Type, System.Object) */
inline static auto& m19_GetComponentsForListInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.Void UnityEngine::Component::GetComponents(System.Type, System.Collections.Generic.List<UnityEngine.Component>) */
inline static auto& m20_GetComponents = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.Void UnityEngine::Component::GetComponents(System.Collections.Generic.List<T>) */
inline static auto& m21_GetComponents = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* T[] UnityEngine::Component::GetComponents() */
inline static auto& m22_GetComponents = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* System.Void UnityEngine::Component::.ctor() */
inline static auto& m23__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[23]);
/* System.IntPtr UnityEngine::Component::get_transform_Injected(System.IntPtr) */
inline static auto& m24_get_transform_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* System.IntPtr UnityEngine::Component::get_gameObject_Injected(System.IntPtr) */
inline static auto& m25_get_gameObject_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* System.Void UnityEngine::Component::GetComponentFastPath_Injected(System.IntPtr, System.Type, System.IntPtr) */
inline static auto& m26_GetComponentFastPath_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* System.Void UnityEngine::Component::GetComponentsForListInternal_Injected(System.IntPtr, System.Type, System.Object) */
inline static auto& m27_GetComponentsForListInternal_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);

};

}