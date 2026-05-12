
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct String {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 201> methods;
    inline static std::array<Il2CppWrapper::Field*, 7> fields;  
    /* System.Int32 System::String::StackallocIntBufferSizeLimit */
inline static auto& f_StackallocIntBufferSizeLimit = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.Int32 System::String::PROBABILISTICMAP_BLOCK_INDEX_MASK */
inline static auto& f_PROBABILISTICMAP_BLOCK_INDEX_MASK = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
/* System.Int32 System::String::PROBABILISTICMAP_BLOCK_INDEX_SHIFT */
inline static auto& f_PROBABILISTICMAP_BLOCK_INDEX_SHIFT = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[2]);
/* System.Int32 System::String::PROBABILISTICMAP_SIZE */
inline static auto& f_PROBABILISTICMAP_SIZE = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[3]);
/* System.Int32 System::String::_stringLength */
inline static auto& f__stringLength = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[4]);
/* System.Char System::String::_firstChar */
inline static auto& f__firstChar = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[5]);
/* System.String System::String::Empty */
inline static auto& f_Empty = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[6]);
  
    /* System.Boolean System::String::EqualsHelper(System.String, System.String) */
inline static auto& m0_EqualsHelper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.Int32 System::String::CompareOrdinalHelper(System.String, System.Int32, System.Int32, System.String, System.Int32, System.Int32) */
inline static auto& m1_CompareOrdinalHelper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* System.Int32 System::String::CompareOrdinalHelper(System.String, System.String) */
inline static auto& m2_CompareOrdinalHelper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* System.Int32 System::String::Compare(System.String, System.String, System.Boolean) */
inline static auto& m3_Compare = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* System.Int32 System::String::Compare(System.String, System.String, System.StringComparison) */
inline static auto& m4_Compare = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.Int32 System::String::Compare(System.String, System.String, System.Globalization.CultureInfo, System.Globalization.CompareOptions) */
inline static auto& m5_Compare = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.Int32 System::String::Compare(System.String, System.String, System.Boolean, System.Globalization.CultureInfo) */
inline static auto& m6_Compare = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.Int32 System::String::Compare(System.String, System.Int32, System.String, System.Int32, System.Int32, System.StringComparison) */
inline static auto& m7_Compare = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Int32 System::String::CompareOrdinal(System.String, System.String) */
inline static auto& m8_CompareOrdinal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);
/* System.Int32 System::String::CompareOrdinal(System.ReadOnlySpan<System.Char>, System.ReadOnlySpan<System.Char>) */
inline static auto& m9_CompareOrdinal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* System.Int32 System::String::CompareOrdinal(System.String, System.Int32, System.String, System.Int32, System.Int32) */
inline static auto& m10_CompareOrdinal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);
/* System.Int32 System::String::CompareTo(System.Object) */
inline static auto& m11_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[11]);
/* System.Int32 System::String::CompareTo(System.String) */
inline static auto& m12_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[12]);
/* System.Boolean System::String::EndsWith(System.String) */
inline static auto& m13_EndsWith = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* System.Boolean System::String::EndsWith(System.String, System.StringComparison) */
inline static auto& m14_EndsWith = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* System.Boolean System::String::Equals(System.Object) */
inline static auto& m15_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[15]);
/* System.Boolean System::String::Equals(System.String) */
inline static auto& m16_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[16]);
/* System.Boolean System::String::Equals(System.String, System.StringComparison) */
inline static auto& m17_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.Boolean System::String::Equals(System.String, System.String) */
inline static auto& m18_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[18]);
/* System.Boolean System::String::Equals(System.String, System.String, System.StringComparison) */
inline static auto& m19_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[19]);
/* System.Boolean System::String::op_Equality(System.String, System.String) */
inline static auto& m20_op_Equality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[20]);
/* System.Boolean System::String::op_Inequality(System.String, System.String) */
inline static auto& m21_op_Inequality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[21]);
/* System.Int32 System::String::GetHashCode() */
inline static auto& m22_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[22]);
/* System.Int32 System::String::GetLegacyNonRandomizedHashCode() */
inline static auto& m23_GetLegacyNonRandomizedHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[23]);
/* System.Boolean System::String::StartsWith(System.String) */
inline static auto& m24_StartsWith = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[24]);
/* System.Boolean System::String::StartsWith(System.String, System.StringComparison) */
inline static auto& m25_StartsWith = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[25]);
/* System.Void System::String::CheckStringComparison(System.StringComparison) */
inline static auto& m26_CheckStringComparison = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* System.Void System::String::.ctor(System.Char[]) */
inline static auto& m27__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[27]);
/* System.String System::String::Ctor(System.Char[]) */
inline static auto& m28_Ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[28]);
/* System.Void System::String::.ctor(System.Char[], System.Int32, System.Int32) */
inline static auto& m29__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[29]);
/* System.String System::String::Ctor(System.Char[], System.Int32, System.Int32) */
inline static auto& m30_Ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[30]);
/* System.Void System::String::.ctor(System.Char*) */
inline static auto& m31__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[31]);
/* System.String System::String::Ctor(System.Char*) */
inline static auto& m32_Ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[32]);
/* System.Void System::String::.ctor(System.Char*, System.Int32, System.Int32) */
inline static auto& m33__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[33]);
/* System.String System::String::Ctor(System.Char*, System.Int32, System.Int32) */
inline static auto& m34_Ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[34]);
/* System.Void System::String::.ctor(System.SByte*, System.Int32, System.Int32) */
inline static auto& m35__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[35]);
/* System.String System::String::Ctor(System.SByte*, System.Int32, System.Int32) */
inline static auto& m36_Ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[36]);
/* System.String System::String::CreateStringForSByteConstructor(System.Byte*, System.Int32) */
inline static auto& m37_CreateStringForSByteConstructor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[37]);
/* System.Void System::String::.ctor(System.SByte*, System.Int32, System.Int32, System.Text.Encoding) */
inline static auto& m38__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[38]);
/* System.String System::String::Ctor(System.SByte*, System.Int32, System.Int32, System.Text.Encoding) */
inline static auto& m39_Ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[39]);
/* System.Void System::String::.ctor(System.Char, System.Int32) */
inline static auto& m40__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[40]);
/* System.String System::String::Ctor(System.Char, System.Int32) */
inline static auto& m41_Ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[41]);
/* System.Void System::String::.ctor(System.ReadOnlySpan<System.Char>) */
inline static auto& m42__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[42]);
/* System.String System::String::Ctor(System.ReadOnlySpan<System.Char>) */
inline static auto& m43_Ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[43]);
/* System.String System::String::Create(System.Int32, TState, System.Buffers.SpanAction<System.Char,TState>) */
inline static auto& m44_Create = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[44]);
/* System.ReadOnlySpan<System.Char> System::String::op_Implicit(System.String) */
inline static auto& m45_op_Implicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[45]);
/* System.Object System::String::Clone() */
inline static auto& m46_Clone = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[46]);
/* System.String System::String::Copy(System.String) */
inline static auto& m47_Copy = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[47]);
/* System.Void System::String::CopyTo(System.Int32, System.Char[], System.Int32, System.Int32) */
inline static auto& m48_CopyTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[48]);
/* System.Char[] System::String::ToCharArray() */
inline static auto& m49_ToCharArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[49]);
/* System.Boolean System::String::IsNullOrEmpty(System.String) */
inline static auto& m50_IsNullOrEmpty = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[50]);
/* System.Boolean System::String::IsNullOrWhiteSpace(System.String) */
inline static auto& m51_IsNullOrWhiteSpace = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[51]);
/* System.Char& System::String::GetRawStringData() */
inline static auto& m52_GetRawStringData = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[52]);
/* System.String System::String::CreateStringFromEncoding(System.Byte*, System.Int32, System.Text.Encoding) */
inline static auto& m53_CreateStringFromEncoding = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[53]);
/* System.String System::String::CreateFromChar(System.Char) */
inline static auto& m54_CreateFromChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[54]);
/* System.Void System::String::wstrcpy(System.Char*, System.Char*, System.Int32) */
inline static auto& m55_wstrcpy = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[55]);
/* System.String System::String::ToString() */
inline static auto& m56_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[56]);
/* System.String System::String::ToString(System.IFormatProvider) */
inline static auto& m57_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[57]);
/* System.Collections.Generic.IEnumerator<System.Char> System::String::System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator() */
inline static auto& m58_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[58]);
/* System.Collections.IEnumerator System::String::System.Collections.IEnumerable.GetEnumerator() */
inline static auto& m59_System_Collections_IEnumerable_GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[59]);
/* System.Int32 System::String::wcslen(System.Char*) */
inline static auto& m60_wcslen = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[60]);
/* System.TypeCode System::String::GetTypeCode() */
inline static auto& m61_GetTypeCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[61]);
/* System.Boolean System::String::System.IConvertible.ToBoolean(System.IFormatProvider) */
inline static auto& m62_System_IConvertible_ToBoolean = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[62]);
/* System.Char System::String::System.IConvertible.ToChar(System.IFormatProvider) */
inline static auto& m63_System_IConvertible_ToChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[63]);
/* System.SByte System::String::System.IConvertible.ToSByte(System.IFormatProvider) */
inline static auto& m64_System_IConvertible_ToSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[64]);
/* System.Byte System::String::System.IConvertible.ToByte(System.IFormatProvider) */
inline static auto& m65_System_IConvertible_ToByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[65]);
/* System.Int16 System::String::System.IConvertible.ToInt16(System.IFormatProvider) */
inline static auto& m66_System_IConvertible_ToInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[66]);
/* System.UInt16 System::String::System.IConvertible.ToUInt16(System.IFormatProvider) */
inline static auto& m67_System_IConvertible_ToUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[67]);
/* System.Int32 System::String::System.IConvertible.ToInt32(System.IFormatProvider) */
inline static auto& m68_System_IConvertible_ToInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[68]);
/* System.UInt32 System::String::System.IConvertible.ToUInt32(System.IFormatProvider) */
inline static auto& m69_System_IConvertible_ToUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[69]);
/* System.Int64 System::String::System.IConvertible.ToInt64(System.IFormatProvider) */
inline static auto& m70_System_IConvertible_ToInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[70]);
/* System.UInt64 System::String::System.IConvertible.ToUInt64(System.IFormatProvider) */
inline static auto& m71_System_IConvertible_ToUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[71]);
/* System.Single System::String::System.IConvertible.ToSingle(System.IFormatProvider) */
inline static auto& m72_System_IConvertible_ToSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[72]);
/* System.Double System::String::System.IConvertible.ToDouble(System.IFormatProvider) */
inline static auto& m73_System_IConvertible_ToDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[73]);
/* System.Decimal System::String::System.IConvertible.ToDecimal(System.IFormatProvider) */
inline static auto& m74_System_IConvertible_ToDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[74]);
/* System.DateTime System::String::System.IConvertible.ToDateTime(System.IFormatProvider) */
inline static auto& m75_System_IConvertible_ToDateTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[75]);
/* System.Object System::String::System.IConvertible.ToType(System.Type, System.IFormatProvider) */
inline static auto& m76_System_IConvertible_ToType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[76]);
/* System.String System::String::Normalize(System.Text.NormalizationForm) */
inline static auto& m77_Normalize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[77]);
/* System.Void System::String::FillStringChecked(System.String, System.Int32, System.String) */
inline static auto& m78_FillStringChecked = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[78]);
/* System.String System::String::Concat(System.Object, System.Object) */
inline static auto& m79_Concat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[79]);
/* System.String System::String::Concat(System.Object, System.Object, System.Object) */
inline static auto& m80_Concat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[80]);
/* System.String System::String::Concat(System.Object[]) */
inline static auto& m81_Concat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[81]);
/* System.String System::String::Concat(System.Collections.Generic.IEnumerable<System.String>) */
inline static auto& m82_Concat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[82]);
/* System.String System::String::Concat(System.String, System.String) */
inline static auto& m83_Concat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[83]);
/* System.String System::String::Concat(System.String, System.String, System.String) */
inline static auto& m84_Concat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[84]);
/* System.String System::String::Concat(System.String, System.String, System.String, System.String) */
inline static auto& m85_Concat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[85]);
/* System.String System::String::Concat(System.String[]) */
inline static auto& m86_Concat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[86]);
/* System.String System::String::Format(System.String, System.Object) */
inline static auto& m87_Format = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[87]);
/* System.String System::String::Format(System.String, System.Object, System.Object) */
inline static auto& m88_Format = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[88]);
/* System.String System::String::Format(System.String, System.Object, System.Object, System.Object) */
inline static auto& m89_Format = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[89]);
/* System.String System::String::Format(System.String, System.Object[]) */
inline static auto& m90_Format = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[90]);
/* System.String System::String::Format(System.IFormatProvider, System.String, System.Object) */
inline static auto& m91_Format = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[91]);
/* System.String System::String::Format(System.IFormatProvider, System.String, System.Object, System.Object) */
inline static auto& m92_Format = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[92]);
/* System.String System::String::Format(System.IFormatProvider, System.String, System.Object, System.Object, System.Object) */
inline static auto& m93_Format = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[93]);
/* System.String System::String::Format(System.IFormatProvider, System.String, System.Object[]) */
inline static auto& m94_Format = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[94]);
/* System.String System::String::FormatHelper(System.IFormatProvider, System.String, System.ParamsArray) */
inline static auto& m95_FormatHelper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[95]);
/* System.String System::String::Insert(System.Int32, System.String) */
inline static auto& m96_Insert = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[96]);
/* System.String System::String::Join(System.String, System.String[]) */
inline static auto& m97_Join = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[97]);
/* System.String System::String::Join(System.String, System.Collections.Generic.IEnumerable<T>) */
inline static auto& m98_Join = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[98]);
/* System.String System::String::Join(System.String, System.Collections.Generic.IEnumerable<System.String>) */
inline static auto& m99_Join = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[99]);
/* System.String System::String::Join(System.String, System.String[], System.Int32, System.Int32) */
inline static auto& m100_Join = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[100]);
/* System.String System::String::JoinCore(System.Char*, System.Int32, System.Collections.Generic.IEnumerable<T>) */
inline static auto& m101_JoinCore = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[101]);
/* System.String System::String::JoinCore(System.Char*, System.Int32, System.String[], System.Int32, System.Int32) */
inline static auto& m102_JoinCore = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[102]);
/* System.String System::String::PadLeft(System.Int32) */
inline static auto& m103_PadLeft = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[103]);
/* System.String System::String::PadLeft(System.Int32, System.Char) */
inline static auto& m104_PadLeft = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[104]);
/* System.String System::String::PadRight(System.Int32, System.Char) */
inline static auto& m105_PadRight = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[105]);
/* System.String System::String::Remove(System.Int32, System.Int32) */
inline static auto& m106_Remove = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[106]);
/* System.String System::String::Remove(System.Int32) */
inline static auto& m107_Remove = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[107]);
/* System.String System::String::Replace(System.Char, System.Char) */
inline static auto& m108_Replace = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[108]);
/* System.String System::String::Replace(System.String, System.String) */
inline static auto& m109_Replace = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[109]);
/* System.String System::String::ReplaceHelper(System.Int32, System.String, System.ReadOnlySpan<System.Int32>) */
inline static auto& m110_ReplaceHelper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[110]);
/* System.String[] System::String::Split(System.Char, System.StringSplitOptions) */
inline static auto& m111_Split = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[111]);
/* System.String[] System::String::Split(System.Char[]) */
inline static auto& m112_Split = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[112]);
/* System.String[] System::String::Split(System.Char[], System.Int32) */
inline static auto& m113_Split = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[113]);
/* System.String[] System::String::Split(System.Char[], System.StringSplitOptions) */
inline static auto& m114_Split = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[114]);
/* System.String[] System::String::SplitInternal(System.ReadOnlySpan<System.Char>, System.Int32, System.StringSplitOptions) */
inline static auto& m115_SplitInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[115]);
/* System.String[] System::String::Split(System.String[], System.StringSplitOptions) */
inline static auto& m116_Split = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[116]);
/* System.String[] System::String::SplitInternal(System.String, System.String[], System.Int32, System.StringSplitOptions) */
inline static auto& m117_SplitInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[117]);
/* System.String[] System::String::SplitInternal(System.String, System.Int32, System.StringSplitOptions) */
inline static auto& m118_SplitInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[118]);
/* System.String[] System::String::SplitKeepEmptyEntries(System.ReadOnlySpan<System.Int32>, System.ReadOnlySpan<System.Int32>, System.Int32, System.Int32) */
inline static auto& m119_SplitKeepEmptyEntries = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[119]);
/* System.String[] System::String::SplitOmitEmptyEntries(System.ReadOnlySpan<System.Int32>, System.ReadOnlySpan<System.Int32>, System.Int32, System.Int32) */
inline static auto& m120_SplitOmitEmptyEntries = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[120]);
/* System.Void System::String::MakeSeparatorList(System.ReadOnlySpan<System.Char>, System.Collections.Generic.ValueListBuilder<System.Int32>&) */
inline static auto& m121_MakeSeparatorList = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[121]);
/* System.Void System::String::MakeSeparatorList(System.String, System.Collections.Generic.ValueListBuilder<System.Int32>&) */
inline static auto& m122_MakeSeparatorList = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[122]);
/* System.Void System::String::MakeSeparatorList(System.String[], System.Collections.Generic.ValueListBuilder<System.Int32>&, System.Collections.Generic.ValueListBuilder<System.Int32>&) */
inline static auto& m123_MakeSeparatorList = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[123]);
/* System.String System::String::Substring(System.Int32) */
inline static auto& m124_Substring = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[124]);
/* System.String System::String::Substring(System.Int32, System.Int32) */
inline static auto& m125_Substring = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[125]);
/* System.String System::String::InternalSubString(System.Int32, System.Int32) */
inline static auto& m126_InternalSubString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[126]);
/* System.String System::String::ToLower() */
inline static auto& m127_ToLower = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[127]);
/* System.String System::String::ToLower(System.Globalization.CultureInfo) */
inline static auto& m128_ToLower = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[128]);
/* System.String System::String::ToLowerInvariant() */
inline static auto& m129_ToLowerInvariant = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[129]);
/* System.String System::String::ToUpper() */
inline static auto& m130_ToUpper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[130]);
/* System.String System::String::ToUpper(System.Globalization.CultureInfo) */
inline static auto& m131_ToUpper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[131]);
/* System.String System::String::ToUpperInvariant() */
inline static auto& m132_ToUpperInvariant = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[132]);
/* System.String System::String::Trim() */
inline static auto& m133_Trim = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[133]);
/* System.String System::String::Trim(System.Char) */
inline static auto& m134_Trim = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[134]);
/* System.String System::String::Trim(System.Char[]) */
inline static auto& m135_Trim = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[135]);
/* System.String System::String::TrimStart(System.Char) */
inline static auto& m136_TrimStart = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[136]);
/* System.String System::String::TrimStart(System.Char[]) */
inline static auto& m137_TrimStart = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[137]);
/* System.String System::String::TrimEnd() */
inline static auto& m138_TrimEnd = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[138]);
/* System.String System::String::TrimEnd(System.Char) */
inline static auto& m139_TrimEnd = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[139]);
/* System.String System::String::TrimEnd(System.Char[]) */
inline static auto& m140_TrimEnd = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[140]);
/* System.String System::String::TrimWhiteSpaceHelper(System.String.TrimType) */
inline static auto& m141_TrimWhiteSpaceHelper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[141]);
/* System.String System::String::TrimHelper(System.Char*, System.Int32, System.String.TrimType) */
inline static auto& m142_TrimHelper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[142]);
/* System.String System::String::CreateTrimmedString(System.Int32, System.Int32) */
inline static auto& m143_CreateTrimmedString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[143]);
/* System.Boolean System::String::Contains(System.String) */
inline static auto& m144_Contains = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[144]);
/* System.Boolean System::String::Contains(System.Char) */
inline static auto& m145_Contains = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[145]);
/* System.Int32 System::String::IndexOf(System.Char) */
inline static auto& m146_IndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[146]);
/* System.Int32 System::String::IndexOf(System.Char, System.Int32) */
inline static auto& m147_IndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[147]);
/* System.Int32 System::String::IndexOf(System.Char, System.Int32, System.Int32) */
inline static auto& m148_IndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[148]);
/* System.Int32 System::String::IndexOfAny(System.Char[]) */
inline static auto& m149_IndexOfAny = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[149]);
/* System.Int32 System::String::IndexOfAny(System.Char[], System.Int32) */
inline static auto& m150_IndexOfAny = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[150]);
/* System.Int32 System::String::IndexOfAny(System.Char[], System.Int32, System.Int32) */
inline static auto& m151_IndexOfAny = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[151]);
/* System.Int32 System::String::IndexOfAny(System.Char, System.Char, System.Int32, System.Int32) */
inline static auto& m152_IndexOfAny = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[152]);
/* System.Int32 System::String::IndexOfAny(System.Char, System.Char, System.Char, System.Int32, System.Int32) */
inline static auto& m153_IndexOfAny = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[153]);
/* System.Int32 System::String::IndexOfCharArray(System.Char[], System.Int32, System.Int32) */
inline static auto& m154_IndexOfCharArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[154]);
/* System.Void System::String::InitializeProbabilisticMap(System.UInt32*, System.ReadOnlySpan<System.Char>) */
inline static auto& m155_InitializeProbabilisticMap = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[155]);
/* System.Boolean System::String::ArrayContains(System.Char, System.Char[]) */
inline static auto& m156_ArrayContains = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[156]);
/* System.Boolean System::String::IsCharBitSet(System.UInt32*, System.Byte) */
inline static auto& m157_IsCharBitSet = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[157]);
/* System.Void System::String::SetCharBit(System.UInt32*, System.Byte) */
inline static auto& m158_SetCharBit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[158]);
/* System.Int32 System::String::IndexOf(System.String) */
inline static auto& m159_IndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[159]);
/* System.Int32 System::String::IndexOf(System.String, System.Int32) */
inline static auto& m160_IndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[160]);
/* System.Int32 System::String::IndexOf(System.String, System.StringComparison) */
inline static auto& m161_IndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[161]);
/* System.Int32 System::String::IndexOf(System.String, System.Int32, System.StringComparison) */
inline static auto& m162_IndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[162]);
/* System.Int32 System::String::IndexOf(System.String, System.Int32, System.Int32, System.StringComparison) */
inline static auto& m163_IndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[163]);
/* System.Int32 System::String::LastIndexOf(System.Char) */
inline static auto& m164_LastIndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[164]);
/* System.Int32 System::String::LastIndexOf(System.Char, System.Int32) */
inline static auto& m165_LastIndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[165]);
/* System.Int32 System::String::LastIndexOf(System.Char, System.Int32, System.Int32) */
inline static auto& m166_LastIndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[166]);
/* System.Int32 System::String::LastIndexOfAny(System.Char[]) */
inline static auto& m167_LastIndexOfAny = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[167]);
/* System.Int32 System::String::LastIndexOfAny(System.Char[], System.Int32) */
inline static auto& m168_LastIndexOfAny = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[168]);
/* System.Int32 System::String::LastIndexOfAny(System.Char[], System.Int32, System.Int32) */
inline static auto& m169_LastIndexOfAny = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[169]);
/* System.Int32 System::String::LastIndexOfCharArray(System.Char[], System.Int32, System.Int32) */
inline static auto& m170_LastIndexOfCharArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[170]);
/* System.Int32 System::String::LastIndexOf(System.String) */
inline static auto& m171_LastIndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[171]);
/* System.Int32 System::String::LastIndexOf(System.String, System.StringComparison) */
inline static auto& m172_LastIndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[172]);
/* System.Int32 System::String::LastIndexOf(System.String, System.Int32, System.Int32, System.StringComparison) */
inline static auto& m173_LastIndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[173]);
/* System.Int32 System::String::get_Length() */
inline static auto& m174_get_Length = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[174]);
/* System.Int32 System::String::IndexOfUnchecked(System.String, System.Int32, System.Int32) */
inline static auto& m175_IndexOfUnchecked = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[175]);
/* System.Int32 System::String::IndexOfUncheckedIgnoreCase(System.String, System.Int32, System.Int32) */
inline static auto& m176_IndexOfUncheckedIgnoreCase = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[176]);
/* System.Int32 System::String::LastIndexOfUnchecked(System.String, System.Int32, System.Int32) */
inline static auto& m177_LastIndexOfUnchecked = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[177]);
/* System.Int32 System::String::LastIndexOfUncheckedIgnoreCase(System.String, System.Int32, System.Int32) */
inline static auto& m178_LastIndexOfUncheckedIgnoreCase = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[178]);
/* System.Boolean System::String::StartsWithOrdinalUnchecked(System.String) */
inline static auto& m179_StartsWithOrdinalUnchecked = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[179]);
/* System.String System::String::FastAllocateString(System.Int32) */
inline static auto& m180_FastAllocateString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[180]);
/* System.Void System::String::memset(System.Byte*, System.Int32, System.Int32) */
inline static auto& m181_memset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[181]);
/* System.Void System::String::memcpy(System.Byte*, System.Byte*, System.Int32) */
inline static auto& m182_memcpy = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[182]);
/* System.Void System::String::bzero(System.Byte*, System.Int32) */
inline static auto& m183_bzero = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[183]);
/* System.Void System::String::bzero_aligned_1(System.Byte*, System.Int32) */
inline static auto& m184_bzero_aligned_1 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[184]);
/* System.Void System::String::bzero_aligned_2(System.Byte*, System.Int32) */
inline static auto& m185_bzero_aligned_2 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[185]);
/* System.Void System::String::bzero_aligned_4(System.Byte*, System.Int32) */
inline static auto& m186_bzero_aligned_4 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[186]);
/* System.Void System::String::bzero_aligned_8(System.Byte*, System.Int32) */
inline static auto& m187_bzero_aligned_8 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[187]);
/* System.Void System::String::memcpy_aligned_1(System.Byte*, System.Byte*, System.Int32) */
inline static auto& m188_memcpy_aligned_1 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[188]);
/* System.Void System::String::memcpy_aligned_2(System.Byte*, System.Byte*, System.Int32) */
inline static auto& m189_memcpy_aligned_2 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[189]);
/* System.Void System::String::memcpy_aligned_4(System.Byte*, System.Byte*, System.Int32) */
inline static auto& m190_memcpy_aligned_4 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[190]);
/* System.Void System::String::memcpy_aligned_8(System.Byte*, System.Byte*, System.Int32) */
inline static auto& m191_memcpy_aligned_8 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[191]);
/* System.String System::String::CreateString(System.SByte*, System.Int32, System.Int32) */
inline static auto& m192_CreateString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[192]);
/* System.String System::String::CreateString(System.Char*) */
inline static auto& m193_CreateString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[193]);
/* System.String System::String::CreateString(System.Char*, System.Int32, System.Int32) */
inline static auto& m194_CreateString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[194]);
/* System.String System::String::CreateString(System.Char[], System.Int32, System.Int32) */
inline static auto& m195_CreateString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[195]);
/* System.String System::String::CreateString(System.Char[]) */
inline static auto& m196_CreateString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[196]);
/* System.String System::String::CreateString(System.Char, System.Int32) */
inline static auto& m197_CreateString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[197]);
/* System.String System::String::CreateString(System.SByte*, System.Int32, System.Int32, System.Text.Encoding) */
inline static auto& m198_CreateString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[198]);
/* System.String System::String::CreateString(System.ReadOnlySpan<System.Char>) */
inline static auto& m199_CreateString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[199]);
/* System.Char System::String::get_Chars(System.Int32) */
inline static auto& m200_get_Chars = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[200]);

};

}