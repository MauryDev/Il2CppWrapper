
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Object {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 66> methods;
    inline static std::array<Il2CppWrapper::Field*, 5> fields;  
    /* System.Int32 UnityEngine::Object::kInstanceID_None */
inline static auto& f_kInstanceID_None = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.IntPtr UnityEngine::Object::m_CachedPtr */
inline static auto& f_m_CachedPtr = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* System.Int32 UnityEngine::Object::OffsetOfInstanceIDInCPlusPlusObject */
inline static auto& f_OffsetOfInstanceIDInCPlusPlusObject = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[2]);
/* System.String UnityEngine::Object::objectIsNullMessage */
inline static auto& f_objectIsNullMessage = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[3]);
/* System.String UnityEngine::Object::cloneDestroyedMessage */
inline static auto& f_cloneDestroyedMessage = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[4]);
  
    /* System.Int32 UnityEngine::Object::GetInstanceID() */
inline static auto& m0_GetInstanceID = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Int32 UnityEngine::Object::GetHashCode() */
inline static auto& m1_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[1]);
/* System.Boolean UnityEngine::Object::Equals(System.Object) */
inline static auto& m2_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[2]);
/* System.Boolean UnityEngine::Object::op_Implicit(UnityEngine.Object) */
inline static auto& m3_op_Implicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* System.Boolean UnityEngine::Object::CompareBaseObjects(UnityEngine.Object, UnityEngine.Object) */
inline static auto& m4_CompareBaseObjects = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.Boolean UnityEngine::Object::IsNativeObjectAlive(UnityEngine.Object) */
inline static auto& m5_IsNativeObjectAlive = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.IntPtr UnityEngine::Object::GetCachedPtr() */
inline static auto& m6_GetCachedPtr = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.String UnityEngine::Object::get_name() */
inline static auto& m7_get_name = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.Void UnityEngine::Object::set_name(System.String) */
inline static auto& m8_set_name = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* UnityEngine.Object UnityEngine::Object::Instantiate(UnityEngine.Object, UnityEngine.Vector3, UnityEngine.Quaternion) */
inline static auto& m9_Instantiate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* UnityEngine.Object UnityEngine::Object::Instantiate(UnityEngine.Object, UnityEngine.Vector3, UnityEngine.Quaternion, UnityEngine.Transform) */
inline static auto& m10_Instantiate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);
/* UnityEngine.Object UnityEngine::Object::Instantiate(UnityEngine.Object) */
inline static auto& m11_Instantiate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* UnityEngine.Object UnityEngine::Object::Instantiate(UnityEngine.Object, UnityEngine.Transform, System.Boolean) */
inline static auto& m12_Instantiate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);
/* T UnityEngine::Object::Instantiate(T) */
inline static auto& m13_Instantiate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* T UnityEngine::Object::Instantiate(T, UnityEngine.Vector3, UnityEngine.Quaternion) */
inline static auto& m14_Instantiate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);
/* T UnityEngine::Object::Instantiate(T, UnityEngine.Vector3, UnityEngine.Quaternion, UnityEngine.Transform) */
inline static auto& m15_Instantiate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[15]);
/* T UnityEngine::Object::Instantiate(T, UnityEngine.Transform) */
inline static auto& m16_Instantiate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[16]);
/* T UnityEngine::Object::Instantiate(T, UnityEngine.Transform, System.Boolean) */
inline static auto& m17_Instantiate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[17]);
/* System.Void UnityEngine::Object::Destroy(UnityEngine.Object, System.Single) */
inline static auto& m18_Destroy = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[18]);
/* System.Void UnityEngine::Object::Destroy(UnityEngine.Object) */
inline static auto& m19_Destroy = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[19]);
/* System.Void UnityEngine::Object::DestroyImmediate(UnityEngine.Object, System.Boolean) */
inline static auto& m20_DestroyImmediate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[20]);
/* System.Void UnityEngine::Object::DestroyImmediate(UnityEngine.Object) */
inline static auto& m21_DestroyImmediate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[21]);
/* UnityEngine.Object[] UnityEngine::Object::FindObjectsByType(System.Type, UnityEngine.FindObjectsSortMode) */
inline static auto& m22_FindObjectsByType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[22]);
/* UnityEngine.Object[] UnityEngine::Object::FindObjectsByType(System.Type, UnityEngine.FindObjectsInactive, UnityEngine.FindObjectsSortMode) */
inline static auto& m23_FindObjectsByType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* System.Void UnityEngine::Object::DontDestroyOnLoad(UnityEngine.Object) */
inline static auto& m24_DontDestroyOnLoad = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* UnityEngine.HideFlags UnityEngine::Object::get_hideFlags() */
inline static auto& m25_get_hideFlags = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[25]);
/* System.Void UnityEngine::Object::set_hideFlags(UnityEngine.HideFlags) */
inline static auto& m26_set_hideFlags = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[26]);
/* T[] UnityEngine::Object::FindObjectsByType(UnityEngine.FindObjectsSortMode) */
inline static auto& m27_FindObjectsByType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);
/* T UnityEngine::Object::FindFirstObjectByType() */
inline static auto& m28_FindFirstObjectByType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[28]);
/* T UnityEngine::Object::FindAnyObjectByType() */
inline static auto& m29_FindAnyObjectByType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);
/* System.Void UnityEngine::Object::CheckNullArgument(System.Object, System.String) */
inline static auto& m30_CheckNullArgument = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[30]);
/* UnityEngine.Object UnityEngine::Object::FindFirstObjectByType(System.Type, UnityEngine.FindObjectsInactive) */
inline static auto& m31_FindFirstObjectByType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[31]);
/* UnityEngine.Object UnityEngine::Object::FindAnyObjectByType(System.Type, UnityEngine.FindObjectsInactive) */
inline static auto& m32_FindAnyObjectByType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[32]);
/* System.String UnityEngine::Object::ToString() */
inline static auto& m33_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[33]);
/* System.Boolean UnityEngine::Object::op_Equality(UnityEngine.Object, UnityEngine.Object) */
inline static auto& m34_op_Equality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[34]);
/* System.Boolean UnityEngine::Object::op_Inequality(UnityEngine.Object, UnityEngine.Object) */
inline static auto& m35_op_Inequality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[35]);
/* System.Int32 UnityEngine::Object::GetOffsetOfInstanceIDInCPlusPlusObject() */
inline static auto& m36_GetOffsetOfInstanceIDInCPlusPlusObject = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[36]);
/* UnityEngine.Object UnityEngine::Object::Internal_CloneSingle(UnityEngine.Object) */
inline static auto& m37_Internal_CloneSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[37]);
/* UnityEngine.Object UnityEngine::Object::Internal_CloneSingleWithParent(UnityEngine.Object, UnityEngine.Transform, System.Boolean) */
inline static auto& m38_Internal_CloneSingleWithParent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[38]);
/* UnityEngine.Object UnityEngine::Object::Internal_InstantiateSingle(UnityEngine.Object, UnityEngine.Vector3, UnityEngine.Quaternion) */
inline static auto& m39_Internal_InstantiateSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[39]);
/* UnityEngine.Object UnityEngine::Object::Internal_InstantiateSingleWithParent(UnityEngine.Object, UnityEngine.Transform, UnityEngine.Vector3, UnityEngine.Quaternion) */
inline static auto& m40_Internal_InstantiateSingleWithParent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[40]);
/* System.String UnityEngine::Object::ToString(UnityEngine.Object) */
inline static auto& m41_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[41]);
/* System.String UnityEngine::Object::GetName() */
inline static auto& m42_GetName = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[42]);
/* System.Boolean UnityEngine::Object::IsPersistent(UnityEngine.Object) */
inline static auto& m43_IsPersistent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[43]);
/* System.Void UnityEngine::Object::SetName(System.String) */
inline static auto& m44_SetName = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[44]);
/* UnityEngine.Object UnityEngine::Object::FindObjectFromInstanceID(System.Int32) */
inline static auto& m45_FindObjectFromInstanceID = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[45]);
/* UnityEngine.Object UnityEngine::Object::ForceLoadFromInstanceID(System.Int32) */
inline static auto& m46_ForceLoadFromInstanceID = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[46]);
/* System.Void UnityEngine::Object::MarkDirty() */
inline static auto& m47_MarkDirty = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[47]);
/* System.Void UnityEngine::Object::.ctor() */
inline static auto& m48__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[48]);
/* System.Void UnityEngine::Object::.cctor() */
inline static auto& m49__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[49]);
/* System.Void UnityEngine::Object::Destroy_Injected(System.IntPtr, System.Single) */
inline static auto& m50_Destroy_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[50]);
/* System.Void UnityEngine::Object::DestroyImmediate_Injected(System.IntPtr, System.Boolean) */
inline static auto& m51_DestroyImmediate_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[51]);
/* System.Void UnityEngine::Object::DontDestroyOnLoad_Injected(System.IntPtr) */
inline static auto& m52_DontDestroyOnLoad_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[52]);
/* UnityEngine.HideFlags UnityEngine::Object::get_hideFlags_Injected(System.IntPtr) */
inline static auto& m53_get_hideFlags_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[53]);
/* System.Void UnityEngine::Object::set_hideFlags_Injected(System.IntPtr, UnityEngine.HideFlags) */
inline static auto& m54_set_hideFlags_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[54]);
/* System.IntPtr UnityEngine::Object::Internal_CloneSingle_Injected(System.IntPtr) */
inline static auto& m55_Internal_CloneSingle_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[55]);
/* System.IntPtr UnityEngine::Object::Internal_CloneSingleWithParent_Injected(System.IntPtr, System.IntPtr, System.Boolean) */
inline static auto& m56_Internal_CloneSingleWithParent_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[56]);
/* System.IntPtr UnityEngine::Object::Internal_InstantiateSingle_Injected(System.IntPtr, UnityEngine.Vector3&, UnityEngine.Quaternion&) */
inline static auto& m57_Internal_InstantiateSingle_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[57]);
/* System.IntPtr UnityEngine::Object::Internal_InstantiateSingleWithParent_Injected(System.IntPtr, System.IntPtr, UnityEngine.Vector3&, UnityEngine.Quaternion&) */
inline static auto& m58_Internal_InstantiateSingleWithParent_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[58]);
/* System.Void UnityEngine::Object::ToString_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m59_ToString_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[59]);
/* System.Void UnityEngine::Object::GetName_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m60_GetName_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[60]);
/* System.Boolean UnityEngine::Object::IsPersistent_Injected(System.IntPtr) */
inline static auto& m61_IsPersistent_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[61]);
/* System.Void UnityEngine::Object::SetName_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m62_SetName_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[62]);
/* System.IntPtr UnityEngine::Object::FindObjectFromInstanceID_Injected(System.Int32) */
inline static auto& m63_FindObjectFromInstanceID_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[63]);
/* System.IntPtr UnityEngine::Object::ForceLoadFromInstanceID_Injected(System.Int32) */
inline static auto& m64_ForceLoadFromInstanceID_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[64]);
/* System.Void UnityEngine::Object::MarkDirty_Injected(System.IntPtr) */
inline static auto& m65_MarkDirty_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[65]);

};

}