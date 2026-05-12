
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct TimeSpan {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 46> methods;
    inline static std::array<Il2CppWrapper::Field*, 4> fields;  
    /* System.TimeSpan System::TimeSpan::Zero */
inline static auto& f_Zero = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.TimeSpan System::TimeSpan::MaxValue */
inline static auto& f_MaxValue = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
/* System.TimeSpan System::TimeSpan::MinValue */
inline static auto& f_MinValue = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[2]);
/* System.Int64 System::TimeSpan::_ticks */
inline static auto& f__ticks = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[3]);
  
    /* System.Void System::TimeSpan::.ctor(System.Int64) */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void System::TimeSpan::.ctor(System.Int32, System.Int32, System.Int32) */
inline static auto& m1__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void System::TimeSpan::.ctor(System.Int32, System.Int32, System.Int32, System.Int32) */
inline static auto& m2__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void System::TimeSpan::.ctor(System.Int32, System.Int32, System.Int32, System.Int32, System.Int32) */
inline static auto& m3__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Int64 System::TimeSpan::get_Ticks() */
inline static auto& m4_get_Ticks = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Int32 System::TimeSpan::get_Days() */
inline static auto& m5_get_Days = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Int32 System::TimeSpan::get_Hours() */
inline static auto& m6_get_Hours = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.Int32 System::TimeSpan::get_Minutes() */
inline static auto& m7_get_Minutes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.Int32 System::TimeSpan::get_Seconds() */
inline static auto& m8_get_Seconds = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Double System::TimeSpan::get_TotalDays() */
inline static auto& m9_get_TotalDays = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.Double System::TimeSpan::get_TotalHours() */
inline static auto& m10_get_TotalHours = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Double System::TimeSpan::get_TotalMilliseconds() */
inline static auto& m11_get_TotalMilliseconds = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* System.Double System::TimeSpan::get_TotalMinutes() */
inline static auto& m12_get_TotalMinutes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.Double System::TimeSpan::get_TotalSeconds() */
inline static auto& m13_get_TotalSeconds = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* System.TimeSpan System::TimeSpan::Add(System.TimeSpan) */
inline static auto& m14_Add = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* System.Int32 System::TimeSpan::Compare(System.TimeSpan, System.TimeSpan) */
inline static auto& m15_Compare = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[15]);
/* System.Int32 System::TimeSpan::CompareTo(System.Object) */
inline static auto& m16_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[16]);
/* System.Int32 System::TimeSpan::CompareTo(System.TimeSpan) */
inline static auto& m17_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[17]);
/* System.TimeSpan System::TimeSpan::FromDays(System.Double) */
inline static auto& m18_FromDays = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[18]);
/* System.Boolean System::TimeSpan::Equals(System.Object) */
inline static auto& m19_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[19]);
/* System.Boolean System::TimeSpan::Equals(System.TimeSpan) */
inline static auto& m20_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[20]);
/* System.Int32 System::TimeSpan::GetHashCode() */
inline static auto& m21_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[21]);
/* System.TimeSpan System::TimeSpan::FromHours(System.Double) */
inline static auto& m22_FromHours = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[22]);
/* System.TimeSpan System::TimeSpan::Interval(System.Double, System.Int32) */
inline static auto& m23_Interval = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* System.TimeSpan System::TimeSpan::FromMilliseconds(System.Double) */
inline static auto& m24_FromMilliseconds = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* System.TimeSpan System::TimeSpan::FromMinutes(System.Double) */
inline static auto& m25_FromMinutes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* System.TimeSpan System::TimeSpan::Negate() */
inline static auto& m26_Negate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[26]);
/* System.TimeSpan System::TimeSpan::FromSeconds(System.Double) */
inline static auto& m27_FromSeconds = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);
/* System.TimeSpan System::TimeSpan::Subtract(System.TimeSpan) */
inline static auto& m28_Subtract = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[28]);
/* System.TimeSpan System::TimeSpan::FromTicks(System.Int64) */
inline static auto& m29_FromTicks = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);
/* System.Int64 System::TimeSpan::TimeToTicks(System.Int32, System.Int32, System.Int32) */
inline static auto& m30_TimeToTicks = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[30]);
/* System.TimeSpan System::TimeSpan::Parse(System.String) */
inline static auto& m31_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[31]);
/* System.TimeSpan System::TimeSpan::Parse(System.String, System.IFormatProvider) */
inline static auto& m32_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[32]);
/* System.String System::TimeSpan::ToString() */
inline static auto& m33_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[33]);
/* System.String System::TimeSpan::ToString(System.String, System.IFormatProvider) */
inline static auto& m34_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[34]);
/* System.Boolean System::TimeSpan::TryFormat(System.Span<System.Char>, System.Int32&, System.ReadOnlySpan<System.Char>, System.IFormatProvider) */
inline static auto& m35_TryFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[35]);
/* System.TimeSpan System::TimeSpan::op_UnaryNegation(System.TimeSpan) */
inline static auto& m36_op_UnaryNegation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[36]);
/* System.TimeSpan System::TimeSpan::op_Subtraction(System.TimeSpan, System.TimeSpan) */
inline static auto& m37_op_Subtraction = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[37]);
/* System.TimeSpan System::TimeSpan::op_Addition(System.TimeSpan, System.TimeSpan) */
inline static auto& m38_op_Addition = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[38]);
/* System.Boolean System::TimeSpan::op_Equality(System.TimeSpan, System.TimeSpan) */
inline static auto& m39_op_Equality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[39]);
/* System.Boolean System::TimeSpan::op_Inequality(System.TimeSpan, System.TimeSpan) */
inline static auto& m40_op_Inequality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[40]);
/* System.Boolean System::TimeSpan::op_LessThan(System.TimeSpan, System.TimeSpan) */
inline static auto& m41_op_LessThan = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[41]);
/* System.Boolean System::TimeSpan::op_LessThanOrEqual(System.TimeSpan, System.TimeSpan) */
inline static auto& m42_op_LessThanOrEqual = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[42]);
/* System.Boolean System::TimeSpan::op_GreaterThan(System.TimeSpan, System.TimeSpan) */
inline static auto& m43_op_GreaterThan = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[43]);
/* System.Boolean System::TimeSpan::op_GreaterThanOrEqual(System.TimeSpan, System.TimeSpan) */
inline static auto& m44_op_GreaterThanOrEqual = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[44]);
/* System.Void System::TimeSpan::.cctor() */
inline static auto& m45__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[45]);

};

}