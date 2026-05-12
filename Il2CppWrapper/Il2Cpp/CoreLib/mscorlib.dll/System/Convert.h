
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct Convert {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 234> methods;
    inline static std::array<Il2CppWrapper::Field*, 5> fields;  
    /* System.SByte[] System::Convert::s_decodingMap */
inline static auto& f_s_decodingMap = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.Type[] System::Convert::ConvertTypes */
inline static auto& f_ConvertTypes = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
/* System.Type System::Convert::EnumType */
inline static auto& f_EnumType = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[2]);
/* System.Char[] System::Convert::base64Table */
inline static auto& f_base64Table = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[3]);
/* System.Object System::Convert::DBNull */
inline static auto& f_DBNull = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[4]);
  
    /* System.Boolean System::Convert::TryDecodeFromUtf16(System.ReadOnlySpan<System.Char>, System.Span<System.Byte>, System.Int32&, System.Int32&) */
inline static auto& m0_TryDecodeFromUtf16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.Int32 System::Convert::Decode(System.Char&, System.SByte&) */
inline static auto& m1_Decode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* System.Void System::Convert::WriteThreeLowOrderBytes(System.Byte&, System.Int32) */
inline static auto& m2_WriteThreeLowOrderBytes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* System.TypeCode System::Convert::GetTypeCode(System.Object) */
inline static auto& m3_GetTypeCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* System.Object System::Convert::ChangeType(System.Object, System.TypeCode, System.IFormatProvider) */
inline static auto& m4_ChangeType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.Object System::Convert::DefaultToType(System.IConvertible, System.Type, System.IFormatProvider) */
inline static auto& m5_DefaultToType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.Object System::Convert::ChangeType(System.Object, System.Type) */
inline static auto& m6_ChangeType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.Object System::Convert::ChangeType(System.Object, System.Type, System.IFormatProvider) */
inline static auto& m7_ChangeType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Void System::Convert::ThrowCharOverflowException() */
inline static auto& m8_ThrowCharOverflowException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);
/* System.Void System::Convert::ThrowByteOverflowException() */
inline static auto& m9_ThrowByteOverflowException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* System.Void System::Convert::ThrowSByteOverflowException() */
inline static auto& m10_ThrowSByteOverflowException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);
/* System.Void System::Convert::ThrowInt16OverflowException() */
inline static auto& m11_ThrowInt16OverflowException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* System.Void System::Convert::ThrowUInt16OverflowException() */
inline static auto& m12_ThrowUInt16OverflowException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);
/* System.Void System::Convert::ThrowInt32OverflowException() */
inline static auto& m13_ThrowInt32OverflowException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.Void System::Convert::ThrowUInt32OverflowException() */
inline static auto& m14_ThrowUInt32OverflowException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);
/* System.Void System::Convert::ThrowInt64OverflowException() */
inline static auto& m15_ThrowInt64OverflowException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[15]);
/* System.Void System::Convert::ThrowUInt64OverflowException() */
inline static auto& m16_ThrowUInt64OverflowException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[16]);
/* System.Boolean System::Convert::ToBoolean(System.Object, System.IFormatProvider) */
inline static auto& m17_ToBoolean = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[17]);
/* System.Boolean System::Convert::ToBoolean(System.SByte) */
inline static auto& m18_ToBoolean = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[18]);
/* System.Boolean System::Convert::ToBoolean(System.Byte) */
inline static auto& m19_ToBoolean = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[19]);
/* System.Boolean System::Convert::ToBoolean(System.Int16) */
inline static auto& m20_ToBoolean = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[20]);
/* System.Boolean System::Convert::ToBoolean(System.UInt16) */
inline static auto& m21_ToBoolean = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[21]);
/* System.Boolean System::Convert::ToBoolean(System.Int32) */
inline static auto& m22_ToBoolean = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[22]);
/* System.Boolean System::Convert::ToBoolean(System.UInt32) */
inline static auto& m23_ToBoolean = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* System.Boolean System::Convert::ToBoolean(System.Int64) */
inline static auto& m24_ToBoolean = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* System.Boolean System::Convert::ToBoolean(System.UInt64) */
inline static auto& m25_ToBoolean = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* System.Boolean System::Convert::ToBoolean(System.String, System.IFormatProvider) */
inline static auto& m26_ToBoolean = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* System.Boolean System::Convert::ToBoolean(System.Single) */
inline static auto& m27_ToBoolean = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);
/* System.Boolean System::Convert::ToBoolean(System.Double) */
inline static auto& m28_ToBoolean = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[28]);
/* System.Boolean System::Convert::ToBoolean(System.Decimal) */
inline static auto& m29_ToBoolean = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);
/* System.Char System::Convert::ToChar(System.Object, System.IFormatProvider) */
inline static auto& m30_ToChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[30]);
/* System.Char System::Convert::ToChar(System.SByte) */
inline static auto& m31_ToChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[31]);
/* System.Char System::Convert::ToChar(System.Byte) */
inline static auto& m32_ToChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[32]);
/* System.Char System::Convert::ToChar(System.Int16) */
inline static auto& m33_ToChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[33]);
/* System.Char System::Convert::ToChar(System.UInt16) */
inline static auto& m34_ToChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[34]);
/* System.Char System::Convert::ToChar(System.Int32) */
inline static auto& m35_ToChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[35]);
/* System.Char System::Convert::ToChar(System.UInt32) */
inline static auto& m36_ToChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[36]);
/* System.Char System::Convert::ToChar(System.Int64) */
inline static auto& m37_ToChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[37]);
/* System.Char System::Convert::ToChar(System.UInt64) */
inline static auto& m38_ToChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[38]);
/* System.Char System::Convert::ToChar(System.String) */
inline static auto& m39_ToChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[39]);
/* System.Char System::Convert::ToChar(System.String, System.IFormatProvider) */
inline static auto& m40_ToChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[40]);
/* System.SByte System::Convert::ToSByte(System.Object, System.IFormatProvider) */
inline static auto& m41_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[41]);
/* System.SByte System::Convert::ToSByte(System.Boolean) */
inline static auto& m42_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[42]);
/* System.SByte System::Convert::ToSByte(System.Char) */
inline static auto& m43_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[43]);
/* System.SByte System::Convert::ToSByte(System.Byte) */
inline static auto& m44_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[44]);
/* System.SByte System::Convert::ToSByte(System.Int16) */
inline static auto& m45_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[45]);
/* System.SByte System::Convert::ToSByte(System.UInt16) */
inline static auto& m46_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[46]);
/* System.SByte System::Convert::ToSByte(System.Int32) */
inline static auto& m47_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[47]);
/* System.SByte System::Convert::ToSByte(System.UInt32) */
inline static auto& m48_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[48]);
/* System.SByte System::Convert::ToSByte(System.Int64) */
inline static auto& m49_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[49]);
/* System.SByte System::Convert::ToSByte(System.UInt64) */
inline static auto& m50_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[50]);
/* System.SByte System::Convert::ToSByte(System.Single) */
inline static auto& m51_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[51]);
/* System.SByte System::Convert::ToSByte(System.Double) */
inline static auto& m52_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[52]);
/* System.SByte System::Convert::ToSByte(System.Decimal) */
inline static auto& m53_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[53]);
/* System.SByte System::Convert::ToSByte(System.String, System.IFormatProvider) */
inline static auto& m54_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[54]);
/* System.Byte System::Convert::ToByte(System.Object, System.IFormatProvider) */
inline static auto& m55_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[55]);
/* System.Byte System::Convert::ToByte(System.Boolean) */
inline static auto& m56_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[56]);
/* System.Byte System::Convert::ToByte(System.Char) */
inline static auto& m57_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[57]);
/* System.Byte System::Convert::ToByte(System.SByte) */
inline static auto& m58_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[58]);
/* System.Byte System::Convert::ToByte(System.Int16) */
inline static auto& m59_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[59]);
/* System.Byte System::Convert::ToByte(System.UInt16) */
inline static auto& m60_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[60]);
/* System.Byte System::Convert::ToByte(System.Int32) */
inline static auto& m61_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[61]);
/* System.Byte System::Convert::ToByte(System.UInt32) */
inline static auto& m62_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[62]);
/* System.Byte System::Convert::ToByte(System.Int64) */
inline static auto& m63_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[63]);
/* System.Byte System::Convert::ToByte(System.UInt64) */
inline static auto& m64_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[64]);
/* System.Byte System::Convert::ToByte(System.Single) */
inline static auto& m65_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[65]);
/* System.Byte System::Convert::ToByte(System.Double) */
inline static auto& m66_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[66]);
/* System.Byte System::Convert::ToByte(System.Decimal) */
inline static auto& m67_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[67]);
/* System.Byte System::Convert::ToByte(System.String) */
inline static auto& m68_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[68]);
/* System.Byte System::Convert::ToByte(System.String, System.IFormatProvider) */
inline static auto& m69_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[69]);
/* System.Int16 System::Convert::ToInt16(System.Object, System.IFormatProvider) */
inline static auto& m70_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[70]);
/* System.Int16 System::Convert::ToInt16(System.Boolean) */
inline static auto& m71_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[71]);
/* System.Int16 System::Convert::ToInt16(System.Char) */
inline static auto& m72_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[72]);
/* System.Int16 System::Convert::ToInt16(System.SByte) */
inline static auto& m73_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[73]);
/* System.Int16 System::Convert::ToInt16(System.Byte) */
inline static auto& m74_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[74]);
/* System.Int16 System::Convert::ToInt16(System.UInt16) */
inline static auto& m75_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[75]);
/* System.Int16 System::Convert::ToInt16(System.Int32) */
inline static auto& m76_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[76]);
/* System.Int16 System::Convert::ToInt16(System.UInt32) */
inline static auto& m77_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[77]);
/* System.Int16 System::Convert::ToInt16(System.Int64) */
inline static auto& m78_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[78]);
/* System.Int16 System::Convert::ToInt16(System.UInt64) */
inline static auto& m79_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[79]);
/* System.Int16 System::Convert::ToInt16(System.Single) */
inline static auto& m80_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[80]);
/* System.Int16 System::Convert::ToInt16(System.Double) */
inline static auto& m81_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[81]);
/* System.Int16 System::Convert::ToInt16(System.Decimal) */
inline static auto& m82_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[82]);
/* System.Int16 System::Convert::ToInt16(System.String, System.IFormatProvider) */
inline static auto& m83_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[83]);
/* System.UInt16 System::Convert::ToUInt16(System.Object, System.IFormatProvider) */
inline static auto& m84_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[84]);
/* System.UInt16 System::Convert::ToUInt16(System.Boolean) */
inline static auto& m85_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[85]);
/* System.UInt16 System::Convert::ToUInt16(System.Char) */
inline static auto& m86_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[86]);
/* System.UInt16 System::Convert::ToUInt16(System.SByte) */
inline static auto& m87_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[87]);
/* System.UInt16 System::Convert::ToUInt16(System.Byte) */
inline static auto& m88_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[88]);
/* System.UInt16 System::Convert::ToUInt16(System.Int16) */
inline static auto& m89_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[89]);
/* System.UInt16 System::Convert::ToUInt16(System.Int32) */
inline static auto& m90_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[90]);
/* System.UInt16 System::Convert::ToUInt16(System.UInt32) */
inline static auto& m91_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[91]);
/* System.UInt16 System::Convert::ToUInt16(System.Int64) */
inline static auto& m92_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[92]);
/* System.UInt16 System::Convert::ToUInt16(System.UInt64) */
inline static auto& m93_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[93]);
/* System.UInt16 System::Convert::ToUInt16(System.Single) */
inline static auto& m94_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[94]);
/* System.UInt16 System::Convert::ToUInt16(System.Double) */
inline static auto& m95_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[95]);
/* System.UInt16 System::Convert::ToUInt16(System.Decimal) */
inline static auto& m96_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[96]);
/* System.UInt16 System::Convert::ToUInt16(System.String, System.IFormatProvider) */
inline static auto& m97_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[97]);
/* System.Int32 System::Convert::ToInt32(System.Object) */
inline static auto& m98_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[98]);
/* System.Int32 System::Convert::ToInt32(System.Object, System.IFormatProvider) */
inline static auto& m99_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[99]);
/* System.Int32 System::Convert::ToInt32(System.Boolean) */
inline static auto& m100_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[100]);
/* System.Int32 System::Convert::ToInt32(System.Char) */
inline static auto& m101_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[101]);
/* System.Int32 System::Convert::ToInt32(System.Byte) */
inline static auto& m102_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[102]);
/* System.Int32 System::Convert::ToInt32(System.Int16) */
inline static auto& m103_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[103]);
/* System.Int32 System::Convert::ToInt32(System.UInt16) */
inline static auto& m104_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[104]);
/* System.Int32 System::Convert::ToInt32(System.UInt32) */
inline static auto& m105_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[105]);
/* System.Int32 System::Convert::ToInt32(System.Int32) */
inline static auto& m106_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[106]);
/* System.Int32 System::Convert::ToInt32(System.Int64) */
inline static auto& m107_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[107]);
/* System.Int32 System::Convert::ToInt32(System.UInt64) */
inline static auto& m108_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[108]);
/* System.Int32 System::Convert::ToInt32(System.Single) */
inline static auto& m109_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[109]);
/* System.Int32 System::Convert::ToInt32(System.Double) */
inline static auto& m110_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[110]);
/* System.Int32 System::Convert::ToInt32(System.Decimal) */
inline static auto& m111_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[111]);
/* System.Int32 System::Convert::ToInt32(System.String) */
inline static auto& m112_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[112]);
/* System.Int32 System::Convert::ToInt32(System.String, System.IFormatProvider) */
inline static auto& m113_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[113]);
/* System.UInt32 System::Convert::ToUInt32(System.Object) */
inline static auto& m114_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[114]);
/* System.UInt32 System::Convert::ToUInt32(System.Object, System.IFormatProvider) */
inline static auto& m115_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[115]);
/* System.UInt32 System::Convert::ToUInt32(System.Boolean) */
inline static auto& m116_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[116]);
/* System.UInt32 System::Convert::ToUInt32(System.Char) */
inline static auto& m117_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[117]);
/* System.UInt32 System::Convert::ToUInt32(System.SByte) */
inline static auto& m118_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[118]);
/* System.UInt32 System::Convert::ToUInt32(System.Byte) */
inline static auto& m119_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[119]);
/* System.UInt32 System::Convert::ToUInt32(System.Int16) */
inline static auto& m120_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[120]);
/* System.UInt32 System::Convert::ToUInt32(System.UInt16) */
inline static auto& m121_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[121]);
/* System.UInt32 System::Convert::ToUInt32(System.Int32) */
inline static auto& m122_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[122]);
/* System.UInt32 System::Convert::ToUInt32(System.Int64) */
inline static auto& m123_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[123]);
/* System.UInt32 System::Convert::ToUInt32(System.UInt64) */
inline static auto& m124_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[124]);
/* System.UInt32 System::Convert::ToUInt32(System.Single) */
inline static auto& m125_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[125]);
/* System.UInt32 System::Convert::ToUInt32(System.Double) */
inline static auto& m126_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[126]);
/* System.UInt32 System::Convert::ToUInt32(System.Decimal) */
inline static auto& m127_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[127]);
/* System.UInt32 System::Convert::ToUInt32(System.String, System.IFormatProvider) */
inline static auto& m128_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[128]);
/* System.Int64 System::Convert::ToInt64(System.Object) */
inline static auto& m129_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[129]);
/* System.Int64 System::Convert::ToInt64(System.Object, System.IFormatProvider) */
inline static auto& m130_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[130]);
/* System.Int64 System::Convert::ToInt64(System.Boolean) */
inline static auto& m131_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[131]);
/* System.Int64 System::Convert::ToInt64(System.Char) */
inline static auto& m132_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[132]);
/* System.Int64 System::Convert::ToInt64(System.SByte) */
inline static auto& m133_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[133]);
/* System.Int64 System::Convert::ToInt64(System.Byte) */
inline static auto& m134_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[134]);
/* System.Int64 System::Convert::ToInt64(System.Int16) */
inline static auto& m135_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[135]);
/* System.Int64 System::Convert::ToInt64(System.UInt16) */
inline static auto& m136_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[136]);
/* System.Int64 System::Convert::ToInt64(System.Int32) */
inline static auto& m137_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[137]);
/* System.Int64 System::Convert::ToInt64(System.UInt32) */
inline static auto& m138_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[138]);
/* System.Int64 System::Convert::ToInt64(System.UInt64) */
inline static auto& m139_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[139]);
/* System.Int64 System::Convert::ToInt64(System.Single) */
inline static auto& m140_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[140]);
/* System.Int64 System::Convert::ToInt64(System.Double) */
inline static auto& m141_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[141]);
/* System.Int64 System::Convert::ToInt64(System.Decimal) */
inline static auto& m142_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[142]);
/* System.Int64 System::Convert::ToInt64(System.String) */
inline static auto& m143_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[143]);
/* System.Int64 System::Convert::ToInt64(System.String, System.IFormatProvider) */
inline static auto& m144_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[144]);
/* System.UInt64 System::Convert::ToUInt64(System.Object) */
inline static auto& m145_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[145]);
/* System.UInt64 System::Convert::ToUInt64(System.Object, System.IFormatProvider) */
inline static auto& m146_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[146]);
/* System.UInt64 System::Convert::ToUInt64(System.Boolean) */
inline static auto& m147_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[147]);
/* System.UInt64 System::Convert::ToUInt64(System.Char) */
inline static auto& m148_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[148]);
/* System.UInt64 System::Convert::ToUInt64(System.SByte) */
inline static auto& m149_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[149]);
/* System.UInt64 System::Convert::ToUInt64(System.Byte) */
inline static auto& m150_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[150]);
/* System.UInt64 System::Convert::ToUInt64(System.Int16) */
inline static auto& m151_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[151]);
/* System.UInt64 System::Convert::ToUInt64(System.UInt16) */
inline static auto& m152_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[152]);
/* System.UInt64 System::Convert::ToUInt64(System.Int32) */
inline static auto& m153_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[153]);
/* System.UInt64 System::Convert::ToUInt64(System.UInt32) */
inline static auto& m154_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[154]);
/* System.UInt64 System::Convert::ToUInt64(System.Int64) */
inline static auto& m155_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[155]);
/* System.UInt64 System::Convert::ToUInt64(System.Single) */
inline static auto& m156_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[156]);
/* System.UInt64 System::Convert::ToUInt64(System.Double) */
inline static auto& m157_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[157]);
/* System.UInt64 System::Convert::ToUInt64(System.Decimal) */
inline static auto& m158_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[158]);
/* System.UInt64 System::Convert::ToUInt64(System.String, System.IFormatProvider) */
inline static auto& m159_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[159]);
/* System.Single System::Convert::ToSingle(System.Object) */
inline static auto& m160_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[160]);
/* System.Single System::Convert::ToSingle(System.Object, System.IFormatProvider) */
inline static auto& m161_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[161]);
/* System.Single System::Convert::ToSingle(System.SByte) */
inline static auto& m162_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[162]);
/* System.Single System::Convert::ToSingle(System.Byte) */
inline static auto& m163_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[163]);
/* System.Single System::Convert::ToSingle(System.Int16) */
inline static auto& m164_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[164]);
/* System.Single System::Convert::ToSingle(System.UInt16) */
inline static auto& m165_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[165]);
/* System.Single System::Convert::ToSingle(System.Int32) */
inline static auto& m166_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[166]);
/* System.Single System::Convert::ToSingle(System.UInt32) */
inline static auto& m167_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[167]);
/* System.Single System::Convert::ToSingle(System.Int64) */
inline static auto& m168_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[168]);
/* System.Single System::Convert::ToSingle(System.UInt64) */
inline static auto& m169_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[169]);
/* System.Single System::Convert::ToSingle(System.Single) */
inline static auto& m170_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[170]);
/* System.Single System::Convert::ToSingle(System.Double) */
inline static auto& m171_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[171]);
/* System.Single System::Convert::ToSingle(System.Decimal) */
inline static auto& m172_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[172]);
/* System.Single System::Convert::ToSingle(System.String, System.IFormatProvider) */
inline static auto& m173_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[173]);
/* System.Single System::Convert::ToSingle(System.Boolean) */
inline static auto& m174_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[174]);
/* System.Double System::Convert::ToDouble(System.Object, System.IFormatProvider) */
inline static auto& m175_ToDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[175]);
/* System.Double System::Convert::ToDouble(System.SByte) */
inline static auto& m176_ToDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[176]);
/* System.Double System::Convert::ToDouble(System.Byte) */
inline static auto& m177_ToDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[177]);
/* System.Double System::Convert::ToDouble(System.Int16) */
inline static auto& m178_ToDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[178]);
/* System.Double System::Convert::ToDouble(System.UInt16) */
inline static auto& m179_ToDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[179]);
/* System.Double System::Convert::ToDouble(System.Int32) */
inline static auto& m180_ToDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[180]);
/* System.Double System::Convert::ToDouble(System.UInt32) */
inline static auto& m181_ToDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[181]);
/* System.Double System::Convert::ToDouble(System.Int64) */
inline static auto& m182_ToDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[182]);
/* System.Double System::Convert::ToDouble(System.UInt64) */
inline static auto& m183_ToDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[183]);
/* System.Double System::Convert::ToDouble(System.Single) */
inline static auto& m184_ToDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[184]);
/* System.Double System::Convert::ToDouble(System.Decimal) */
inline static auto& m185_ToDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[185]);
/* System.Double System::Convert::ToDouble(System.String, System.IFormatProvider) */
inline static auto& m186_ToDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[186]);
/* System.Double System::Convert::ToDouble(System.Boolean) */
inline static auto& m187_ToDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[187]);
/* System.Decimal System::Convert::ToDecimal(System.Object) */
inline static auto& m188_ToDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[188]);
/* System.Decimal System::Convert::ToDecimal(System.Object, System.IFormatProvider) */
inline static auto& m189_ToDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[189]);
/* System.Decimal System::Convert::ToDecimal(System.SByte) */
inline static auto& m190_ToDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[190]);
/* System.Decimal System::Convert::ToDecimal(System.Byte) */
inline static auto& m191_ToDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[191]);
/* System.Decimal System::Convert::ToDecimal(System.Int16) */
inline static auto& m192_ToDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[192]);
/* System.Decimal System::Convert::ToDecimal(System.UInt16) */
inline static auto& m193_ToDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[193]);
/* System.Decimal System::Convert::ToDecimal(System.Int32) */
inline static auto& m194_ToDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[194]);
/* System.Decimal System::Convert::ToDecimal(System.UInt32) */
inline static auto& m195_ToDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[195]);
/* System.Decimal System::Convert::ToDecimal(System.Int64) */
inline static auto& m196_ToDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[196]);
/* System.Decimal System::Convert::ToDecimal(System.UInt64) */
inline static auto& m197_ToDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[197]);
/* System.Decimal System::Convert::ToDecimal(System.Single) */
inline static auto& m198_ToDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[198]);
/* System.Decimal System::Convert::ToDecimal(System.Double) */
inline static auto& m199_ToDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[199]);
/* System.Decimal System::Convert::ToDecimal(System.String, System.IFormatProvider) */
inline static auto& m200_ToDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[200]);
/* System.Decimal System::Convert::ToDecimal(System.Boolean) */
inline static auto& m201_ToDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[201]);
/* System.DateTime System::Convert::ToDateTime(System.Object, System.IFormatProvider) */
inline static auto& m202_ToDateTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[202]);
/* System.DateTime System::Convert::ToDateTime(System.String, System.IFormatProvider) */
inline static auto& m203_ToDateTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[203]);
/* System.String System::Convert::ToString(System.Object) */
inline static auto& m204_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[204]);
/* System.String System::Convert::ToString(System.Object, System.IFormatProvider) */
inline static auto& m205_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[205]);
/* System.String System::Convert::ToString(System.Char, System.IFormatProvider) */
inline static auto& m206_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[206]);
/* System.String System::Convert::ToString(System.Int32, System.IFormatProvider) */
inline static auto& m207_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[207]);
/* System.Byte System::Convert::ToByte(System.String, System.Int32) */
inline static auto& m208_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[208]);
/* System.SByte System::Convert::ToSByte(System.String, System.Int32) */
inline static auto& m209_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[209]);
/* System.Int16 System::Convert::ToInt16(System.String, System.Int32) */
inline static auto& m210_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[210]);
/* System.UInt16 System::Convert::ToUInt16(System.String, System.Int32) */
inline static auto& m211_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[211]);
/* System.Int32 System::Convert::ToInt32(System.String, System.Int32) */
inline static auto& m212_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[212]);
/* System.UInt32 System::Convert::ToUInt32(System.String, System.Int32) */
inline static auto& m213_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[213]);
/* System.Int64 System::Convert::ToInt64(System.String, System.Int32) */
inline static auto& m214_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[214]);
/* System.UInt64 System::Convert::ToUInt64(System.String, System.Int32) */
inline static auto& m215_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[215]);
/* System.String System::Convert::ToString(System.Int32, System.Int32) */
inline static auto& m216_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[216]);
/* System.String System::Convert::ToString(System.Int64, System.Int32) */
inline static auto& m217_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[217]);
/* System.String System::Convert::ToBase64String(System.Byte[]) */
inline static auto& m218_ToBase64String = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[218]);
/* System.String System::Convert::ToBase64String(System.Byte[], System.Int32, System.Int32) */
inline static auto& m219_ToBase64String = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[219]);
/* System.String System::Convert::ToBase64String(System.Byte[], System.Int32, System.Int32, System.Base64FormattingOptions) */
inline static auto& m220_ToBase64String = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[220]);
/* System.String System::Convert::ToBase64String(System.ReadOnlySpan<System.Byte>, System.Base64FormattingOptions) */
inline static auto& m221_ToBase64String = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[221]);
/* System.Int32 System::Convert::ToBase64CharArray(System.Byte[], System.Int32, System.Int32, System.Char[], System.Int32) */
inline static auto& m222_ToBase64CharArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[222]);
/* System.Int32 System::Convert::ToBase64CharArray(System.Byte[], System.Int32, System.Int32, System.Char[], System.Int32, System.Base64FormattingOptions) */
inline static auto& m223_ToBase64CharArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[223]);
/* System.Int32 System::Convert::ConvertToBase64Array(System.Char*, System.Byte*, System.Int32, System.Int32, System.Boolean) */
inline static auto& m224_ConvertToBase64Array = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[224]);
/* System.Int32 System::Convert::ToBase64_CalculateAndValidateOutputLength(System.Int32, System.Boolean) */
inline static auto& m225_ToBase64_CalculateAndValidateOutputLength = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[225]);
/* System.Byte[] System::Convert::FromBase64String(System.String) */
inline static auto& m226_FromBase64String = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[226]);
/* System.Boolean System::Convert::TryFromBase64Chars(System.ReadOnlySpan<System.Char>, System.Span<System.Byte>, System.Int32&) */
inline static auto& m227_TryFromBase64Chars = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[227]);
/* System.Void System::Convert::CopyToTempBufferWithoutWhiteSpace(System.ReadOnlySpan<System.Char>, System.Span<System.Char>, System.Int32&, System.Int32&) */
inline static auto& m228_CopyToTempBufferWithoutWhiteSpace = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[228]);
/* System.Boolean System::Convert::IsSpace(System.Char) */
inline static auto& m229_IsSpace = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[229]);
/* System.Byte[] System::Convert::FromBase64CharArray(System.Char[], System.Int32, System.Int32) */
inline static auto& m230_FromBase64CharArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[230]);
/* System.Byte[] System::Convert::FromBase64CharPtr(System.Char*, System.Int32) */
inline static auto& m231_FromBase64CharPtr = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[231]);
/* System.Int32 System::Convert::FromBase64_ComputeResultLength(System.Char*, System.Int32) */
inline static auto& m232_FromBase64_ComputeResultLength = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[232]);
/* System.Void System::Convert::.cctor() */
inline static auto& m233__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[233]);

};

}