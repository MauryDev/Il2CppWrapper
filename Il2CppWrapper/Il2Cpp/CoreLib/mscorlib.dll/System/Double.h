
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct Double {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 38> methods;
    inline static std::array<Il2CppWrapper::Field*, 1> fields;  
    /* System.Double System::Double::m_value */
inline static auto& f_m_value = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
  
    /* System.Boolean System::Double::IsFinite(System.Double) */
inline static auto& m0_IsFinite = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.Boolean System::Double::IsInfinity(System.Double) */
inline static auto& m1_IsInfinity = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* System.Boolean System::Double::IsNaN(System.Double) */
inline static auto& m2_IsNaN = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* System.Boolean System::Double::IsNegative(System.Double) */
inline static auto& m3_IsNegative = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* System.Boolean System::Double::IsNegativeInfinity(System.Double) */
inline static auto& m4_IsNegativeInfinity = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.Boolean System::Double::IsPositiveInfinity(System.Double) */
inline static auto& m5_IsPositiveInfinity = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.Int32 System::Double::CompareTo(System.Object) */
inline static auto& m6_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.Int32 System::Double::CompareTo(System.Double) */
inline static auto& m7_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);
/* System.Boolean System::Double::Equals(System.Object) */
inline static auto& m8_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[8]);
/* System.Boolean System::Double::Equals(System.Double) */
inline static auto& m9_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);
/* System.Int32 System::Double::GetHashCode() */
inline static auto& m10_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[10]);
/* System.String System::Double::ToString() */
inline static auto& m11_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[11]);
/* System.String System::Double::ToString(System.String) */
inline static auto& m12_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.String System::Double::ToString(System.IFormatProvider) */
inline static auto& m13_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[13]);
/* System.String System::Double::ToString(System.String, System.IFormatProvider) */
inline static auto& m14_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[14]);
/* System.Boolean System::Double::TryFormat(System.Span<System.Char>, System.Int32&, System.ReadOnlySpan<System.Char>, System.IFormatProvider) */
inline static auto& m15_TryFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[15]);
/* System.Double System::Double::Parse(System.String) */
inline static auto& m16_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[16]);
/* System.Double System::Double::Parse(System.String, System.IFormatProvider) */
inline static auto& m17_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[17]);
/* System.Double System::Double::Parse(System.String, System.Globalization.NumberStyles, System.IFormatProvider) */
inline static auto& m18_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[18]);
/* System.Boolean System::Double::TryParse(System.String, System.Double&) */
inline static auto& m19_TryParse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[19]);
/* System.Boolean System::Double::TryParse(System.String, System.Globalization.NumberStyles, System.IFormatProvider, System.Double&) */
inline static auto& m20_TryParse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[20]);
/* System.Boolean System::Double::TryParse(System.ReadOnlySpan<System.Char>, System.Globalization.NumberStyles, System.Globalization.NumberFormatInfo, System.Double&) */
inline static auto& m21_TryParse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[21]);
/* System.TypeCode System::Double::GetTypeCode() */
inline static auto& m22_GetTypeCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[22]);
/* System.Boolean System::Double::System.IConvertible.ToBoolean(System.IFormatProvider) */
inline static auto& m23_System_IConvertible_ToBoolean = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[23]);
/* System.Char System::Double::System.IConvertible.ToChar(System.IFormatProvider) */
inline static auto& m24_System_IConvertible_ToChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[24]);
/* System.SByte System::Double::System.IConvertible.ToSByte(System.IFormatProvider) */
inline static auto& m25_System_IConvertible_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[25]);
/* System.Byte System::Double::System.IConvertible.ToByte(System.IFormatProvider) */
inline static auto& m26_System_IConvertible_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[26]);
/* System.Int16 System::Double::System.IConvertible.ToInt16(System.IFormatProvider) */
inline static auto& m27_System_IConvertible_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[27]);
/* System.UInt16 System::Double::System.IConvertible.ToUInt16(System.IFormatProvider) */
inline static auto& m28_System_IConvertible_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[28]);
/* System.Int32 System::Double::System.IConvertible.ToInt32(System.IFormatProvider) */
inline static auto& m29_System_IConvertible_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[29]);
/* System.UInt32 System::Double::System.IConvertible.ToUInt32(System.IFormatProvider) */
inline static auto& m30_System_IConvertible_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[30]);
/* System.Int64 System::Double::System.IConvertible.ToInt64(System.IFormatProvider) */
inline static auto& m31_System_IConvertible_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[31]);
/* System.UInt64 System::Double::System.IConvertible.ToUInt64(System.IFormatProvider) */
inline static auto& m32_System_IConvertible_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[32]);
/* System.Single System::Double::System.IConvertible.ToSingle(System.IFormatProvider) */
inline static auto& m33_System_IConvertible_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[33]);
/* System.Double System::Double::System.IConvertible.ToDouble(System.IFormatProvider) */
inline static auto& m34_System_IConvertible_ToDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[34]);
/* System.Decimal System::Double::System.IConvertible.ToDecimal(System.IFormatProvider) */
inline static auto& m35_System_IConvertible_ToDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[35]);
/* System.DateTime System::Double::System.IConvertible.ToDateTime(System.IFormatProvider) */
inline static auto& m36_System_IConvertible_ToDateTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[36]);
/* System.Object System::Double::System.IConvertible.ToType(System.Type, System.IFormatProvider) */
inline static auto& m37_System_IConvertible_ToType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[37]);

};

}