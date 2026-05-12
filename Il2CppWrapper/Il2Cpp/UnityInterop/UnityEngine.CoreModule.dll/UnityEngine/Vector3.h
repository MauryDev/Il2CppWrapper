
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Vector3 {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 49> methods;
    inline static std::array<Il2CppWrapper::Field*, 15> fields;  
    /* System.Single UnityEngine::Vector3::kEpsilon */
inline static auto& f_kEpsilon = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.Single UnityEngine::Vector3::kEpsilonNormalSqrt */
inline static auto& f_kEpsilonNormalSqrt = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
/* System.Single UnityEngine::Vector3::x */
inline static auto& f_x = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[2]);
/* System.Single UnityEngine::Vector3::y */
inline static auto& f_y = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[3]);
/* System.Single UnityEngine::Vector3::z */
inline static auto& f_z = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[4]);
/* UnityEngine.Vector3 UnityEngine::Vector3::zeroVector */
inline static auto& f_zeroVector = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[5]);
/* UnityEngine.Vector3 UnityEngine::Vector3::oneVector */
inline static auto& f_oneVector = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[6]);
/* UnityEngine.Vector3 UnityEngine::Vector3::upVector */
inline static auto& f_upVector = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[7]);
/* UnityEngine.Vector3 UnityEngine::Vector3::downVector */
inline static auto& f_downVector = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[8]);
/* UnityEngine.Vector3 UnityEngine::Vector3::leftVector */
inline static auto& f_leftVector = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[9]);
/* UnityEngine.Vector3 UnityEngine::Vector3::rightVector */
inline static auto& f_rightVector = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[10]);
/* UnityEngine.Vector3 UnityEngine::Vector3::forwardVector */
inline static auto& f_forwardVector = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[11]);
/* UnityEngine.Vector3 UnityEngine::Vector3::backVector */
inline static auto& f_backVector = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[12]);
/* UnityEngine.Vector3 UnityEngine::Vector3::positiveInfinityVector */
inline static auto& f_positiveInfinityVector = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[13]);
/* UnityEngine.Vector3 UnityEngine::Vector3::negativeInfinityVector */
inline static auto& f_negativeInfinityVector = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[14]);
  
    /* UnityEngine.Vector3 UnityEngine::Vector3::Slerp(UnityEngine.Vector3, UnityEngine.Vector3, System.Single) */
