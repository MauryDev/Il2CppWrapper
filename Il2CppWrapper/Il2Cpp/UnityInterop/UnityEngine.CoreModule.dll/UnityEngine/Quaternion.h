
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Quaternion {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 42> methods;
    inline static std::array<Il2CppWrapper::Field*, 6> fields;  
    /* System.Single UnityEngine::Quaternion::x */
inline static auto& f_x = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* System.Single UnityEngine::Quaternion::y */
inline static auto& f_y = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* System.Single UnityEngine::Quaternion::z */
inline static auto& f_z = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[2]);
/* System.Single UnityEngine::Quaternion::w */
inline static auto& f_w = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[3]);
/* UnityEngine.Quaternion UnityEngine::Quaternion::identityQuaternion */
inline static auto& f_identityQuaternion = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[4]);
/* System.Single UnityEngine::Quaternion::kEpsilon */
inline static auto& f_kEpsilon = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[5]);
  
    /* UnityEngine.Quaternion UnityEngine::Quaternion::FromToRotation(UnityEngine.Vector3, UnityEngine.Vector3) */
inline static auto& m0_FromToRotation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* UnityEngine.Quaternion UnityEngine::Quaternion::Inverse(UnityEngine.Quaternion) */
inline static auto& m1_Inverse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* UnityEngine.Quaternion UnityEngine::Quaternion::Slerp(UnityEngine.Quaternion, UnityEngine.Quaternion, System.Single) */
inline static auto& m2_Slerp = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* UnityEngine.Quaternion UnityEngine::Quaternion::Lerp(UnityEngine.Quaternion, UnityEngine.Quaternion, System.Single) */
inline static auto& m3_Lerp = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* UnityEngine.Quaternion UnityEngine::Quaternion::Internal_FromEulerRad(UnityEngine.Vector3) */
inline static auto& m4_Internal_FromEulerRad = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* UnityEngine.Vector3 UnityEngine::Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion) */
inline static auto& m5_Internal_ToEulerRad = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.Void UnityEngine::Quaternion::Internal_ToAxisAngleRad(UnityEngine.Quaternion, UnityEngine.Vector3&, System.Single&) */
inline static auto& m6_Internal_ToAxisAngleRad = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* UnityEngine.Quaternion UnityEngine::Quaternion::AngleAxis(System.Single, UnityEngine.Vector3) */
inline static auto& m7_AngleAxis = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* UnityEngine.Quaternion UnityEngine::Quaternion::LookRotation(UnityEngine.Vector3, UnityEngine.Vector3) */
inline static auto& m8_LookRotation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);
/* UnityEngine.Quaternion UnityEngine::Quaternion::LookRotation(UnityEngine.Vector3) */
inline static auto& m9_LookRotation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* System.Void UnityEngine::Quaternion::.ctor(System.Single, System.Single, System.Single, System.Single) */
inline static auto& m10__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* UnityEngine.Quaternion UnityEngine::Quaternion::get_identity() */
inline static auto& m11_get_identity = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* UnityEngine.Quaternion UnityEngine::Quaternion::op_Multiply(UnityEngine.Quaternion, UnityEngine.Quaternion) */
inline static auto& m12_op_Multiply = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);
/* UnityEngine.Vector3 UnityEngine::Quaternion::op_Multiply(UnityEngine.Quaternion, UnityEngine.Vector3) */
inline static auto& m13_op_Multiply = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.Boolean UnityEngine::Quaternion::IsEqualUsingDot(System.Single) */
inline static auto& m14_IsEqualUsingDot = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);
/* System.Boolean UnityEngine::Quaternion::op_Equality(UnityEngine.Quaternion, UnityEngine.Quaternion) */
inline static auto& m15_op_Equality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[15]);
/* System.Boolean UnityEngine::Quaternion::op_Inequality(UnityEngine.Quaternion, UnityEngine.Quaternion) */
inline static auto& m16_op_Inequality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[16]);
/* System.Single UnityEngine::Quaternion::Dot(UnityEngine.Quaternion, UnityEngine.Quaternion) */
inline static auto& m17_Dot = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[17]);
/* System.Single UnityEngine::Quaternion::Angle(UnityEngine.Quaternion, UnityEngine.Quaternion) */
inline static auto& m18_Angle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[18]);
/* UnityEngine.Vector3 UnityEngine::Quaternion::Internal_MakePositive(UnityEngine.Vector3) */
inline static auto& m19_Internal_MakePositive = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[19]);
/* UnityEngine.Vector3 UnityEngine::Quaternion::get_eulerAngles() */
inline static auto& m20_get_eulerAngles = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.Void UnityEngine::Quaternion::set_eulerAngles(UnityEngine.Vector3) */
inline static auto& m21_set_eulerAngles = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* UnityEngine.Quaternion UnityEngine::Quaternion::Euler(System.Single, System.Single, System.Single) */
inline static auto& m22_Euler = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[22]);
/* UnityEngine.Quaternion UnityEngine::Quaternion::Euler(UnityEngine.Vector3) */
inline static auto& m23_Euler = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* System.Void UnityEngine::Quaternion::ToAngleAxis(System.Single&, UnityEngine.Vector3&) */
inline static auto& m24_ToAngleAxis = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[24]);
/* System.Void UnityEngine::Quaternion::SetFromToRotation(UnityEngine.Vector3, UnityEngine.Vector3) */
inline static auto& m25_SetFromToRotation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[25]);
/* System.Int32 UnityEngine::Quaternion::GetHashCode() */
inline static auto& m26_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[26]);
/* System.Boolean UnityEngine::Quaternion::Equals(System.Object) */
inline static auto& m27_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[27]);
/* System.Boolean UnityEngine::Quaternion::Equals(UnityEngine.Quaternion) */
inline static auto& m28_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[28]);
/* System.String UnityEngine::Quaternion::ToString() */
inline static auto& m29_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[29]);
/* System.String UnityEngine::Quaternion::ToString(System.String) */
inline static auto& m30_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[30]);
/* System.String UnityEngine::Quaternion::ToString(System.String, System.IFormatProvider) */
inline static auto& m31_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[31]);
/* System.Void UnityEngine::Quaternion::.cctor() */
inline static auto& m32__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[32]);
/* System.Void UnityEngine::Quaternion::FromToRotation_Injected(UnityEngine.Vector3&, UnityEngine.Vector3&, UnityEngine.Quaternion&) */
inline static auto& m33_FromToRotation_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[33]);
/* System.Void UnityEngine::Quaternion::Inverse_Injected(UnityEngine.Quaternion&, UnityEngine.Quaternion&) */
inline static auto& m34_Inverse_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[34]);
/* System.Void UnityEngine::Quaternion::Slerp_Injected(UnityEngine.Quaternion&, UnityEngine.Quaternion&, System.Single, UnityEngine.Quaternion&) */
inline static auto& m35_Slerp_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[35]);
/* System.Void UnityEngine::Quaternion::Lerp_Injected(UnityEngine.Quaternion&, UnityEngine.Quaternion&, System.Single, UnityEngine.Quaternion&) */
inline static auto& m36_Lerp_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[36]);
/* System.Void UnityEngine::Quaternion::Internal_FromEulerRad_Injected(UnityEngine.Vector3&, UnityEngine.Quaternion&) */
inline static auto& m37_Internal_FromEulerRad_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[37]);
/* System.Void UnityEngine::Quaternion::Internal_ToEulerRad_Injected(UnityEngine.Quaternion&, UnityEngine.Vector3&) */
inline static auto& m38_Internal_ToEulerRad_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[38]);
/* System.Void UnityEngine::Quaternion::Internal_ToAxisAngleRad_Injected(UnityEngine.Quaternion&, UnityEngine.Vector3&, System.Single&) */
inline static auto& m39_Internal_ToAxisAngleRad_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[39]);
/* System.Void UnityEngine::Quaternion::AngleAxis_Injected(System.Single, UnityEngine.Vector3&, UnityEngine.Quaternion&) */
inline static auto& m40_AngleAxis_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[40]);
/* System.Void UnityEngine::Quaternion::LookRotation_Injected(UnityEngine.Vector3&, UnityEngine.Vector3&, UnityEngine.Quaternion&) */
inline static auto& m41_LookRotation_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[41]);

};

}