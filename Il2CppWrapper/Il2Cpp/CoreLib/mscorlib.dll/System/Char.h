
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct Char {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 64> methods;
    inline static std::array<Il2CppWrapper::Field*, 2> fields;  
    /* System.Char System::Char::m_value */
inline static auto& f_m_value = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* System.Byte[] System::Char::s_categoryForLatin1 */
inline static auto& f_s_categoryForLatin1 = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
  
    /* System.Boolean System::Char::IsLatin1(System.Char) */
inline static auto& m0_IsLatin1 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.Boolean System::Char::IsAscii(System.Char) */
inline static auto& m1_IsAscii = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* System.Globalization.UnicodeCategory System::Char::GetLatin1UnicodeCategory(System.Char) */
inline static auto& m2_GetLatin1UnicodeCategory = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* System.Int32 System::Char::GetHashCode() */
inline static auto& m3_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* System.Boolean System::Char::Equals(System.Object) */
inline static auto& m4_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[4]);
/* System.Boolean System::Char::Equals(System.Char) */
inline static auto& m5_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Int32 System::Char::CompareTo(System.Object) */
inline static auto& m6_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.Int32 System::Char::CompareTo(System.Char) */
inline static auto& m7_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);
/* System.String System::Char::ToString() */
inline static auto& m8_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[8]);
/* System.String System::Char::ToString(System.IFormatProvider) */
inline static auto& m9_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);
/* System.String System::Char::ToString(System.Char) */
inline static auto& m10_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);
/* System.Char System::Char::Parse(System.String) */
inline static auto& m11_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* System.Boolean System::Char::TryParse(System.String, System.Char&) */
inline static auto& m12_TryParse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);
/* System.Boolean System::Char::IsDigit(System.Char) */
inline static auto& m13_IsDigit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.Boolean System::Char::CheckLetter(System.Globalization.UnicodeCategory) */
inline static auto& m14_CheckLetter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);
/* System.Boolean System::Char::IsLetter(System.Char) */
inline static auto& m15_IsLetter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[15]);
/* System.Boolean System::Char::IsWhiteSpaceLatin1(System.Char) */
inline static auto& m16_IsWhiteSpaceLatin1 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[16]);
/* System.Boolean System::Char::IsWhiteSpace(System.Char) */
inline static auto& m17_IsWhiteSpace = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[17]);
/* System.Boolean System::Char::IsUpper(System.Char) */
inline static auto& m18_IsUpper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[18]);
/* System.Boolean System::Char::IsLower(System.Char) */
inline static auto& m19_IsLower = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[19]);
/* System.Boolean System::Char::CheckPunctuation(System.Globalization.UnicodeCategory) */
inline static auto& m20_CheckPunctuation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[20]);
/* System.Boolean System::Char::IsPunctuation(System.Char) */
inline static auto& m21_IsPunctuation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[21]);
/* System.Boolean System::Char::CheckLetterOrDigit(System.Globalization.UnicodeCategory) */
inline static auto& m22_CheckLetterOrDigit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[22]);
/* System.Boolean System::Char::IsLetterOrDigit(System.Char) */
inline static auto& m23_IsLetterOrDigit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* System.Char System::Char::ToUpper(System.Char, System.Globalization.CultureInfo) */
inline static auto& m24_ToUpper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* System.Char System::Char::ToUpper(System.Char) */
inline static auto& m25_ToUpper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* System.Char System::Char::ToUpperInvariant(System.Char) */
inline static auto& m26_ToUpperInvariant = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* System.Char System::Char::ToLower(System.Char, System.Globalization.CultureInfo) */
inline static auto& m27_ToLower = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);
/* System.Char System::Char::ToLower(System.Char) */
inline static auto& m28_ToLower = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[28]);
/* System.Char System::Char::ToLowerInvariant(System.Char) */
inline static auto& m29_ToLowerInvariant = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);
/* System.TypeCode System::Char::GetTypeCode() */
inline static auto& m30_GetTypeCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[30]);
/* System.Boolean System::Char::System.IConvertible.ToBoolean(System.IFormatProvider) */
inline static auto& m31_System_IConvertible_ToBoolean = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[31]);
/* System.Char System::Char::System.IConvertible.ToChar(System.IFormatProvider) */
inline static auto& m32_System_IConvertible_ToChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[32]);
/* System.SByte System::Char::System.IConvertible.ToSByte(System.IFormatProvider) */
inline static auto& m33_System_IConvertible_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[33]);
/* System.Byte System::Char::System.IConvertible.ToByte(System.IFormatProvider) */
inline static auto& m34_System_IConvertible_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[34]);
/* System.Int16 System::Char::System.IConvertible.ToInt16(System.IFormatProvider) */
inline static auto& m35_System_IConvertible_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[35]);
/* System.UInt16 System::Char::System.IConvertible.ToUInt16(System.IFormatProvider) */
inline static auto& m36_System_IConvertible_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[36]);
/* System.Int32 System::Char::System.IConvertible.ToInt32(System.IFormatProvider) */
inline static auto& m37_System_IConvertible_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[37]);
/* System.UInt32 System::Char::System.IConvertible.ToUInt32(System.IFormatProvider) */
inline static auto& m38_System_IConvertible_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[38]);
/* System.Int64 System::Char::System.IConvertible.ToInt64(System.IFormatProvider) */
inline static auto& m39_System_IConvertible_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[39]);
/* System.UInt64 System::Char::System.IConvertible.ToUInt64(System.IFormatProvider) */
inline static auto& m40_System_IConvertible_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[40]);
/* System.Single System::Char::System.IConvertible.ToSingle(System.IFormatProvider) */
inline static auto& m41_System_IConvertible_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[41]);
/* System.Double System::Char::System.IConvertible.ToDouble(System.IFormatProvider) */
inline static auto& m42_System_IConvertible_ToDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[42]);
/* System.Decimal System::Char::System.IConvertible.ToDecimal(System.IFormatProvider) */
inline static auto& m43_System_IConvertible_ToDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[43]);
/* System.DateTime System::Char::System.IConvertible.ToDateTime(System.IFormatProvider) */
inline static auto& m44_System_IConvertible_ToDateTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[44]);
/* System.Object System::Char::System.IConvertible.ToType(System.Type, System.IFormatProvider) */
inline static auto& m45_System_IConvertible_ToType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[45]);
/* System.Boolean System::Char::IsControl(System.Char) */
inline static auto& m46_IsControl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[46]);
/* System.Boolean System::Char::CheckNumber(System.Globalization.UnicodeCategory) */
inline static auto& m47_CheckNumber = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[47]);
/* System.Boolean System::Char::IsNumber(System.Char) */
inline static auto& m48_IsNumber = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[48]);
/* System.Boolean System::Char::IsNumber(System.String, System.Int32) */
inline static auto& m49_IsNumber = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[49]);
/* System.Boolean System::Char::CheckSeparator(System.Globalization.UnicodeCategory) */
inline static auto& m50_CheckSeparator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[50]);
/* System.Boolean System::Char::IsSeparatorLatin1(System.Char) */
inline static auto& m51_IsSeparatorLatin1 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[51]);
/* System.Boolean System::Char::IsSeparator(System.Char) */
inline static auto& m52_IsSeparator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[52]);
/* System.Boolean System::Char::IsSurrogate(System.Char) */
inline static auto& m53_IsSurrogate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[53]);
/* System.Boolean System::Char::IsSurrogate(System.String, System.Int32) */
inline static auto& m54_IsSurrogate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[54]);
/* System.Boolean System::Char::IsWhiteSpace(System.String, System.Int32) */
inline static auto& m55_IsWhiteSpace = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[55]);
/* System.Globalization.UnicodeCategory System::Char::GetUnicodeCategory(System.Char) */
inline static auto& m56_GetUnicodeCategory = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[56]);
/* System.Globalization.UnicodeCategory System::Char::GetUnicodeCategory(System.String, System.Int32) */
inline static auto& m57_GetUnicodeCategory = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[57]);
/* System.Boolean System::Char::IsHighSurrogate(System.Char) */
inline static auto& m58_IsHighSurrogate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[58]);
/* System.Boolean System::Char::IsHighSurrogate(System.String, System.Int32) */
inline static auto& m59_IsHighSurrogate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[59]);
/* System.Boolean System::Char::IsLowSurrogate(System.Char) */
inline static auto& m60_IsLowSurrogate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[60]);
/* System.Boolean System::Char::IsSurrogatePair(System.Char, System.Char) */
inline static auto& m61_IsSurrogatePair = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[61]);
/* System.Int32 System::Char::ConvertToUtf32(System.Char, System.Char) */
inline static auto& m62_ConvertToUtf32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[62]);
/* System.Void System::Char::.cctor() */
inline static auto& m63__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[63]);

};

}