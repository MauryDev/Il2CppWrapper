
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct GameObject {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 59> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* T UnityEngine::GameObject::GetComponent() */
inline static auto& m0_GetComponent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* UnityEngine.Component UnityEngine::GameObject::GetComponent(System.Type) */
inline static auto& m1_GetComponent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void UnityEngine::GameObject::GetComponentFastPath(System.Type, System.IntPtr) */
inline static auto& m2_GetComponentFastPath = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* UnityEngine.Component UnityEngine::GameObject::GetComponentInChildren(System.Type, System.Boolean) */
inline static auto& m3_GetComponentInChildren = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* T UnityEngine::GameObject::GetComponentInChildren() */
inline static auto& m4_GetComponentInChildren = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* T UnityEngine::GameObject::GetComponentInChildren(System.Boolean) */
inline static auto& m5_GetComponentInChildren = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* UnityEngine.Component UnityEngine::GameObject::GetComponentInParent(System.Type, System.Boolean) */
inline static auto& m6_GetComponentInParent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* T UnityEngine::GameObject::GetComponentInParent() */
inline static auto& m7_GetComponentInParent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* T UnityEngine::GameObject::GetComponentInParent(System.Boolean) */
inline static auto& m8_GetComponentInParent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Array UnityEngine::GameObject::GetComponentsInternal(System.Type, System.Boolean, System.Boolean, System.Boolean, System.Boolean, System.Object) */
inline static auto& m9_GetComponentsInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* T[] UnityEngine::GameObject::GetComponents() */
inline static auto& m10_GetComponents = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Void UnityEngine::GameObject::GetComponents(System.Collections.Generic.List<T>) */
inline static auto& m11_GetComponents = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* T[] UnityEngine::GameObject::GetComponentsInChildren(System.Boolean) */
inline static auto& m12_GetComponentsInChildren = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.Void UnityEngine::GameObject::GetComponentsInChildren(System.Boolean, System.Collections.Generic.List<T>) */
inline static auto& m13_GetComponentsInChildren = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* T[] UnityEngine::GameObject::GetComponentsInChildren() */
inline static auto& m14_GetComponentsInChildren = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* System.Void UnityEngine::GameObject::GetComponentsInChildren(System.Collections.Generic.List<T>) */
inline static auto& m15_GetComponentsInChildren = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* System.Void UnityEngine::GameObject::GetComponentsInParent(System.Boolean, System.Collections.Generic.List<T>) */
inline static auto& m16_GetComponentsInParent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* T[] UnityEngine::GameObject::GetComponentsInParent(System.Boolean) */
inline static auto& m17_GetComponentsInParent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.Boolean UnityEngine::GameObject::TryGetComponent(T&) */
inline static auto& m18_TryGetComponent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* System.Boolean UnityEngine::GameObject::TryGetComponent(System.Type, UnityEngine.Component&) */
inline static auto& m19_TryGetComponent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* UnityEngine.Component UnityEngine::GameObject::TryGetComponentInternal(System.Type) */
inline static auto& m20_TryGetComponentInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.Void UnityEngine::GameObject::TryGetComponentFastPath(System.Type, System.IntPtr) */
inline static auto& m21_TryGetComponentFastPath = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* UnityEngine.Component UnityEngine::GameObject::Internal_AddComponentWithType(System.Type) */
inline static auto& m22_Internal_AddComponentWithType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* UnityEngine.Component UnityEngine::GameObject::AddComponent(System.Type) */
inline static auto& m23_AddComponent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[23]);
/* T UnityEngine::GameObject::AddComponent() */
inline static auto& m24_AddComponent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[24]);
/* UnityEngine.Transform UnityEngine::GameObject::get_transform() */
inline static auto& m25_get_transform = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[25]);
/* System.Int32 UnityEngine::GameObject::get_layer() */
inline static auto& m26_get_layer = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[26]);
/* System.Void UnityEngine::GameObject::set_layer(System.Int32) */
inline static auto& m27_set_layer = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[27]);
/* System.Void UnityEngine::GameObject::SetActive(System.Boolean) */
inline static auto& m28_SetActive = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[28]);
/* System.Boolean UnityEngine::GameObject::get_activeSelf() */
inline static auto& m29_get_activeSelf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[29]);
/* System.Boolean UnityEngine::GameObject::get_activeInHierarchy() */
inline static auto& m30_get_activeInHierarchy = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[30]);
/* System.Boolean UnityEngine::GameObject::get_isStatic() */
inline static auto& m31_get_isStatic = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[31]);
/* System.Void UnityEngine::GameObject::set_isStatic(System.Boolean) */
inline static auto& m32_set_isStatic = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[32]);
/* System.Void UnityEngine::GameObject::SendMessage(System.String, System.Object, UnityEngine.SendMessageOptions) */
inline static auto& m33_SendMessage = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[33]);
/* System.Void UnityEngine::GameObject::.ctor(System.String) */
inline static auto& m34__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[34]);
/* System.Void UnityEngine::GameObject::.ctor() */
inline static auto& m35__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[35]);
/* System.Void UnityEngine::GameObject::.ctor(System.String, System.Type[]) */
inline static auto& m36__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[36]);
/* System.Void UnityEngine::GameObject::Internal_CreateGameObject(UnityEngine.GameObject, System.String) */
inline static auto& m37_Internal_CreateGameObject = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[37]);
/* UnityEngine.GameObject UnityEngine::GameObject::Find(System.String) */
inline static auto& m38_Find = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[38]);
/* UnityEngine.GameObject UnityEngine::GameObject::get_gameObject() */
inline static auto& m39_get_gameObject = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[39]);
/* System.IntPtr UnityEngine::GameObject::GetComponent_Injected(System.IntPtr, System.Type) */
inline static auto& m40_GetComponent_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[40]);
/* System.Void UnityEngine::GameObject::GetComponentFastPath_Injected(System.IntPtr, System.Type, System.IntPtr) */
inline static auto& m41_GetComponentFastPath_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[41]);
/* System.IntPtr UnityEngine::GameObject::GetComponentInChildren_Injected(System.IntPtr, System.Type, System.Boolean) */
inline static auto& m42_GetComponentInChildren_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[42]);
/* System.IntPtr UnityEngine::GameObject::GetComponentInParent_Injected(System.IntPtr, System.Type, System.Boolean) */
inline static auto& m43_GetComponentInParent_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[43]);
/* System.Array UnityEngine::GameObject::GetComponentsInternal_Injected(System.IntPtr, System.Type, System.Boolean, System.Boolean, System.Boolean, System.Boolean, System.Object) */
inline static auto& m44_GetComponentsInternal_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[44]);
/* System.IntPtr UnityEngine::GameObject::TryGetComponentInternal_Injected(System.IntPtr, System.Type) */
inline static auto& m45_TryGetComponentInternal_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[45]);
/* System.Void UnityEngine::GameObject::TryGetComponentFastPath_Injected(System.IntPtr, System.Type, System.IntPtr) */
inline static auto& m46_TryGetComponentFastPath_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[46]);
/* System.IntPtr UnityEngine::GameObject::Internal_AddComponentWithType_Injected(System.IntPtr, System.Type) */
inline static auto& m47_Internal_AddComponentWithType_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[47]);
/* System.IntPtr UnityEngine::GameObject::get_transform_Injected(System.IntPtr) */
inline static auto& m48_get_transform_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[48]);
/* System.Int32 UnityEngine::GameObject::get_layer_Injected(System.IntPtr) */
inline static auto& m49_get_layer_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[49]);
/* System.Void UnityEngine::GameObject::set_layer_Injected(System.IntPtr, System.Int32) */
inline static auto& m50_set_layer_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[50]);
/* System.Void UnityEngine::GameObject::SetActive_Injected(System.IntPtr, System.Boolean) */
inline static auto& m51_SetActive_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[51]);
/* System.Boolean UnityEngine::GameObject::get_activeSelf_Injected(System.IntPtr) */
inline static auto& m52_get_activeSelf_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[52]);
/* System.Boolean UnityEngine::GameObject::get_activeInHierarchy_Injected(System.IntPtr) */
inline static auto& m53_get_activeInHierarchy_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[53]);
/* System.Boolean UnityEngine::GameObject::get_isStatic_Injected(System.IntPtr) */
inline static auto& m54_get_isStatic_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[54]);
/* System.Void UnityEngine::GameObject::set_isStatic_Injected(System.IntPtr, System.Boolean) */
inline static auto& m55_set_isStatic_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[55]);
/* System.Void UnityEngine::GameObject::SendMessage_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&, System.Object, UnityEngine.SendMessageOptions) */
inline static auto& m56_SendMessage_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[56]);
/* System.Void UnityEngine::GameObject::Internal_CreateGameObject_Injected(UnityEngine.GameObject, UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m57_Internal_CreateGameObject_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[57]);
/* System.IntPtr UnityEngine::GameObject::Find_Injected(UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m58_Find_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[58]);

};

}