
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Transform {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 97> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Void UnityEngine::Transform::.ctor() */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* UnityEngine.Vector3 UnityEngine::Transform::get_position() */
inline static auto& m1_get_position = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void UnityEngine::Transform::set_position(UnityEngine.Vector3) */
inline static auto& m2_set_position = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* UnityEngine.Vector3 UnityEngine::Transform::get_localPosition() */
inline static auto& m3_get_localPosition = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void UnityEngine::Transform::set_localPosition(UnityEngine.Vector3) */
inline static auto& m4_set_localPosition = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* UnityEngine.Vector3 UnityEngine::Transform::get_eulerAngles() */
inline static auto& m5_get_eulerAngles = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Void UnityEngine::Transform::set_eulerAngles(UnityEngine.Vector3) */
inline static auto& m6_set_eulerAngles = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* UnityEngine.Vector3 UnityEngine::Transform::get_localEulerAngles() */
inline static auto& m7_get_localEulerAngles = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.Void UnityEngine::Transform::set_localEulerAngles(UnityEngine.Vector3) */
inline static auto& m8_set_localEulerAngles = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* UnityEngine.Vector3 UnityEngine::Transform::get_right() */
inline static auto& m9_get_right = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* UnityEngine.Vector3 UnityEngine::Transform::get_up() */
inline static auto& m10_get_up = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Void UnityEngine::Transform::set_up(UnityEngine.Vector3) */
inline static auto& m11_set_up = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* UnityEngine.Vector3 UnityEngine::Transform::get_forward() */
inline static auto& m12_get_forward = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.Void UnityEngine::Transform::set_forward(UnityEngine.Vector3) */
inline static auto& m13_set_forward = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* UnityEngine.Quaternion UnityEngine::Transform::get_rotation() */
inline static auto& m14_get_rotation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* System.Void UnityEngine::Transform::set_rotation(UnityEngine.Quaternion) */
inline static auto& m15_set_rotation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* UnityEngine.Quaternion UnityEngine::Transform::get_localRotation() */
inline static auto& m16_get_localRotation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* System.Void UnityEngine::Transform::set_localRotation(UnityEngine.Quaternion) */
inline static auto& m17_set_localRotation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* UnityEngine.Vector3 UnityEngine::Transform::get_localScale() */
inline static auto& m18_get_localScale = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* System.Void UnityEngine::Transform::set_localScale(UnityEngine.Vector3) */
inline static auto& m19_set_localScale = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* UnityEngine.Transform UnityEngine::Transform::get_parent() */
inline static auto& m20_get_parent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.Void UnityEngine::Transform::set_parent(UnityEngine.Transform) */
inline static auto& m21_set_parent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* UnityEngine.Transform UnityEngine::Transform::get_parentInternal() */
inline static auto& m22_get_parentInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* System.Void UnityEngine::Transform::set_parentInternal(UnityEngine.Transform) */
inline static auto& m23_set_parentInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[23]);
/* UnityEngine.Transform UnityEngine::Transform::GetParent() */
inline static auto& m24_GetParent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[24]);
/* System.Void UnityEngine::Transform::SetParent(UnityEngine.Transform) */
inline static auto& m25_SetParent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[25]);
/* System.Void UnityEngine::Transform::SetParent(UnityEngine.Transform, System.Boolean) */
inline static auto& m26_SetParent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[26]);
/* UnityEngine.Matrix4x4 UnityEngine::Transform::get_worldToLocalMatrix() */
inline static auto& m27_get_worldToLocalMatrix = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[27]);
/* UnityEngine.Matrix4x4 UnityEngine::Transform::get_localToWorldMatrix() */
inline static auto& m28_get_localToWorldMatrix = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[28]);
/* System.Void UnityEngine::Transform::Translate(UnityEngine.Vector3, UnityEngine.Space) */
inline static auto& m29_Translate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[29]);
/* System.Void UnityEngine::Transform::Translate(UnityEngine.Vector3) */
inline static auto& m30_Translate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[30]);
/* System.Void UnityEngine::Transform::Rotate(UnityEngine.Vector3, UnityEngine.Space) */
inline static auto& m31_Rotate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[31]);
/* System.Void UnityEngine::Transform::Rotate(UnityEngine.Vector3) */
inline static auto& m32_Rotate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[32]);
/* System.Void UnityEngine::Transform::Rotate(System.Single, System.Single, System.Single, UnityEngine.Space) */
inline static auto& m33_Rotate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[33]);
/* System.Void UnityEngine::Transform::Rotate(System.Single, System.Single, System.Single) */
inline static auto& m34_Rotate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[34]);
/* System.Void UnityEngine::Transform::RotateAroundInternal(UnityEngine.Vector3, System.Single) */
inline static auto& m35_RotateAroundInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[35]);
/* System.Void UnityEngine::Transform::Rotate(UnityEngine.Vector3, System.Single, UnityEngine.Space) */
inline static auto& m36_Rotate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[36]);
/* System.Void UnityEngine::Transform::Rotate(UnityEngine.Vector3, System.Single) */
inline static auto& m37_Rotate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[37]);
/* System.Void UnityEngine::Transform::RotateAround(UnityEngine.Vector3, UnityEngine.Vector3, System.Single) */
inline static auto& m38_RotateAround = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[38]);
/* System.Void UnityEngine::Transform::LookAt(UnityEngine.Transform) */
inline static auto& m39_LookAt = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[39]);
/* System.Void UnityEngine::Transform::LookAt(UnityEngine.Vector3, UnityEngine.Vector3) */
inline static auto& m40_LookAt = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[40]);
/* System.Void UnityEngine::Transform::LookAt(UnityEngine.Vector3) */
inline static auto& m41_LookAt = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[41]);
/* System.Void UnityEngine::Transform::Internal_LookAt(UnityEngine.Vector3, UnityEngine.Vector3) */
inline static auto& m42_Internal_LookAt = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[42]);
/* UnityEngine.Vector3 UnityEngine::Transform::TransformDirection(UnityEngine.Vector3) */
inline static auto& m43_TransformDirection = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[43]);
/* UnityEngine.Vector3 UnityEngine::Transform::InverseTransformDirection(UnityEngine.Vector3) */
inline static auto& m44_InverseTransformDirection = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[44]);
/* UnityEngine.Vector3 UnityEngine::Transform::TransformPoint(UnityEngine.Vector3) */
inline static auto& m45_TransformPoint = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[45]);
/* UnityEngine.Vector3 UnityEngine::Transform::TransformPoint(System.Single, System.Single, System.Single) */
inline static auto& m46_TransformPoint = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[46]);
/* UnityEngine.Vector3 UnityEngine::Transform::InverseTransformPoint(UnityEngine.Vector3) */
inline static auto& m47_InverseTransformPoint = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[47]);
/* UnityEngine.Transform UnityEngine::Transform::get_root() */
inline static auto& m48_get_root = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[48]);
/* UnityEngine.Transform UnityEngine::Transform::GetRoot() */
inline static auto& m49_GetRoot = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[49]);
/* System.Int32 UnityEngine::Transform::get_childCount() */
inline static auto& m50_get_childCount = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[50]);
/* System.Void UnityEngine::Transform::DetachChildren() */
inline static auto& m51_DetachChildren = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[51]);
/* System.Void UnityEngine::Transform::SetAsFirstSibling() */
inline static auto& m52_SetAsFirstSibling = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[52]);
/* System.Void UnityEngine::Transform::SetAsLastSibling() */
inline static auto& m53_SetAsLastSibling = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[53]);
/* System.Void UnityEngine::Transform::SetSiblingIndex(System.Int32) */
inline static auto& m54_SetSiblingIndex = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[54]);
/* System.Int32 UnityEngine::Transform::GetSiblingIndex() */
inline static auto& m55_GetSiblingIndex = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[55]);
/* UnityEngine.Transform UnityEngine::Transform::FindRelativeTransformWithPath(System.String, System.Boolean) */
inline static auto& m56_FindRelativeTransformWithPath = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[56]);
/* UnityEngine.Transform UnityEngine::Transform::Find(System.String) */
inline static auto& m57_Find = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[57]);
/* UnityEngine.Vector3 UnityEngine::Transform::get_lossyScale() */
inline static auto& m58_get_lossyScale = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[58]);
/* System.Boolean UnityEngine::Transform::IsChildOf(UnityEngine.Transform) */
inline static auto& m59_IsChildOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[59]);
/* System.Boolean UnityEngine::Transform::get_hasChanged() */
inline static auto& m60_get_hasChanged = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[60]);
/* System.Void UnityEngine::Transform::set_hasChanged(System.Boolean) */
inline static auto& m61_set_hasChanged = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[61]);
/* System.Collections.IEnumerator UnityEngine::Transform::GetEnumerator() */
inline static auto& m62_GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[62]);
/* UnityEngine.Transform UnityEngine::Transform::GetChild(System.Int32) */
inline static auto& m63_GetChild = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[63]);
/* System.Void UnityEngine::Transform::get_position_Injected(System.IntPtr, UnityEngine.Vector3&) */
inline static auto& m64_get_position_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[64]);
/* System.Void UnityEngine::Transform::set_position_Injected(System.IntPtr, UnityEngine.Vector3&) */
inline static auto& m65_set_position_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[65]);
/* System.Void UnityEngine::Transform::get_localPosition_Injected(System.IntPtr, UnityEngine.Vector3&) */
inline static auto& m66_get_localPosition_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[66]);
/* System.Void UnityEngine::Transform::set_localPosition_Injected(System.IntPtr, UnityEngine.Vector3&) */
inline static auto& m67_set_localPosition_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[67]);
/* System.Void UnityEngine::Transform::get_rotation_Injected(System.IntPtr, UnityEngine.Quaternion&) */
inline static auto& m68_get_rotation_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[68]);
/* System.Void UnityEngine::Transform::set_rotation_Injected(System.IntPtr, UnityEngine.Quaternion&) */
inline static auto& m69_set_rotation_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[69]);
/* System.Void UnityEngine::Transform::get_localRotation_Injected(System.IntPtr, UnityEngine.Quaternion&) */
inline static auto& m70_get_localRotation_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[70]);
/* System.Void UnityEngine::Transform::set_localRotation_Injected(System.IntPtr, UnityEngine.Quaternion&) */
inline static auto& m71_set_localRotation_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[71]);
/* System.Void UnityEngine::Transform::get_localScale_Injected(System.IntPtr, UnityEngine.Vector3&) */
inline static auto& m72_get_localScale_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[72]);
/* System.Void UnityEngine::Transform::set_localScale_Injected(System.IntPtr, UnityEngine.Vector3&) */
inline static auto& m73_set_localScale_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[73]);
/* System.IntPtr UnityEngine::Transform::GetParent_Injected(System.IntPtr) */
inline static auto& m74_GetParent_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[74]);
/* System.Void UnityEngine::Transform::SetParent_Injected(System.IntPtr, System.IntPtr, System.Boolean) */
inline static auto& m75_SetParent_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[75]);
/* System.Void UnityEngine::Transform::get_worldToLocalMatrix_Injected(System.IntPtr, UnityEngine.Matrix4x4&) */
inline static auto& m76_get_worldToLocalMatrix_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[76]);
/* System.Void UnityEngine::Transform::get_localToWorldMatrix_Injected(System.IntPtr, UnityEngine.Matrix4x4&) */
inline static auto& m77_get_localToWorldMatrix_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[77]);
/* System.Void UnityEngine::Transform::RotateAroundInternal_Injected(System.IntPtr, UnityEngine.Vector3&, System.Single) */
inline static auto& m78_RotateAroundInternal_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[78]);
/* System.Void UnityEngine::Transform::Internal_LookAt_Injected(System.IntPtr, UnityEngine.Vector3&, UnityEngine.Vector3&) */
inline static auto& m79_Internal_LookAt_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[79]);
/* System.Void UnityEngine::Transform::TransformDirection_Injected(System.IntPtr, UnityEngine.Vector3&, UnityEngine.Vector3&) */
inline static auto& m80_TransformDirection_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[80]);
/* System.Void UnityEngine::Transform::InverseTransformDirection_Injected(System.IntPtr, UnityEngine.Vector3&, UnityEngine.Vector3&) */
inline static auto& m81_InverseTransformDirection_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[81]);
/* System.Void UnityEngine::Transform::TransformPoint_Injected(System.IntPtr, UnityEngine.Vector3&, UnityEngine.Vector3&) */
inline static auto& m82_TransformPoint_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[82]);
/* System.Void UnityEngine::Transform::InverseTransformPoint_Injected(System.IntPtr, UnityEngine.Vector3&, UnityEngine.Vector3&) */
inline static auto& m83_InverseTransformPoint_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[83]);
/* System.IntPtr UnityEngine::Transform::GetRoot_Injected(System.IntPtr) */
inline static auto& m84_GetRoot_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[84]);
/* System.Int32 UnityEngine::Transform::get_childCount_Injected(System.IntPtr) */
inline static auto& m85_get_childCount_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[85]);
/* System.Void UnityEngine::Transform::DetachChildren_Injected(System.IntPtr) */
inline static auto& m86_DetachChildren_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[86]);
/* System.Void UnityEngine::Transform::SetAsFirstSibling_Injected(System.IntPtr) */
inline static auto& m87_SetAsFirstSibling_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[87]);
/* System.Void UnityEngine::Transform::SetAsLastSibling_Injected(System.IntPtr) */
inline static auto& m88_SetAsLastSibling_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[88]);
/* System.Void UnityEngine::Transform::SetSiblingIndex_Injected(System.IntPtr, System.Int32) */
inline static auto& m89_SetSiblingIndex_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[89]);
/* System.Int32 UnityEngine::Transform::GetSiblingIndex_Injected(System.IntPtr) */
inline static auto& m90_GetSiblingIndex_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[90]);
/* System.IntPtr UnityEngine::Transform::FindRelativeTransformWithPath_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&, System.Boolean) */
inline static auto& m91_FindRelativeTransformWithPath_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[91]);
/* System.Void UnityEngine::Transform::get_lossyScale_Injected(System.IntPtr, UnityEngine.Vector3&) */
inline static auto& m92_get_lossyScale_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[92]);
/* System.Boolean UnityEngine::Transform::IsChildOf_Injected(System.IntPtr, System.IntPtr) */
inline static auto& m93_IsChildOf_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[93]);
/* System.Boolean UnityEngine::Transform::get_hasChanged_Injected(System.IntPtr) */
inline static auto& m94_get_hasChanged_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[94]);
/* System.Void UnityEngine::Transform::set_hasChanged_Injected(System.IntPtr, System.Boolean) */
inline static auto& m95_set_hasChanged_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[95]);
/* System.IntPtr UnityEngine::Transform::GetChild_Injected(System.IntPtr, System.Int32) */
inline static auto& m96_GetChild_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[96]);

};

}