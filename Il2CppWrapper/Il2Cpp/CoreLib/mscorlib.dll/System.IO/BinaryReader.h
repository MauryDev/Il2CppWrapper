
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::IO {

struct BinaryReader {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 29> methods;
    inline static std::array<Il2CppWrapper::Field*, 10> fields;  
    /* System.IO.Stream System.IO::BinaryReader::m_stream */
inline static auto& f_m_stream = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* System.Byte[] System.IO::BinaryReader::m_buffer */
inline static auto& f_m_buffer = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* System.Text.Decoder System.IO::BinaryReader::m_decoder */
inline static auto& f_m_decoder = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[2]);
/* System.Byte[] System.IO::BinaryReader::m_charBytes */
inline static auto& f_m_charBytes = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[3]);
/* System.Char[] System.IO::BinaryReader::m_singleChar */
inline static auto& f_m_singleChar = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[4]);
/* System.Char[] System.IO::BinaryReader::m_charBuffer */
inline static auto& f_m_charBuffer = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[5]);
/* System.Int32 System.IO::BinaryReader::m_maxCharsSize */
inline static auto& f_m_maxCharsSize = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[6]);
/* System.Boolean System.IO::BinaryReader::m_2BytesPerChar */
inline static auto& f_m_2BytesPerChar = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[7]);
/* System.Boolean System.IO::BinaryReader::m_isMemoryStream */
inline static auto& f_m_isMemoryStream = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[8]);
/* System.Boolean System.IO::BinaryReader::m_leaveOpen */
inline static auto& f_m_leaveOpen = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[9]);
  
    /* System.Void System.IO::BinaryReader::.ctor(System.IO.Stream) */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void System.IO::BinaryReader::.ctor(System.IO.Stream, System.Text.Encoding) */
inline static auto& m1__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void System.IO::BinaryReader::.ctor(System.IO.Stream, System.Text.Encoding, System.Boolean) */
inline static auto& m2__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.IO.Stream System.IO::BinaryReader::get_BaseStream() */
inline static auto& m3_get_BaseStream = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* System.Void System.IO::BinaryReader::Close() */
inline static auto& m4_Close = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[4]);
/* System.Void System.IO::BinaryReader::Dispose(System.Boolean) */
inline static auto& m5_Dispose = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Void System.IO::BinaryReader::Dispose() */
inline static auto& m6_Dispose = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.Int32 System.IO::BinaryReader::Read() */
inline static auto& m7_Read = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);
/* System.Boolean System.IO::BinaryReader::ReadBoolean() */
inline static auto& m8_ReadBoolean = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[8]);
/* System.Byte System.IO::BinaryReader::ReadByte() */
inline static auto& m9_ReadByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);
/* System.SByte System.IO::BinaryReader::ReadSByte() */
inline static auto& m10_ReadSByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[10]);
/* System.Char System.IO::BinaryReader::ReadChar() */
inline static auto& m11_ReadChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[11]);
/* System.Int16 System.IO::BinaryReader::ReadInt16() */
inline static auto& m12_ReadInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[12]);
/* System.UInt16 System.IO::BinaryReader::ReadUInt16() */
inline static auto& m13_ReadUInt16 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[13]);
/* System.Int32 System.IO::BinaryReader::ReadInt32() */
inline static auto& m14_ReadInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[14]);
/* System.UInt32 System.IO::BinaryReader::ReadUInt32() */
inline static auto& m15_ReadUInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[15]);
/* System.Int64 System.IO::BinaryReader::ReadInt64() */
inline static auto& m16_ReadInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[16]);
/* System.UInt64 System.IO::BinaryReader::ReadUInt64() */
inline static auto& m17_ReadUInt64 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[17]);
/* System.Single System.IO::BinaryReader::ReadSingle() */
inline static auto& m18_ReadSingle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[18]);
/* System.Double System.IO::BinaryReader::ReadDouble() */
inline static auto& m19_ReadDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[19]);
/* System.Decimal System.IO::BinaryReader::ReadDecimal() */
inline static auto& m20_ReadDecimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[20]);
/* System.String System.IO::BinaryReader::ReadString() */
inline static auto& m21_ReadString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[21]);
/* System.Int32 System.IO::BinaryReader::InternalReadChars(System.Char[], System.Int32, System.Int32) */
inline static auto& m22_InternalReadChars = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* System.Int32 System.IO::BinaryReader::InternalReadOneChar() */
inline static auto& m23_InternalReadOneChar = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[23]);
/* System.Char[] System.IO::BinaryReader::ReadChars(System.Int32) */
inline static auto& m24_ReadChars = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[24]);
/* System.Int32 System.IO::BinaryReader::Read(System.Byte[], System.Int32, System.Int32) */
inline static auto& m25_Read = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[25]);
/* System.Byte[] System.IO::BinaryReader::ReadBytes(System.Int32) */
inline static auto& m26_ReadBytes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[26]);
/* System.Void System.IO::BinaryReader::FillBuffer(System.Int32) */
inline static auto& m27_FillBuffer = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[27]);
/* System.Int32 System.IO::BinaryReader::Read7BitEncodedInt() */
inline static auto& m28_Read7BitEncodedInt = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[28]);

};

}