
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct DateTime {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 101> methods;
    inline static std::array<Il2CppWrapper::Field*, 47> fields;  
    /* System.Int64 System::DateTime::TicksPerMillisecond */
inline static auto& f_TicksPerMillisecond = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.Int64 System::DateTime::TicksPerSecond */
inline static auto& f_TicksPerSecond = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
/* System.Int64 System::DateTime::TicksPerMinute */
inline static auto& f_TicksPerMinute = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[2]);
/* System.Int64 System::DateTime::TicksPerHour */
inline static auto& f_TicksPerHour = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[3]);
/* System.Int64 System::DateTime::TicksPerDay */
inline static auto& f_TicksPerDay = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[4]);
/* System.Int32 System::DateTime::MillisPerSecond */
inline static auto& f_MillisPerSecond = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[5]);
/* System.Int32 System::DateTime::MillisPerMinute */
inline static auto& f_MillisPerMinute = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[6]);
/* System.Int32 System::DateTime::MillisPerHour */
inline static auto& f_MillisPerHour = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[7]);
/* System.Int32 System::DateTime::MillisPerDay */
inline static auto& f_MillisPerDay = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[8]);
/* System.Int32 System::DateTime::DaysPerYear */
inline static auto& f_DaysPerYear = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[9]);
/* System.Int32 System::DateTime::DaysPer4Years */
inline static auto& f_DaysPer4Years = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[10]);
/* System.Int32 System::DateTime::DaysPer100Years */
inline static auto& f_DaysPer100Years = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[11]);
/* System.Int32 System::DateTime::DaysPer400Years */
inline static auto& f_DaysPer400Years = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[12]);
/* System.Int32 System::DateTime::DaysTo1601 */
inline static auto& f_DaysTo1601 = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[13]);
/* System.Int32 System::DateTime::DaysTo1899 */
inline static auto& f_DaysTo1899 = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[14]);
/* System.Int32 System::DateTime::DaysTo1970 */
inline static auto& f_DaysTo1970 = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[15]);
/* System.Int32 System::DateTime::DaysTo10000 */
inline static auto& f_DaysTo10000 = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[16]);
/* System.Int64 System::DateTime::MinTicks */
inline static auto& f_MinTicks = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[17]);
/* System.Int64 System::DateTime::MaxTicks */
inline static auto& f_MaxTicks = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[18]);
/* System.Int64 System::DateTime::MaxMillis */
inline static auto& f_MaxMillis = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[19]);
/* System.Int64 System::DateTime::UnixEpochTicks */
inline static auto& f_UnixEpochTicks = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[20]);
/* System.Int64 System::DateTime::FileTimeOffset */
inline static auto& f_FileTimeOffset = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[21]);
/* System.Int64 System::DateTime::DoubleDateOffset */
inline static auto& f_DoubleDateOffset = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[22]);
/* System.Int64 System::DateTime::OADateMinAsTicks */
inline static auto& f_OADateMinAsTicks = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[23]);
/* System.Double System::DateTime::OADateMinAsDouble */
inline static auto& f_OADateMinAsDouble = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[24]);
/* System.Double System::DateTime::OADateMaxAsDouble */
inline static auto& f_OADateMaxAsDouble = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[25]);
/* System.Int32 System::DateTime::DatePartYear */
inline static auto& f_DatePartYear = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[26]);
/* System.Int32 System::DateTime::DatePartDayOfYear */
inline static auto& f_DatePartDayOfYear = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[27]);
/* System.Int32 System::DateTime::DatePartMonth */
inline static auto& f_DatePartMonth = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[28]);
/* System.Int32 System::DateTime::DatePartDay */
inline static auto& f_DatePartDay = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[29]);
/* System.Int32[] System::DateTime::s_daysToMonth365 */
inline static auto& f_s_daysToMonth365 = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[30]);
/* System.Int32[] System::DateTime::s_daysToMonth366 */
inline static auto& f_s_daysToMonth366 = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[31]);
/* System.DateTime System::DateTime::MinValue */
inline static auto& f_MinValue = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[32]);
/* System.DateTime System::DateTime::MaxValue */
inline static auto& f_MaxValue = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[33]);
/* System.DateTime System::DateTime::UnixEpoch */
inline static auto& f_UnixEpoch = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[34]);
/* System.UInt64 System::DateTime::TicksMask */
inline static auto& f_TicksMask = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[35]);
/* System.UInt64 System::DateTime::FlagsMask */
inline static auto& f_FlagsMask = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[36]);
/* System.UInt64 System::DateTime::LocalMask */
inline static auto& f_LocalMask = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[37]);
/* System.Int64 System::DateTime::TicksCeiling */
inline static auto& f_TicksCeiling = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[38]);
/* System.UInt64 System::DateTime::KindUnspecified */
inline static auto& f_KindUnspecified = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[39]);
/* System.UInt64 System::DateTime::KindUtc */
inline static auto& f_KindUtc = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[40]);
/* System.UInt64 System::DateTime::KindLocal */
inline static auto& f_KindLocal = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[41]);
/* System.UInt64 System::DateTime::KindLocalAmbiguousDst */
inline static auto& f_KindLocalAmbiguousDst = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[42]);
/* System.Int32 System::DateTime::KindShift */
inline static auto& f_KindShift = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[43]);
/* System.String System::DateTime::TicksField */
inline static auto& f_TicksField = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[44]);
/* System.String System::DateTime::DateDataField */
inline static auto& f_DateDataField = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[45]);
/* System.UInt64 System::DateTime::_dateData */
inline static auto& f__dateData = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[46]);
  
    /* System.Void System::DateTime::.ctor(System.Int64) */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void System::DateTime::.ctor(System.UInt64) */
