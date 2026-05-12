
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct DateTimeOffset {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 52> methods;
    inline static std::array<Il2CppWrapper::Field*, 5> fields;  
    /* System.DateTimeOffset System::DateTimeOffset::MinValue */
inline static auto& f_MinValue = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.DateTimeOffset System::DateTimeOffset::MaxValue */
inline static auto& f_MaxValue = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
/* System.DateTimeOffset System::DateTimeOffset::UnixEpoch */
inline static auto& f_UnixEpoch = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[2]);
/* System.DateTime System::DateTimeOffset::_dateTime */
inline static auto& f__dateTime = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[3]);
/* System.Int16 System::DateTimeOffset::_offsetMinutes */
inline static auto& f__offsetMinutes = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[4]);
  
    /* System.Void System::DateTimeOffset::.ctor(System.Int64, System.TimeSpan) */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void System::DateTimeOffset::.ctor(System.DateTime) */
inline static auto& m1__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void System::DateTimeOffset::.ctor(System.DateTime, System.TimeSpan) */
inline static auto& m2__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void System::DateTimeOffset::.ctor(System.Int32, System.Int32, System.Int32, System.Int32, System.Int32, System.Int32, System.TimeSpan) */
inline static auto& m3__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void System::DateTimeOffset::.ctor(System.Int32, System.Int32, System.Int32, System.Int32, System.Int32, System.Int32, System.Int32, System.TimeSpan) */
inline static auto& m4__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Void System::DateTimeOffset::.ctor(System.Int32, System.Int32, System.Int32, System.Int32, System.Int32, System.Int32, System.Int32, System.Globalization.Calendar, System.TimeSpan) */
inline static auto& m5__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.DateTimeOffset System::DateTimeOffset::get_Now() */
inline static auto& m6_get_Now = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.DateTimeOffset System::DateTimeOffset::get_UtcNow() */
inline static auto& m7_get_UtcNow = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.DateTime System::DateTimeOffset::get_DateTime() */
inline static auto& m8_get_DateTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.DateTime System::DateTimeOffset::get_UtcDateTime() */
inline static auto& m9_get_UtcDateTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.DateTime System::DateTimeOffset::get_LocalDateTime() */
inline static auto& m10_get_LocalDateTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.DateTime System::DateTimeOffset::get_ClockDateTime() */
inline static auto& m11_get_ClockDateTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* System.Int32 System::DateTimeOffset::get_Day() */
inline static auto& m12_get_Day = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.Int32 System::DateTimeOffset::get_Hour() */
inline static auto& m13_get_Hour = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* System.Int32 System::DateTimeOffset::get_Millisecond() */
inline static auto& m14_get_Millisecond = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* System.Int32 System::DateTimeOffset::get_Minute() */
inline static auto& m15_get_Minute = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* System.Int32 System::DateTimeOffset::get_Month() */
inline static auto& m16_get_Month = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* System.TimeSpan System::DateTimeOffset::get_Offset() */
inline static auto& m17_get_Offset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.Int32 System::DateTimeOffset::get_Second() */
inline static auto& m18_get_Second = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* System.Int64 System::DateTimeOffset::get_Ticks() */
inline static auto& m19_get_Ticks = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.TimeSpan System::DateTimeOffset::get_TimeOfDay() */
inline static auto& m20_get_TimeOfDay = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.Int32 System::DateTimeOffset::get_Year() */
inline static auto& m21_get_Year = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* System.DateTimeOffset System::DateTimeOffset::AddSeconds(System.Double) */
inline static auto& m22_AddSeconds = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* System.Int32 System::DateTimeOffset::Compare(System.DateTimeOffset, System.DateTimeOffset) */
inline static auto& m23_Compare = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* System.Int32 System::DateTimeOffset::System.IComparable.CompareTo(System.Object) */
inline static auto& m24_System_IComparable_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[24]);
/* System.Int32 System::DateTimeOffset::CompareTo(System.DateTimeOffset) */
inline static auto& m25_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[25]);
/* System.Boolean System::DateTimeOffset::Equals(System.Object) */
inline static auto& m26_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[26]);
/* System.Boolean System::DateTimeOffset::Equals(System.DateTimeOffset) */
inline static auto& m27_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[27]);
/* System.Void System::DateTimeOffset::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object) */
inline static auto& m28_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[28]);
/* System.Void System::DateTimeOffset::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo, System.Runtime.Serialization.StreamingContext) */
inline static auto& m29_System_Runtime_Serialization_ISerializable_GetObjectData = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[29]);
/* System.Void System::DateTimeOffset::.ctor(System.Runtime.Serialization.SerializationInfo, System.Runtime.Serialization.StreamingContext) */
inline static auto& m30__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[30]);
/* System.Int32 System::DateTimeOffset::GetHashCode() */
inline static auto& m31_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[31]);
/* System.DateTimeOffset System::DateTimeOffset::Parse(System.String, System.IFormatProvider) */
inline static auto& m32_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[32]);
/* System.DateTimeOffset System::DateTimeOffset::Parse(System.String, System.IFormatProvider, System.Globalization.DateTimeStyles) */
inline static auto& m33_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[33]);
/* System.DateTimeOffset System::DateTimeOffset::ParseExact(System.String, System.String, System.IFormatProvider, System.Globalization.DateTimeStyles) */
inline static auto& m34_ParseExact = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[34]);
/* System.String System::DateTimeOffset::ToString() */
inline static auto& m35_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[35]);
/* System.String System::DateTimeOffset::ToString(System.String) */
inline static auto& m36_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[36]);
/* System.String System::DateTimeOffset::ToString(System.IFormatProvider) */
inline static auto& m37_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[37]);
/* System.String System::DateTimeOffset::ToString(System.String, System.IFormatProvider) */
inline static auto& m38_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[38]);
/* System.Boolean System::DateTimeOffset::TryFormat(System.Span<System.Char>, System.Int32&, System.ReadOnlySpan<System.Char>, System.IFormatProvider) */
inline static auto& m39_TryFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[39]);
/* System.DateTimeOffset System::DateTimeOffset::ToUniversalTime() */
inline static auto& m40_ToUniversalTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[40]);
/* System.Boolean System::DateTimeOffset::TryParse(System.String, System.IFormatProvider, System.Globalization.DateTimeStyles, System.DateTimeOffset&) */
inline static auto& m41_TryParse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[41]);
/* System.Boolean System::DateTimeOffset::TryParseExact(System.String, System.String, System.IFormatProvider, System.Globalization.DateTimeStyles, System.DateTimeOffset&) */
inline static auto& m42_TryParseExact = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[42]);
/* System.Boolean System::DateTimeOffset::TryParseExact(System.String, System.String[], System.IFormatProvider, System.Globalization.DateTimeStyles, System.DateTimeOffset&) */
inline static auto& m43_TryParseExact = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[43]);
/* System.Int16 System::DateTimeOffset::ValidateOffset(System.TimeSpan) */
inline static auto& m44_ValidateOffset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[44]);
/* System.DateTime System::DateTimeOffset::ValidateDate(System.DateTime, System.TimeSpan) */
inline static auto& m45_ValidateDate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[45]);
/* System.Globalization.DateTimeStyles System::DateTimeOffset::ValidateStyles(System.Globalization.DateTimeStyles, System.String) */
inline static auto& m46_ValidateStyles = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[46]);
/* System.DateTimeOffset System::DateTimeOffset::op_Implicit(System.DateTime) */
inline static auto& m47_op_Implicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[47]);
/* System.TimeSpan System::DateTimeOffset::op_Subtraction(System.DateTimeOffset, System.DateTimeOffset) */
inline static auto& m48_op_Subtraction = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[48]);
/* System.Boolean System::DateTimeOffset::op_Equality(System.DateTimeOffset, System.DateTimeOffset) */
inline static auto& m49_op_Equality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[49]);
/* System.Boolean System::DateTimeOffset::op_Inequality(System.DateTimeOffset, System.DateTimeOffset) */
inline static auto& m50_op_Inequality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[50]);
/* System.Void System::DateTimeOffset::.cctor() */
inline static auto& m51__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[51]);

};

}