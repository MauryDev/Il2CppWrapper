
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct Byte {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 33> methods;
    inline static std::array<Il2CppWrapper::Field*, 1> fields;  
    /* System.Byte System::Byte::m_value */
inline static auto& f_m_value = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
  
    /* System.Int32 System::Byte::CompareTo(System.Object) */
inline static auto& m0_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[0]);
/* System.Int32 System::Byte::CompareTo(System.Byte) */
inline static auto& m1_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[1]);
/* System.Boolean System::Byte::Equals(System.Object) */
inline static auto& m2_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[2]);
/* System.Boolean System::Byte::Equals(System.Byte) */
inline static auto& m3_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* System.Int32 System::Byte::GetHashCode() */
inline static auto& m4_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[4]);
/* System.Byte System::Byte::Parse(System.String, System.Globalization.NumberStyles) */
inline static auto& m5_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.Byte System::Byte::Parse(System.String, System.IFormatProvider) */
inline static auto& m6_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.Byte System::Byte::Parse(System.String, System.Globalization.NumberStyles, System.IFormatProvider) */
inline static auto& m7_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Byte System::Byte::Parse(System.ReadOnlySpan<System.Char>, System.Globalization.NumberStyles, System.Globalization.NumberFormatInfo) */
inline static auto& m8_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);
/* System.Boolean System::Byte::TryParse(System.String, System.Byte&) */
inline static auto& m9_TryParse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* System.Boolean System::Byte::TryParse(System.String, System.Globalization.NumberStyles, System.IFormatProvider, System.Byte&) */
inline static auto& m10_TryParse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);
/* System.Boolean System::Byte::TryParse(System.ReadOnlySpan<System.Char>, System.Globalization.NumberStyles, System.Globalization.NumberFormatInfo, System.Byte&) */
inline static auto& m11_TryParse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* System.String System::Byte::ToString() */
inline static auto& m12_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[12]);
/* System.String System::Byte::ToString(System.String) */
inline static auto& m13_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* System.String System::Byte::ToString(System.IFormatProvider) */
inline static auto& m14_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[14]);
/* System.String System::Byte::ToString(System.String, System.IFormatProvider) */
inline static auto& m15_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[15]);
/* System.Boolean System::Byte::TryFormat(System.Span<System.Char>, System.Int32&, System.ReadOnlySpan<System.Char>, System.IFormatProvider) */
inline static auto& m16_TryFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[16]);
/* System.TypeCode System::Byte::GetTypeCode() */
inline static auto& m17_GetTypeCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[17]);
/* System.Boolean System::Byte::System.IConvertible.ToBoolean(System.IFormatProvider) */
inline static auto& m18_System_IConvertible_ToBoolean = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[18]);
/* System.Char System::Byte::System.IConvertible.ToChar(System.IFormatProvider) */
inline static auto& m19_System_IConvertible_ToChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[19]);
/* System.SByte System::Byte::System.IConvertible.ToSByte(System.IFormatProvider) */
inline static auto& m20_System_IConvertible_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[20]);
/* System.Byte System::Byte::System.IConvertible.ToByte(System.IFormatProvider) */
inline static auto& m21_System_IConvertible_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[21]);
/* System.Int16 System::Byte::System.IConvertible.ToInt16(System.IFormatProvider) */
inline static auto& m22_System_IConvertible_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[22]);
/* System.UInt16 System::Byte::System.IConvertible.ToUInt16(System.IFormatProvider) */
inline static auto& m23_System_IConvertible_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[23]);
/* System.Int32 System::Byte::System.IConvertible.ToInt32(System.IFormatProvider) */
inline static auto& m24_System_IConvertible_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[24]);
/* System.UInt32 System::Byte::System.IConvertible.ToUInt32(System.IFormatProvider) */
inline static auto& m25_System_IConvertible_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[25]);
/* System.Int64 System::Byte::System.IConvertible.ToInt64(System.IFormatProvider) */
inline static auto& m26_System_IConvertible_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[26]);
/* System.UInt64 System::Byte::System.IConvertible.ToUInt64(System.IFormatProvider) */
inline static auto& m27_System_IConvertible_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[27]);
/* System.Single System::Byte::System.IConvertible.ToSingle(System.IFormatProvider) */
inline static auto& m28_System_IConvertible_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[28]);
/* System.Double System::Byte::System.IConvertible.ToDouble(System.IFormatProvider) */
inline static auto& m29_System_IConvertible_ToDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[29]);
/* System.Decimal System::Byte::System.IConvertible.ToDecimal(System.IFormatProvider) */
inline static auto& m30_System_IConvertible_ToDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[30]);
/* System.DateTime System::Byte::System.IConvertible.ToDateTime(System.IFormatProvider) */
inline static auto& m31_System_IConvertible_ToDateTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[31]);
/* System.Object System::Byte::System.IConvertible.ToType(System.Type, System.IFormatProvider) */
inline static auto& m32_System_IConvertible_ToType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[32]);

};

}