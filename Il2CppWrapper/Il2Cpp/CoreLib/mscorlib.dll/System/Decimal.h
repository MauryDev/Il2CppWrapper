
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct Decimal {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 101> methods;
    inline static std::array<Il2CppWrapper::Field*, 10> fields;  
    /* System.Decimal System::Decimal::Zero */
inline static auto& f_Zero = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.Decimal System::Decimal::One */
inline static auto& f_One = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
/* System.Decimal System::Decimal::MinusOne */
inline static auto& f_MinusOne = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[2]);
/* System.Decimal System::Decimal::MaxValue */
inline static auto& f_MaxValue = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[3]);
/* System.Decimal System::Decimal::MinValue */
inline static auto& f_MinValue = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[4]);
/* System.Int32 System::Decimal::flags */
inline static auto& f_flags = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[5]);
/* System.Int32 System::Decimal::hi */
inline static auto& f_hi = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[6]);
/* System.Int32 System::Decimal::lo */
inline static auto& f_lo = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[7]);
/* System.Int32 System::Decimal::mid */
inline static auto& f_mid = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[8]);
/* System.UInt64 System::Decimal::ulomidLE */
inline static auto& f_ulomidLE = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[9]);
  
    /* System.UInt32 System::Decimal::get_High() */
inline static auto& m0_get_High = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.UInt32 System::Decimal::get_Low() */
inline static auto& m1_get_Low = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.UInt32 System::Decimal::get_Mid() */
inline static auto& m2_get_Mid = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Boolean System::Decimal::get_IsNegative() */
inline static auto& m3_get_IsNegative = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Int32 System::Decimal::get_Scale() */
inline static auto& m4_get_Scale = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.UInt64 System::Decimal::get_Low64() */
inline static auto& m5_get_Low64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Decimal.DecCalc& System::Decimal::AsMutable(System.Decimal&) */
inline static auto& m6_AsMutable = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.UInt32 System::Decimal::DecDivMod1E9(System.Decimal&) */
inline static auto& m7_DecDivMod1E9 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Void System::Decimal::.ctor(System.Int32) */
inline static auto& m8__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Void System::Decimal::.ctor(System.UInt32) */
inline static auto& m9__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.Void System::Decimal::.ctor(System.Int64) */
inline static auto& m10__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Void System::Decimal::.ctor(System.UInt64) */
inline static auto& m11__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* System.Void System::Decimal::.ctor(System.Single) */
inline static auto& m12__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.Void System::Decimal::.ctor(System.Double) */
inline static auto& m13__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* System.Boolean System::Decimal::IsValid(System.Int32) */
inline static auto& m14_IsValid = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);
/* System.Void System::Decimal::.ctor(System.Int32[]) */
inline static auto& m15__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* System.Void System::Decimal::.ctor(System.Int32, System.Int32, System.Int32, System.Boolean, System.Byte) */
inline static auto& m16__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* System.Void System::Decimal::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object) */
inline static auto& m17_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[17]);
/* System.Void System::Decimal::.ctor(System.Decimal&, System.Int32) */
inline static auto& m18__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* System.Decimal System::Decimal::Abs(System.Decimal&) */
inline static auto& m19_Abs = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[19]);
/* System.Decimal System::Decimal::Add(System.Decimal, System.Decimal) */
inline static auto& m20_Add = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[20]);
/* System.Int32 System::Decimal::Compare(System.Decimal, System.Decimal) */
inline static auto& m21_Compare = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[21]);
/* System.Int32 System::Decimal::CompareTo(System.Object) */
inline static auto& m22_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[22]);
/* System.Int32 System::Decimal::CompareTo(System.Decimal) */
inline static auto& m23_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[23]);
/* System.Decimal System::Decimal::Divide(System.Decimal, System.Decimal) */
inline static auto& m24_Divide = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* System.Boolean System::Decimal::Equals(System.Object) */
inline static auto& m25_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[25]);
/* System.Boolean System::Decimal::Equals(System.Decimal) */
inline static auto& m26_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[26]);
/* System.Int32 System::Decimal::GetHashCode() */
inline static auto& m27_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[27]);
/* System.String System::Decimal::ToString() */
inline static auto& m28_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[28]);
/* System.String System::Decimal::ToString(System.String) */
inline static auto& m29_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[29]);
/* System.String System::Decimal::ToString(System.IFormatProvider) */
inline static auto& m30_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[30]);
/* System.String System::Decimal::ToString(System.String, System.IFormatProvider) */
inline static auto& m31_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[31]);
/* System.Boolean System::Decimal::TryFormat(System.Span<System.Char>, System.Int32&, System.ReadOnlySpan<System.Char>, System.IFormatProvider) */
inline static auto& m32_TryFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[32]);
/* System.Decimal System::Decimal::Parse(System.String, System.IFormatProvider) */
inline static auto& m33_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[33]);
/* System.Decimal System::Decimal::Parse(System.String, System.Globalization.NumberStyles, System.IFormatProvider) */
inline static auto& m34_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[34]);
/* System.Boolean System::Decimal::TryParse(System.String, System.Decimal&) */
inline static auto& m35_TryParse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[35]);
/* System.Boolean System::Decimal::TryParse(System.String, System.Globalization.NumberStyles, System.IFormatProvider, System.Decimal&) */
inline static auto& m36_TryParse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[36]);
/* System.Int32[] System::Decimal::GetBits(System.Decimal) */
inline static auto& m37_GetBits = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[37]);
/* System.Decimal& System::Decimal::Max(System.Decimal&, System.Decimal&) */
inline static auto& m38_Max = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[38]);
/* System.Decimal& System::Decimal::Min(System.Decimal&, System.Decimal&) */
inline static auto& m39_Min = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[39]);
/* System.Decimal System::Decimal::Multiply(System.Decimal, System.Decimal) */
inline static auto& m40_Multiply = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[40]);
/* System.Decimal System::Decimal::Negate(System.Decimal) */
inline static auto& m41_Negate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[41]);
/* System.Decimal System::Decimal::Round(System.Decimal, System.Int32) */
inline static auto& m42_Round = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[42]);
/* System.Decimal System::Decimal::Round(System.Decimal&, System.Int32, System.MidpointRounding) */
inline static auto& m43_Round = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[43]);
/* System.Byte System::Decimal::ToByte(System.Decimal) */
inline static auto& m44_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[44]);
/* System.SByte System::Decimal::ToSByte(System.Decimal) */
inline static auto& m45_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[45]);
/* System.Int16 System::Decimal::ToInt16(System.Decimal) */
inline static auto& m46_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[46]);
/* System.Double System::Decimal::ToDouble(System.Decimal) */
inline static auto& m47_ToDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[47]);
/* System.Int32 System::Decimal::ToInt32(System.Decimal) */
inline static auto& m48_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[48]);
/* System.Int64 System::Decimal::ToInt64(System.Decimal) */
inline static auto& m49_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[49]);
/* System.UInt16 System::Decimal::ToUInt16(System.Decimal) */
inline static auto& m50_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[50]);
/* System.UInt32 System::Decimal::ToUInt32(System.Decimal) */
inline static auto& m51_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[51]);
/* System.UInt64 System::Decimal::ToUInt64(System.Decimal) */
inline static auto& m52_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[52]);
/* System.Single System::Decimal::ToSingle(System.Decimal) */
inline static auto& m53_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[53]);
/* System.Decimal System::Decimal::Truncate(System.Decimal) */
inline static auto& m54_Truncate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[54]);
/* System.Void System::Decimal::Truncate(System.Decimal&) */
inline static auto& m55_Truncate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[55]);
/* System.Decimal System::Decimal::op_Implicit(System.Byte) */
inline static auto& m56_op_Implicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[56]);
/* System.Decimal System::Decimal::op_Implicit(System.SByte) */
inline static auto& m57_op_Implicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[57]);
/* System.Decimal System::Decimal::op_Implicit(System.Int16) */
inline static auto& m58_op_Implicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[58]);
/* System.Decimal System::Decimal::op_Implicit(System.UInt16) */
inline static auto& m59_op_Implicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[59]);
/* System.Decimal System::Decimal::op_Implicit(System.Char) */
inline static auto& m60_op_Implicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[60]);
/* System.Decimal System::Decimal::op_Implicit(System.Int32) */
inline static auto& m61_op_Implicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[61]);
/* System.Decimal System::Decimal::op_Implicit(System.UInt32) */
inline static auto& m62_op_Implicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[62]);
/* System.Decimal System::Decimal::op_Implicit(System.Int64) */
inline static auto& m63_op_Implicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[63]);
/* System.Decimal System::Decimal::op_Implicit(System.UInt64) */
inline static auto& m64_op_Implicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[64]);
/* System.Decimal System::Decimal::op_Explicit(System.Single) */
inline static auto& m65_op_Explicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[65]);
/* System.Decimal System::Decimal::op_Explicit(System.Double) */
inline static auto& m66_op_Explicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[66]);
/* System.Int32 System::Decimal::op_Explicit(System.Decimal) */
inline static auto& m67_op_Explicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[67]);
/* System.Int32 System::Decimal::op_Explicit(System.Decimal) */
inline static auto& m68_op_Explicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[68]);
/* System.Int32 System::Decimal::op_Explicit(System.Decimal) */
inline static auto& m69_op_Explicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[69]);
/* System.Int32 System::Decimal::op_Explicit(System.Decimal) */
inline static auto& m70_op_Explicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[70]);
/* System.Int32 System::Decimal::op_Explicit(System.Decimal) */
inline static auto& m71_op_Explicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[71]);
/* System.Decimal System::Decimal::op_UnaryNegation(System.Decimal) */
inline static auto& m72_op_UnaryNegation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[72]);
/* System.Decimal System::Decimal::op_Increment(System.Decimal) */
inline static auto& m73_op_Increment = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[73]);
/* System.Decimal System::Decimal::op_Addition(System.Decimal, System.Decimal) */
inline static auto& m74_op_Addition = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[74]);
/* System.Decimal System::Decimal::op_Subtraction(System.Decimal, System.Decimal) */
inline static auto& m75_op_Subtraction = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[75]);
/* System.Decimal System::Decimal::op_Multiply(System.Decimal, System.Decimal) */
inline static auto& m76_op_Multiply = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[76]);
/* System.Decimal System::Decimal::op_Division(System.Decimal, System.Decimal) */
inline static auto& m77_op_Division = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[77]);
/* System.Boolean System::Decimal::op_Equality(System.Decimal, System.Decimal) */
inline static auto& m78_op_Equality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[78]);
/* System.Boolean System::Decimal::op_Inequality(System.Decimal, System.Decimal) */
inline static auto& m79_op_Inequality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[79]);
/* System.Boolean System::Decimal::op_LessThan(System.Decimal, System.Decimal) */
inline static auto& m80_op_LessThan = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[80]);
/* System.Boolean System::Decimal::op_LessThanOrEqual(System.Decimal, System.Decimal) */
inline static auto& m81_op_LessThanOrEqual = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[81]);
/* System.Boolean System::Decimal::op_GreaterThan(System.Decimal, System.Decimal) */
inline static auto& m82_op_GreaterThan = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[82]);
/* System.Boolean System::Decimal::op_GreaterThanOrEqual(System.Decimal, System.Decimal) */
inline static auto& m83_op_GreaterThanOrEqual = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[83]);
/* System.TypeCode System::Decimal::GetTypeCode() */
inline static auto& m84_GetTypeCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[84]);
/* System.Boolean System::Decimal::System.IConvertible.ToBoolean(System.IFormatProvider) */
inline static auto& m85_System_IConvertible_ToBoolean = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[85]);
/* System.Char System::Decimal::System.IConvertible.ToChar(System.IFormatProvider) */
inline static auto& m86_System_IConvertible_ToChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[86]);
/* System.SByte System::Decimal::System.IConvertible.ToSByte(System.IFormatProvider) */
inline static auto& m87_System_IConvertible_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[87]);
/* System.Byte System::Decimal::System.IConvertible.ToByte(System.IFormatProvider) */
inline static auto& m88_System_IConvertible_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[88]);
/* System.Int16 System::Decimal::System.IConvertible.ToInt16(System.IFormatProvider) */
inline static auto& m89_System_IConvertible_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[89]);
/* System.UInt16 System::Decimal::System.IConvertible.ToUInt16(System.IFormatProvider) */
inline static auto& m90_System_IConvertible_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[90]);
/* System.Int32 System::Decimal::System.IConvertible.ToInt32(System.IFormatProvider) */
inline static auto& m91_System_IConvertible_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[91]);
/* System.UInt32 System::Decimal::System.IConvertible.ToUInt32(System.IFormatProvider) */
inline static auto& m92_System_IConvertible_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[92]);
/* System.Int64 System::Decimal::System.IConvertible.ToInt64(System.IFormatProvider) */
inline static auto& m93_System_IConvertible_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[93]);
/* System.UInt64 System::Decimal::System.IConvertible.ToUInt64(System.IFormatProvider) */
inline static auto& m94_System_IConvertible_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[94]);
/* System.Single System::Decimal::System.IConvertible.ToSingle(System.IFormatProvider) */
inline static auto& m95_System_IConvertible_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[95]);
/* System.Double System::Decimal::System.IConvertible.ToDouble(System.IFormatProvider) */
inline static auto& m96_System_IConvertible_ToDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[96]);
/* System.Decimal System::Decimal::System.IConvertible.ToDecimal(System.IFormatProvider) */
inline static auto& m97_System_IConvertible_ToDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[97]);
/* System.DateTime System::Decimal::System.IConvertible.ToDateTime(System.IFormatProvider) */
inline static auto& m98_System_IConvertible_ToDateTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[98]);
/* System.Object System::Decimal::System.IConvertible.ToType(System.Type, System.IFormatProvider) */
inline static auto& m99_System_IConvertible_ToType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[99]);
/* System.Void System::Decimal::.cctor() */
inline static auto& m100__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[100]);

};

}