
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct Boolean {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 29> methods;
    inline static std::array<Il2CppWrapper::Field*, 3> fields;  
    /* System.Boolean System::Boolean::m_value */
inline static auto& f_m_value = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* System.String System::Boolean::TrueString */
inline static auto& f_TrueString = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
/* System.String System::Boolean::FalseString */
inline static auto& f_FalseString = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[2]);
  
    /* System.Int32 System::Boolean::GetHashCode() */
inline static auto& m0_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[0]);
/* System.String System::Boolean::ToString() */
inline static auto& m1_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[1]);
/* System.String System::Boolean::ToString(System.IFormatProvider) */
inline static auto& m2_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[2]);
/* System.Boolean System::Boolean::Equals(System.Object) */
inline static auto& m3_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* System.Boolean System::Boolean::Equals(System.Boolean) */
inline static auto& m4_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[4]);
/* System.Int32 System::Boolean::CompareTo(System.Object) */
inline static auto& m5_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Int32 System::Boolean::CompareTo(System.Boolean) */
inline static auto& m6_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.Boolean System::Boolean::Parse(System.String) */
inline static auto& m7_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Boolean System::Boolean::Parse(System.ReadOnlySpan<System.Char>) */
inline static auto& m8_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);
/* System.Boolean System::Boolean::TryParse(System.String, System.Boolean&) */
inline static auto& m9_TryParse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* System.Boolean System::Boolean::TryParse(System.ReadOnlySpan<System.Char>, System.Boolean&) */
inline static auto& m10_TryParse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);
/* System.ReadOnlySpan<System.Char> System::Boolean::TrimWhiteSpaceAndNull(System.ReadOnlySpan<System.Char>) */
inline static auto& m11_TrimWhiteSpaceAndNull = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* System.TypeCode System::Boolean::GetTypeCode() */
inline static auto& m12_GetTypeCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[12]);
/* System.Boolean System::Boolean::System.IConvertible.ToBoolean(System.IFormatProvider) */
inline static auto& m13_System_IConvertible_ToBoolean = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[13]);
/* System.Char System::Boolean::System.IConvertible.ToChar(System.IFormatProvider) */
inline static auto& m14_System_IConvertible_ToChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[14]);
/* System.SByte System::Boolean::System.IConvertible.ToSByte(System.IFormatProvider) */
inline static auto& m15_System_IConvertible_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[15]);
/* System.Byte System::Boolean::System.IConvertible.ToByte(System.IFormatProvider) */
inline static auto& m16_System_IConvertible_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[16]);
/* System.Int16 System::Boolean::System.IConvertible.ToInt16(System.IFormatProvider) */
inline static auto& m17_System_IConvertible_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[17]);
/* System.UInt16 System::Boolean::System.IConvertible.ToUInt16(System.IFormatProvider) */
inline static auto& m18_System_IConvertible_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[18]);
/* System.Int32 System::Boolean::System.IConvertible.ToInt32(System.IFormatProvider) */
inline static auto& m19_System_IConvertible_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[19]);
/* System.UInt32 System::Boolean::System.IConvertible.ToUInt32(System.IFormatProvider) */
inline static auto& m20_System_IConvertible_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[20]);
/* System.Int64 System::Boolean::System.IConvertible.ToInt64(System.IFormatProvider) */
inline static auto& m21_System_IConvertible_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[21]);
/* System.UInt64 System::Boolean::System.IConvertible.ToUInt64(System.IFormatProvider) */
inline static auto& m22_System_IConvertible_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[22]);
/* System.Single System::Boolean::System.IConvertible.ToSingle(System.IFormatProvider) */
inline static auto& m23_System_IConvertible_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[23]);
/* System.Double System::Boolean::System.IConvertible.ToDouble(System.IFormatProvider) */
inline static auto& m24_System_IConvertible_ToDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[24]);
/* System.Decimal System::Boolean::System.IConvertible.ToDecimal(System.IFormatProvider) */
inline static auto& m25_System_IConvertible_ToDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[25]);
/* System.DateTime System::Boolean::System.IConvertible.ToDateTime(System.IFormatProvider) */
inline static auto& m26_System_IConvertible_ToDateTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[26]);
/* System.Object System::Boolean::System.IConvertible.ToType(System.Type, System.IFormatProvider) */
inline static auto& m27_System_IConvertible_ToType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[27]);
/* System.Void System::Boolean::.cctor() */
inline static auto& m28__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[28]);

};

}