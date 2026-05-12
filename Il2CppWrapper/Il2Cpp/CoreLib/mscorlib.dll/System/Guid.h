
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct Guid {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 37> methods;
    inline static std::array<Il2CppWrapper::Field*, 12> fields;  
    /* System.Guid System::Guid::Empty */
inline static auto& f_Empty = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.Int32 System::Guid::_a */
inline static auto& f__a = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* System.Int16 System::Guid::_b */
inline static auto& f__b = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[2]);
/* System.Int16 System::Guid::_c */
inline static auto& f__c = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[3]);
/* System.Byte System::Guid::_d */
inline static auto& f__d = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[4]);
/* System.Byte System::Guid::_e */
inline static auto& f__e = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[5]);
/* System.Byte System::Guid::_f */
inline static auto& f__f = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[6]);
/* System.Byte System::Guid::_g */
inline static auto& f__g = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[7]);
/* System.Byte System::Guid::_h */
inline static auto& f__h = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[8]);
/* System.Byte System::Guid::_i */
inline static auto& f__i = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[9]);
/* System.Byte System::Guid::_j */
inline static auto& f__j = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[10]);
/* System.Byte System::Guid::_k */
inline static auto& f__k = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[11]);
  
    /* System.Guid System::Guid::NewGuid() */
inline static auto& m0_NewGuid = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.Void System::Guid::.ctor(System.Byte[]) */
inline static auto& m1__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void System::Guid::.ctor(System.ReadOnlySpan<System.Byte>) */
inline static auto& m2__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void System::Guid::.ctor(System.Int32, System.Int16, System.Int16, System.Byte, System.Byte, System.Byte, System.Byte, System.Byte, System.Byte, System.Byte, System.Byte) */
inline static auto& m3__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void System::Guid::.ctor(System.String) */
inline static auto& m4__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Guid System::Guid::Parse(System.String) */
inline static auto& m5_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.Guid System::Guid::Parse(System.ReadOnlySpan<System.Char>) */
inline static auto& m6_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.Boolean System::Guid::TryParseExact(System.String, System.String, System.Guid&) */
inline static auto& m7_TryParseExact = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Boolean System::Guid::TryParseExact(System.ReadOnlySpan<System.Char>, System.ReadOnlySpan<System.Char>, System.Guid&) */
inline static auto& m8_TryParseExact = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);
/* System.Boolean System::Guid::TryParseGuid(System.ReadOnlySpan<System.Char>, System.Guid.GuidStyles, System.Guid.GuidResult&) */
inline static auto& m9_TryParseGuid = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* System.Boolean System::Guid::TryParseGuidWithHexPrefix(System.ReadOnlySpan<System.Char>, System.Guid.GuidResult&) */
inline static auto& m10_TryParseGuidWithHexPrefix = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);
/* System.Boolean System::Guid::TryParseGuidWithNoStyle(System.ReadOnlySpan<System.Char>, System.Guid.GuidResult&) */
inline static auto& m11_TryParseGuidWithNoStyle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* System.Boolean System::Guid::TryParseGuidWithDashes(System.ReadOnlySpan<System.Char>, System.Guid.GuidResult&) */
inline static auto& m12_TryParseGuidWithDashes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);
/* System.Boolean System::Guid::StringToShort(System.ReadOnlySpan<System.Char>, System.Int32, System.Int32, System.Int16&, System.Guid.GuidResult&) */
inline static auto& m13_StringToShort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.Boolean System::Guid::StringToShort(System.ReadOnlySpan<System.Char>, System.Int32&, System.Int32, System.Int32, System.Int16&, System.Guid.GuidResult&) */
inline static auto& m14_StringToShort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);
/* System.Boolean System::Guid::StringToInt(System.ReadOnlySpan<System.Char>, System.Int32, System.Int32, System.Int32&, System.Guid.GuidResult&) */
inline static auto& m15_StringToInt = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[15]);
/* System.Boolean System::Guid::StringToInt(System.ReadOnlySpan<System.Char>, System.Int32&, System.Int32, System.Int32, System.Int32&, System.Guid.GuidResult&) */
inline static auto& m16_StringToInt = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[16]);
/* System.Boolean System::Guid::StringToLong(System.ReadOnlySpan<System.Char>, System.Int32&, System.Int32, System.Int64&, System.Guid.GuidResult&) */
inline static auto& m17_StringToLong = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[17]);
/* System.ReadOnlySpan<System.Char> System::Guid::EatAllWhitespace(System.ReadOnlySpan<System.Char>) */
inline static auto& m18_EatAllWhitespace = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[18]);
/* System.Boolean System::Guid::IsHexPrefix(System.ReadOnlySpan<System.Char>, System.Int32) */
inline static auto& m19_IsHexPrefix = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[19]);
/* System.Void System::Guid::WriteByteHelper(System.Span<System.Byte>) */
inline static auto& m20_WriteByteHelper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.Byte[] System::Guid::ToByteArray() */
inline static auto& m21_ToByteArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* System.String System::Guid::ToString() */
inline static auto& m22_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[22]);
/* System.Int32 System::Guid::GetHashCode() */
inline static auto& m23_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[23]);
/* System.Boolean System::Guid::Equals(System.Object) */
inline static auto& m24_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[24]);
/* System.Boolean System::Guid::Equals(System.Guid) */
inline static auto& m25_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[25]);
/* System.Int32 System::Guid::GetResult(System.UInt32, System.UInt32) */
inline static auto& m26_GetResult = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[26]);
/* System.Int32 System::Guid::CompareTo(System.Object) */
inline static auto& m27_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[27]);
/* System.Int32 System::Guid::CompareTo(System.Guid) */
inline static auto& m28_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[28]);
/* System.Boolean System::Guid::op_Equality(System.Guid, System.Guid) */
inline static auto& m29_op_Equality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);
/* System.String System::Guid::ToString(System.String) */
inline static auto& m30_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[30]);
/* System.Char System::Guid::HexToChar(System.Int32) */
inline static auto& m31_HexToChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[31]);
/* System.Int32 System::Guid::HexsToChars(System.Char*, System.Int32, System.Int32) */
inline static auto& m32_HexsToChars = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[32]);
/* System.Int32 System::Guid::HexsToCharsHexOutput(System.Char*, System.Int32, System.Int32) */
inline static auto& m33_HexsToCharsHexOutput = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[33]);
/* System.String System::Guid::ToString(System.String, System.IFormatProvider) */
inline static auto& m34_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[34]);
/* System.Boolean System::Guid::TryFormat(System.Span<System.Char>, System.Int32&, System.ReadOnlySpan<System.Char>) */
inline static auto& m35_TryFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[35]);
/* System.Boolean System::Guid::System.ISpanFormattable.TryFormat(System.Span<System.Char>, System.Int32&, System.ReadOnlySpan<System.Char>, System.IFormatProvider) */
inline static auto& m36_System_ISpanFormattable_TryFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[36]);

};

}