
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Vector2 {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 43> methods;
    inline static std::array<Il2CppWrapper::Field*, 12> fields;  
    /* System.Single UnityEngine::Vector2::x */
inline static auto& f_x = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* System.Single UnityEngine::Vector2::y */
inline static auto& f_y = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* UnityEngine.Vector2 UnityEngine::Vector2::zeroVector */
inline static auto& f_zeroVector = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[2]);
/* UnityEngine.Vector2 UnityEngine::Vector2::oneVector */
inline static auto& f_oneVector = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[3]);
/* UnityEngine.Vector2 UnityEngine::Vector2::upVector */
inline static auto& f_upVector = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[4]);
/* UnityEngine.Vector2 UnityEngine::Vector2::downVector */
inline static auto& f_downVector = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[5]);
/* UnityEngine.Vector2 UnityEngine::Vector2::leftVector */
inline static auto& f_leftVector = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[6]);
/* UnityEngine.Vector2 UnityEngine::Vector2::rightVector */
inline static auto& f_rightVector = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[7]);
/* UnityEngine.Vector2 UnityEngine::Vector2::positiveInfinityVector */
inline static auto& f_positiveInfinityVector = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[8]);
/* UnityEngine.Vector2 UnityEngine::Vector2::negativeInfinityVector */
inline static auto& f_negativeInfinityVector = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[9]);
/* System.Single UnityEngine::Vector2::kEpsilon */
inline static auto& f_kEpsilon = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[10]);
/* System.Single UnityEngine::Vector2::kEpsilonNormalSqrt */
inline static auto& f_kEpsilonNormalSqrt = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[11]);
  
    /* System.Single UnityEngine::Vector2::get_Item(System.Int32) */