inline static auto& m1__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void System::DateTime::.ctor(System.Int64, System.DateTimeKind) */
inline static auto& m2__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void System::DateTime::.ctor(System.Int64, System.DateTimeKind, System.Boolean) */
inline static auto& m3__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void System::DateTime::.ctor(System.Int32, System.Int32, System.Int32) */
inline static auto& m4__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Void System::DateTime::.ctor(System.Int32, System.Int32, System.Int32, System.Int32, System.Int32, System.Int32) */
inline static auto& m5__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Void System::DateTime::.ctor(System.Int32, System.Int32, System.Int32, System.Int32, System.Int32, System.Int32, System.DateTimeKind) */
inline static auto& m6__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.Void System::DateTime::.ctor(System.Int32, System.Int32, System.Int32, System.Int32, System.Int32, System.Int32, System.Int32) */
inline static auto& m7__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.Void System::DateTime::.ctor(System.Int32, System.Int32, System.Int32, System.Int32, System.Int32, System.Int32, System.Int32, System.Globalization.Calendar) */
inline static auto& m8__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Void System::DateTime::.ctor(System.Runtime.Serialization.SerializationInfo, System.Runtime.Serialization.StreamingContext) */
inline static auto& m9__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.Int64 System::DateTime::get_InternalTicks() */
inline static auto& m10_get_InternalTicks = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.UInt64 System::DateTime::get_InternalKind() */
inline static auto& m11_get_InternalKind = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* System.DateTime System::DateTime::Add(System.TimeSpan) */
inline static auto& m12_Add = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.DateTime System::DateTime::Add(System.Double, System.Int32) */
inline static auto& m13_Add = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* System.DateTime System::DateTime::AddDays(System.Double) */
inline static auto& m14_AddDays = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* System.DateTime System::DateTime::AddHours(System.Double) */
inline static auto& m15_AddHours = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* System.DateTime System::DateTime::AddMilliseconds(System.Double) */
inline static auto& m16_AddMilliseconds = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* System.DateTime System::DateTime::AddMonths(System.Int32) */
inline static auto& m17_AddMonths = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.DateTime System::DateTime::AddSeconds(System.Double) */
inline static auto& m18_AddSeconds = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* System.DateTime System::DateTime::AddTicks(System.Int64) */
inline static auto& m19_AddTicks = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.DateTime System::DateTime::AddYears(System.Int32) */
inline static auto& m20_AddYears = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.Int32 System::DateTime::Compare(System.DateTime, System.DateTime) */
inline static auto& m21_Compare = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[21]);
/* System.Int32 System::DateTime::CompareTo(System.Object) */
inline static auto& m22_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[22]);
/* System.Int32 System::DateTime::CompareTo(System.DateTime) */
inline static auto& m23_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[23]);
/* System.Int64 System::DateTime::DateToTicks(System.Int32, System.Int32, System.Int32) */
inline static auto& m24_DateToTicks = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* System.Int64 System::DateTime::TimeToTicks(System.Int32, System.Int32, System.Int32) */
inline static auto& m25_TimeToTicks = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* System.Int32 System::DateTime::DaysInMonth(System.Int32, System.Int32) */
inline static auto& m26_DaysInMonth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* System.Boolean System::DateTime::Equals(System.Object) */
inline static auto& m27_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[27]);
/* System.Boolean System::DateTime::Equals(System.DateTime) */
inline static auto& m28_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[28]);
/* System.DateTime System::DateTime::FromBinary(System.Int64) */
inline static auto& m29_FromBinary = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);
/* System.DateTime System::DateTime::FromBinaryRaw(System.Int64) */
inline static auto& m30_FromBinaryRaw = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[30]);
/* System.DateTime System::DateTime::FromFileTime(System.Int64) */
inline static auto& m31_FromFileTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[31]);
/* System.DateTime System::DateTime::FromFileTimeUtc(System.Int64) */
inline static auto& m32_FromFileTimeUtc = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[32]);
/* System.Void System::DateTime::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo, System.Runtime.Serialization.StreamingContext) */
inline static auto& m33_System_Runtime_Serialization_ISerializable_GetObjectData = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[33]);
/* System.DateTime System::DateTime::SpecifyKind(System.DateTime, System.DateTimeKind) */
inline static auto& m34_SpecifyKind = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[34]);
/* System.DateTime System::DateTime::get_Date() */
inline static auto& m35_get_Date = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[35]);
/* System.Int32 System::DateTime::GetDatePart(System.Int32) */
inline static auto& m36_GetDatePart = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[36]);
/* System.Void System::DateTime::GetDatePart(System.Int32&, System.Int32&, System.Int32&) */
inline static auto& m37_GetDatePart = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[37]);
/* System.Int32 System::DateTime::get_Day() */
inline static auto& m38_get_Day = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[38]);
/* System.DayOfWeek System::DateTime::get_DayOfWeek() */
inline static auto& m39_get_DayOfWeek = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[39]);
/* System.Int32 System::DateTime::get_DayOfYear() */
inline static auto& m40_get_DayOfYear = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[40]);
/* System.Int32 System::DateTime::GetHashCode() */
inline static auto& m41_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[41]);
/* System.Int32 System::DateTime::get_Hour() */
inline static auto& m42_get_Hour = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[42]);
/* System.Boolean System::DateTime::IsAmbiguousDaylightSavingTime() */
inline static auto& m43_IsAmbiguousDaylightSavingTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[43]);
/* System.DateTimeKind System::DateTime::get_Kind() */
inline static auto& m44_get_Kind = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[44]);
/* System.Int32 System::DateTime::get_Millisecond() */
inline static auto& m45_get_Millisecond = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[45]);
/* System.Int32 System::DateTime::get_Minute() */
inline static auto& m46_get_Minute = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[46]);
/* System.Int32 System::DateTime::get_Month() */
inline static auto& m47_get_Month = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[47]);
/* System.DateTime System::DateTime::get_Now() */
inline static auto& m48_get_Now = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[48]);
/* System.Int32 System::DateTime::get_Second() */
inline static auto& m49_get_Second = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[49]);
/* System.Int64 System::DateTime::get_Ticks() */
inline static auto& m50_get_Ticks = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[50]);
/* System.TimeSpan System::DateTime::get_TimeOfDay() */
inline static auto& m51_get_TimeOfDay = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[51]);
/* System.DateTime System::DateTime::get_Today() */
inline static auto& m52_get_Today = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[52]);
/* System.Int32 System::DateTime::get_Year() */
inline static auto& m53_get_Year = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[53]);
/* System.Boolean System::DateTime::IsLeapYear(System.Int32) */
inline static auto& m54_IsLeapYear = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[54]);
/* System.DateTime System::DateTime::Parse(System.String) */
inline static auto& m55_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[55]);
/* System.DateTime System::DateTime::Parse(System.String, System.IFormatProvider) */
inline static auto& m56_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[56]);
/* System.DateTime System::DateTime::Parse(System.String, System.IFormatProvider, System.Globalization.DateTimeStyles) */
inline static auto& m57_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[57]);
/* System.DateTime System::DateTime::ParseExact(System.String, System.String, System.IFormatProvider, System.Globalization.DateTimeStyles) */
inline static auto& m58_ParseExact = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[58]);
/* System.DateTime System::DateTime::ParseExact(System.String, System.String[], System.IFormatProvider, System.Globalization.DateTimeStyles) */
inline static auto& m59_ParseExact = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[59]);
/* System.TimeSpan System::DateTime::Subtract(System.DateTime) */
inline static auto& m60_Subtract = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[60]);
/* System.DateTime System::DateTime::ToLocalTime() */
inline static auto& m61_ToLocalTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[61]);
/* System.DateTime System::DateTime::ToLocalTime(System.Boolean) */
inline static auto& m62_ToLocalTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[62]);
/* System.String System::DateTime::ToString() */
inline static auto& m63_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[63]);
/* System.String System::DateTime::ToString(System.String) */
inline static auto& m64_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[64]);
/* System.String System::DateTime::ToString(System.IFormatProvider) */
inline static auto& m65_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[65]);
/* System.String System::DateTime::ToString(System.String, System.IFormatProvider) */
inline static auto& m66_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[66]);
/* System.Boolean System::DateTime::TryFormat(System.Span<System.Char>, System.Int32&, System.ReadOnlySpan<System.Char>, System.IFormatProvider) */
inline static auto& m67_TryFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[67]);
/* System.DateTime System::DateTime::ToUniversalTime() */
inline static auto& m68_ToUniversalTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[68]);
/* System.Boolean System::DateTime::TryParse(System.String, System.IFormatProvider, System.Globalization.DateTimeStyles, System.DateTime&) */
inline static auto& m69_TryParse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[69]);
/* System.Boolean System::DateTime::TryParseExact(System.String, System.String, System.IFormatProvider, System.Globalization.DateTimeStyles, System.DateTime&) */
inline static auto& m70_TryParseExact = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[70]);
/* System.DateTime System::DateTime::op_Addition(System.DateTime, System.TimeSpan) */
inline static auto& m71_op_Addition = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[71]);
/* System.DateTime System::DateTime::op_Subtraction(System.DateTime, System.TimeSpan) */
inline static auto& m72_op_Subtraction = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[72]);
/* System.TimeSpan System::DateTime::op_Subtraction(System.DateTime, System.DateTime) */
inline static auto& m73_op_Subtraction = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[73]);
/* System.Boolean System::DateTime::op_Equality(System.DateTime, System.DateTime) */
inline static auto& m74_op_Equality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[74]);
/* System.Boolean System::DateTime::op_Inequality(System.DateTime, System.DateTime) */
inline static auto& m75_op_Inequality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[75]);
/* System.Boolean System::DateTime::op_LessThan(System.DateTime, System.DateTime) */
inline static auto& m76_op_LessThan = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[76]);
/* System.Boolean System::DateTime::op_LessThanOrEqual(System.DateTime, System.DateTime) */
inline static auto& m77_op_LessThanOrEqual = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[77]);
/* System.Boolean System::DateTime::op_GreaterThan(System.DateTime, System.DateTime) */
inline static auto& m78_op_GreaterThan = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[78]);
/* System.Boolean System::DateTime::op_GreaterThanOrEqual(System.DateTime, System.DateTime) */
inline static auto& m79_op_GreaterThanOrEqual = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[79]);
/* System.TypeCode System::DateTime::GetTypeCode() */
inline static auto& m80_GetTypeCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[80]);
/* System.Boolean System::DateTime::System.IConvertible.ToBoolean(System.IFormatProvider) */
inline static auto& m81_System_IConvertible_ToBoolean = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[81]);
/* System.Char System::DateTime::System.IConvertible.ToChar(System.IFormatProvider) */
inline static auto& m82_System_IConvertible_ToChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[82]);
/* System.SByte System::DateTime::System.IConvertible.ToSByte(System.IFormatProvider) */
inline static auto& m83_System_IConvertible_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[83]);
/* System.Byte System::DateTime::System.IConvertible.ToByte(System.IFormatProvider) */
inline static auto& m84_System_IConvertible_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[84]);
/* System.Int16 System::DateTime::System.IConvertible.ToInt16(System.IFormatProvider) */
inline static auto& m85_System_IConvertible_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[85]);
/* System.UInt16 System::DateTime::System.IConvertible.ToUInt16(System.IFormatProvider) */
inline static auto& m86_System_IConvertible_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[86]);
/* System.Int32 System::DateTime::System.IConvertible.ToInt32(System.IFormatProvider) */
inline static auto& m87_System_IConvertible_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[87]);
/* System.UInt32 System::DateTime::System.IConvertible.ToUInt32(System.IFormatProvider) */
inline static auto& m88_System_IConvertible_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[88]);
/* System.Int64 System::DateTime::System.IConvertible.ToInt64(System.IFormatProvider) */
inline static auto& m89_System_IConvertible_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[89]);
/* System.UInt64 System::DateTime::System.IConvertible.ToUInt64(System.IFormatProvider) */
inline static auto& m90_System_IConvertible_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[90]);
/* System.Single System::DateTime::System.IConvertible.ToSingle(System.IFormatProvider) */
inline static auto& m91_System_IConvertible_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[91]);
/* System.Double System::DateTime::System.IConvertible.ToDouble(System.IFormatProvider) */
inline static auto& m92_System_IConvertible_ToDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[92]);
/* System.Decimal System::DateTime::System.IConvertible.ToDecimal(System.IFormatProvider) */
inline static auto& m93_System_IConvertible_ToDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[93]);
/* System.DateTime System::DateTime::System.IConvertible.ToDateTime(System.IFormatProvider) */
inline static auto& m94_System_IConvertible_ToDateTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[94]);
/* System.Object System::DateTime::System.IConvertible.ToType(System.Type, System.IFormatProvider) */
inline static auto& m95_System_IConvertible_ToType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[95]);
/* System.Boolean System::DateTime::TryCreate(System.Int32, System.Int32, System.Int32, System.Int32, System.Int32, System.Int32, System.Int32, System.DateTime&) */
inline static auto& m96_TryCreate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[96]);
/* System.DateTime System::DateTime::get_UtcNow() */
inline static auto& m97_get_UtcNow = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[97]);
/* System.Int64 System::DateTime::GetSystemTimeAsFileTime() */
inline static auto& m98_GetSystemTimeAsFileTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[98]);
/* System.Int64 System::DateTime::ToBinaryRaw() */
inline static auto& m99_ToBinaryRaw = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[99]);
/* System.Void System::DateTime::.cctor() */
inline static auto& m100__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[100]);

};

}