inline static auto& m0_Slerp = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* UnityEngine.Vector3 UnityEngine::Vector3::Lerp(UnityEngine.Vector3, UnityEngine.Vector3, System.Single) */
inline static auto& m1_Lerp = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* UnityEngine.Vector3 UnityEngine::Vector3::LerpUnclamped(UnityEngine.Vector3, UnityEngine.Vector3, System.Single) */
inline static auto& m2_LerpUnclamped = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* System.Single UnityEngine::Vector3::get_Item(System.Int32) */
inline static auto& m3_get_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void UnityEngine::Vector3::set_Item(System.Int32, System.Single) */
inline static auto& m4_set_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Void UnityEngine::Vector3::.ctor(System.Single, System.Single, System.Single) */
inline static auto& m5__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Void UnityEngine::Vector3::.ctor(System.Single, System.Single) */
inline static auto& m6__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* UnityEngine.Vector3 UnityEngine::Vector3::Scale(UnityEngine.Vector3, UnityEngine.Vector3) */
inline static auto& m7_Scale = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Void UnityEngine::Vector3::Scale(UnityEngine.Vector3) */
inline static auto& m8_Scale = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* UnityEngine.Vector3 UnityEngine::Vector3::Cross(UnityEngine.Vector3, UnityEngine.Vector3) */
inline static auto& m9_Cross = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* System.Int32 UnityEngine::Vector3::GetHashCode() */
inline static auto& m10_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[10]);
/* System.Boolean UnityEngine::Vector3::Equals(System.Object) */
inline static auto& m11_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[11]);
/* System.Boolean UnityEngine::Vector3::Equals(UnityEngine.Vector3) */
inline static auto& m12_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[12]);
/* UnityEngine.Vector3 UnityEngine::Vector3::Normalize(UnityEngine.Vector3) */
inline static auto& m13_Normalize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.Void UnityEngine::Vector3::Normalize() */
inline static auto& m14_Normalize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* UnityEngine.Vector3 UnityEngine::Vector3::get_normalized() */
inline static auto& m15_get_normalized = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* System.Single UnityEngine::Vector3::Dot(UnityEngine.Vector3, UnityEngine.Vector3) */
inline static auto& m16_Dot = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[16]);
/* UnityEngine.Vector3 UnityEngine::Vector3::Project(UnityEngine.Vector3, UnityEngine.Vector3) */
inline static auto& m17_Project = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[17]);
/* System.Single UnityEngine::Vector3::Angle(UnityEngine.Vector3, UnityEngine.Vector3) */
inline static auto& m18_Angle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[18]);
/* System.Single UnityEngine::Vector3::Distance(UnityEngine.Vector3, UnityEngine.Vector3) */
inline static auto& m19_Distance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[19]);
/* UnityEngine.Vector3 UnityEngine::Vector3::ClampMagnitude(UnityEngine.Vector3, System.Single) */
inline static auto& m20_ClampMagnitude = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[20]);
/* System.Single UnityEngine::Vector3::Magnitude(UnityEngine.Vector3) */
inline static auto& m21_Magnitude = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[21]);
/* System.Single UnityEngine::Vector3::get_magnitude() */
inline static auto& m22_get_magnitude = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* System.Single UnityEngine::Vector3::SqrMagnitude(UnityEngine.Vector3) */
inline static auto& m23_SqrMagnitude = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* System.Single UnityEngine::Vector3::get_sqrMagnitude() */
inline static auto& m24_get_sqrMagnitude = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[24]);
/* UnityEngine.Vector3 UnityEngine::Vector3::Min(UnityEngine.Vector3, UnityEngine.Vector3) */
inline static auto& m25_Min = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* UnityEngine.Vector3 UnityEngine::Vector3::Max(UnityEngine.Vector3, UnityEngine.Vector3) */
inline static auto& m26_Max = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* UnityEngine.Vector3 UnityEngine::Vector3::get_zero() */
inline static auto& m27_get_zero = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);
/* UnityEngine.Vector3 UnityEngine::Vector3::get_one() */
inline static auto& m28_get_one = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[28]);
/* UnityEngine.Vector3 UnityEngine::Vector3::get_forward() */
inline static auto& m29_get_forward = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);
/* UnityEngine.Vector3 UnityEngine::Vector3::get_back() */
inline static auto& m30_get_back = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[30]);
/* UnityEngine.Vector3 UnityEngine::Vector3::get_up() */
inline static auto& m31_get_up = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[31]);
/* UnityEngine.Vector3 UnityEngine::Vector3::get_down() */
inline static auto& m32_get_down = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[32]);
/* UnityEngine.Vector3 UnityEngine::Vector3::get_left() */
inline static auto& m33_get_left = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[33]);
/* UnityEngine.Vector3 UnityEngine::Vector3::get_right() */
inline static auto& m34_get_right = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[34]);
/* UnityEngine.Vector3 UnityEngine::Vector3::get_negativeInfinity() */
inline static auto& m35_get_negativeInfinity = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[35]);
/* UnityEngine.Vector3 UnityEngine::Vector3::op_Addition(UnityEngine.Vector3, UnityEngine.Vector3) */
inline static auto& m36_op_Addition = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[36]);
/* UnityEngine.Vector3 UnityEngine::Vector3::op_Subtraction(UnityEngine.Vector3, UnityEngine.Vector3) */
inline static auto& m37_op_Subtraction = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[37]);
/* UnityEngine.Vector3 UnityEngine::Vector3::op_UnaryNegation(UnityEngine.Vector3) */
inline static auto& m38_op_UnaryNegation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[38]);
/* UnityEngine.Vector3 UnityEngine::Vector3::op_Multiply(UnityEngine.Vector3, System.Single) */
inline static auto& m39_op_Multiply = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[39]);
/* UnityEngine.Vector3 UnityEngine::Vector3::op_Multiply(System.Single, UnityEngine.Vector3) */
inline static auto& m40_op_Multiply = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[40]);
/* UnityEngine.Vector3 UnityEngine::Vector3::op_Division(UnityEngine.Vector3, System.Single) */
inline static auto& m41_op_Division = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[41]);
/* System.Boolean UnityEngine::Vector3::op_Equality(UnityEngine.Vector3, UnityEngine.Vector3) */
inline static auto& m42_op_Equality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[42]);
/* System.Boolean UnityEngine::Vector3::op_Inequality(UnityEngine.Vector3, UnityEngine.Vector3) */
inline static auto& m43_op_Inequality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[43]);
/* System.String UnityEngine::Vector3::ToString() */
inline static auto& m44_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[44]);
/* System.String UnityEngine::Vector3::ToString(System.String) */
inline static auto& m45_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[45]);
/* System.String UnityEngine::Vector3::ToString(System.String, System.IFormatProvider) */
inline static auto& m46_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[46]);
/* System.Void UnityEngine::Vector3::.cctor() */
inline static auto& m47__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[47]);
/* System.Void UnityEngine::Vector3::Slerp_Injected(UnityEngine.Vector3&, UnityEngine.Vector3&, System.Single, UnityEngine.Vector3&) */
inline static auto& m48_Slerp_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[48]);

};

}