inline static auto& m0_get_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void UnityEngine::Vector2::set_Item(System.Int32, System.Single) */
inline static auto& m1_set_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void UnityEngine::Vector2::.ctor(System.Single, System.Single) */
inline static auto& m2__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void UnityEngine::Vector2::Set(System.Single, System.Single) */
inline static auto& m3_Set = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* UnityEngine.Vector2 UnityEngine::Vector2::Lerp(UnityEngine.Vector2, UnityEngine.Vector2, System.Single) */
inline static auto& m4_Lerp = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* UnityEngine.Vector2 UnityEngine::Vector2::LerpUnclamped(UnityEngine.Vector2, UnityEngine.Vector2, System.Single) */
inline static auto& m5_LerpUnclamped = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* UnityEngine.Vector2 UnityEngine::Vector2::Scale(UnityEngine.Vector2, UnityEngine.Vector2) */
inline static auto& m6_Scale = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.Void UnityEngine::Vector2::Normalize() */
inline static auto& m7_Normalize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* UnityEngine.Vector2 UnityEngine::Vector2::get_normalized() */
inline static auto& m8_get_normalized = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.String UnityEngine::Vector2::ToString() */
inline static auto& m9_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);
/* System.String UnityEngine::Vector2::ToString(System.String) */
inline static auto& m10_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.String UnityEngine::Vector2::ToString(System.String, System.IFormatProvider) */
inline static auto& m11_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[11]);
/* System.Int32 UnityEngine::Vector2::GetHashCode() */
inline static auto& m12_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[12]);
/* System.Boolean UnityEngine::Vector2::Equals(System.Object) */
inline static auto& m13_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[13]);
/* System.Boolean UnityEngine::Vector2::Equals(UnityEngine.Vector2) */
inline static auto& m14_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[14]);
/* System.Single UnityEngine::Vector2::Dot(UnityEngine.Vector2, UnityEngine.Vector2) */
inline static auto& m15_Dot = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[15]);
/* System.Single UnityEngine::Vector2::get_magnitude() */
inline static auto& m16_get_magnitude = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* System.Single UnityEngine::Vector2::get_sqrMagnitude() */
inline static auto& m17_get_sqrMagnitude = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.Single UnityEngine::Vector2::Angle(UnityEngine.Vector2, UnityEngine.Vector2) */
inline static auto& m18_Angle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[18]);
/* System.Single UnityEngine::Vector2::Distance(UnityEngine.Vector2, UnityEngine.Vector2) */
inline static auto& m19_Distance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[19]);
/* System.Single UnityEngine::Vector2::SqrMagnitude() */
inline static auto& m20_SqrMagnitude = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* UnityEngine.Vector2 UnityEngine::Vector2::Min(UnityEngine.Vector2, UnityEngine.Vector2) */
inline static auto& m21_Min = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[21]);
/* UnityEngine.Vector2 UnityEngine::Vector2::Max(UnityEngine.Vector2, UnityEngine.Vector2) */
inline static auto& m22_Max = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[22]);
/* UnityEngine.Vector2 UnityEngine::Vector2::op_Addition(UnityEngine.Vector2, UnityEngine.Vector2) */
inline static auto& m23_op_Addition = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* UnityEngine.Vector2 UnityEngine::Vector2::op_Subtraction(UnityEngine.Vector2, UnityEngine.Vector2) */
inline static auto& m24_op_Subtraction = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* UnityEngine.Vector2 UnityEngine::Vector2::op_Multiply(UnityEngine.Vector2, UnityEngine.Vector2) */
inline static auto& m25_op_Multiply = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* UnityEngine.Vector2 UnityEngine::Vector2::op_Division(UnityEngine.Vector2, UnityEngine.Vector2) */
inline static auto& m26_op_Division = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* UnityEngine.Vector2 UnityEngine::Vector2::op_UnaryNegation(UnityEngine.Vector2) */
inline static auto& m27_op_UnaryNegation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);
/* UnityEngine.Vector2 UnityEngine::Vector2::op_Multiply(UnityEngine.Vector2, System.Single) */
inline static auto& m28_op_Multiply = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[28]);
/* UnityEngine.Vector2 UnityEngine::Vector2::op_Multiply(System.Single, UnityEngine.Vector2) */
inline static auto& m29_op_Multiply = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);
/* UnityEngine.Vector2 UnityEngine::Vector2::op_Division(UnityEngine.Vector2, System.Single) */
inline static auto& m30_op_Division = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[30]);
/* System.Boolean UnityEngine::Vector2::op_Equality(UnityEngine.Vector2, UnityEngine.Vector2) */
inline static auto& m31_op_Equality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[31]);
/* System.Boolean UnityEngine::Vector2::op_Inequality(UnityEngine.Vector2, UnityEngine.Vector2) */
inline static auto& m32_op_Inequality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[32]);
/* UnityEngine.Vector2 UnityEngine::Vector2::op_Implicit(UnityEngine.Vector3) */
inline static auto& m33_op_Implicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[33]);
/* UnityEngine.Vector3 UnityEngine::Vector2::op_Implicit(UnityEngine.Vector2) */
inline static auto& m34_op_Implicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[34]);
/* UnityEngine.Vector2 UnityEngine::Vector2::get_zero() */
inline static auto& m35_get_zero = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[35]);
/* UnityEngine.Vector2 UnityEngine::Vector2::get_one() */
inline static auto& m36_get_one = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[36]);
/* UnityEngine.Vector2 UnityEngine::Vector2::get_up() */
inline static auto& m37_get_up = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[37]);
/* UnityEngine.Vector2 UnityEngine::Vector2::get_down() */
inline static auto& m38_get_down = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[38]);
/* UnityEngine.Vector2 UnityEngine::Vector2::get_left() */
inline static auto& m39_get_left = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[39]);
/* UnityEngine.Vector2 UnityEngine::Vector2::get_right() */
inline static auto& m40_get_right = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[40]);
/* UnityEngine.Vector2 UnityEngine::Vector2::get_negativeInfinity() */
inline static auto& m41_get_negativeInfinity = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[41]);
/* System.Void UnityEngine::Vector2::.cctor() */
inline static auto& m42__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[42]);

};

}