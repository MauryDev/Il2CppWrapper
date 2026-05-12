
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct UInt16 {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 32> methods;
    inline static std::array<Il2CppWrapper::Field*, 1> fields;  
    /* System.UInt16 System::UInt16::m_value */
inline static auto& f_m_value = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
  
    /* System.Int32 System::UInt16::CompareTo(System.Object) */
inline static auto& m0_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[0]);
/* System.Int32 System::UInt16::CompareTo(System.UInt16) */
inline static auto& m1_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[1]);
/* System.Boolean System::UInt16::Equals(System.Object) */
inline static auto& m2_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[2]);
/* System.Boolean System::UInt16::Equals(System.UInt16) */
inline static auto& m3_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* System.Int32 System::UInt16::GetHashCode() */
inline static auto& m4_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[4]);
/* System.String System::UInt16::ToString() */
inline static auto& m5_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.String System::UInt16::ToString(System.IFormatProvider) */
inline static auto& m6_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.String System::UInt16::ToString(System.String) */
inline static auto& m7_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.String System::UInt16::ToString(System.String, System.IFormatProvider) */
inline static auto& m8_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[8]);
/* System.Boolean System::UInt16::TryFormat(System.Span<System.Char>, System.Int32&, System.ReadOnlySpan<System.Char>, System.IFormatProvider) */
inline static auto& m9_TryFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);
/* System.UInt16 System::UInt16::Parse(System.String, System.IFormatProvider) */
inline static auto& m10_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);
/* System.UInt16 System::UInt16::Parse(System.String, System.Globalization.NumberStyles, System.IFormatProvider) */
inline static auto& m11_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* System.UInt16 System::UInt16::Parse(System.ReadOnlySpan<System.Char>, System.Globalization.NumberStyles, System.Globalization.NumberFormatInfo) */
inline static auto& m12_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);
/* System.Boolean System::UInt16::TryParse(System.String, System.UInt16&) */
inline static auto& m13_TryParse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.Boolean System::UInt16::TryParse(System.String, System.Globalization.NumberStyles, System.IFormatProvider, System.UInt16&) */
inline static auto& m14_TryParse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);
/* System.Boolean System::UInt16::TryParse(System.ReadOnlySpan<System.Char>, System.Globalization.NumberStyles, System.Globalization.NumberFormatInfo, System.UInt16&) */
inline static auto& m15_TryParse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[15]);
/* System.TypeCode System::UInt16::GetTypeCode() */
inline static auto& m16_GetTypeCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[16]);
/* System.Boolean System::UInt16::System.IConvertible.ToBoolean(System.IFormatProvider) */
inline static auto& m17_System_IConvertible_ToBoolean = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[17]);
/* System.Char System::UInt16::System.IConvertible.ToChar(System.IFormatProvider) */
inline static auto& m18_System_IConvertible_ToChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[18]);
/* System.SByte System::UInt16::System.IConvertible.ToSByte(System.IFormatProvider) */
inline static auto& m19_System_IConvertible_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[19]);
/* System.Byte System::UInt16::System.IConvertible.ToByte(System.IFormatProvider) */
inline static auto& m20_System_IConvertible_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[20]);
/* System.Int16 System::UInt16::System.IConvertible.ToInt16(System.IFormatProvider) */
inline static auto& m21_System_IConvertible_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[21]);
/* System.UInt16 System::UInt16::System.IConvertible.ToUInt16(System.IFormatProvider) */
inline static auto& m22_System_IConvertible_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[22]);
/* System.Int32 System::UInt16::System.IConvertible.ToInt32(System.IFormatProvider) */
inline static auto& m23_System_IConvertible_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[23]);
/* System.UInt32 System::UInt16::System.IConvertible.ToUInt32(System.IFormatProvider) */
inline static auto& m24_System_IConvertible_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[24]);
/* System.Int64 System::UInt16::System.IConvertible.ToInt64(System.IFormatProvider) */
inline static auto& m25_System_IConvertible_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[25]);
/* System.UInt64 System::UInt16::System.IConvertible.ToUInt64(System.IFormatProvider) */
inline static auto& m26_System_IConvertible_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[26]);
/* System.Single System::UInt16::System.IConvertible.ToSingle(System.IFormatProvider) */
inline static auto& m27_System_IConvertible_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[27]);
/* System.Double System::UInt16::System.IConvertible.ToDouble(System.IFormatProvider) */
inline static auto& m28_System_IConvertible_ToDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[28]);
/* System.Decimal System::UInt16::System.IConvertible.ToDecimal(System.IFormatProvider) */
inline static auto& m29_System_IConvertible_ToDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[29]);
/* System.DateTime System::UInt16::System.IConvertible.ToDateTime(System.IFormatProvider) */
inline static auto& m30_System_IConvertible_ToDateTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[30]);
/* System.Object System::UInt16::System.IConvertible.ToType(System.Type, System.IFormatProvider) */
inline static auto& m31_System_IConvertible_ToType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[31]);

};

}