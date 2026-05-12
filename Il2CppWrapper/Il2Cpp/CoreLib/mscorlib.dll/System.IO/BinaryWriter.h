
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::IO {

struct BinaryWriter {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 23> methods;
    inline static std::array<Il2CppWrapper::Field*, 8> fields;  
    /* System.IO.BinaryWriter System.IO::BinaryWriter::Null */
inline static auto& f_Null = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.IO.Stream System.IO::BinaryWriter::OutStream */
inline static auto& f_OutStream = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* System.Byte[] System.IO::BinaryWriter::_buffer */
inline static auto& f__buffer = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[2]);
/* System.Text.Encoding System.IO::BinaryWriter::_encoding */
inline static auto& f__encoding = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[3]);
/* System.Text.Encoder System.IO::BinaryWriter::_encoder */
inline static auto& f__encoder = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[4]);
/* System.Boolean System.IO::BinaryWriter::_leaveOpen */
inline static auto& f__leaveOpen = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[5]);
/* System.Byte[] System.IO::BinaryWriter::_largeByteBuffer */
inline static auto& f__largeByteBuffer = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[6]);
/* System.Int32 System.IO::BinaryWriter::_maxChars */
inline static auto& f__maxChars = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[7]);
  
    /* System.Void System.IO::BinaryWriter::.ctor() */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void System.IO::BinaryWriter::.ctor(System.IO.Stream, System.Text.Encoding) */
inline static auto& m1__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void System.IO::BinaryWriter::.ctor(System.IO.Stream, System.Text.Encoding, System.Boolean) */
inline static auto& m2__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void System.IO::BinaryWriter::Dispose(System.Boolean) */
inline static auto& m3_Dispose = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* System.Void System.IO::BinaryWriter::Dispose() */
inline static auto& m4_Dispose = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[4]);
/* System.Void System.IO::BinaryWriter::Flush() */
inline static auto& m5_Flush = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Void System.IO::BinaryWriter::Write(System.Boolean) */
inline static auto& m6_Write = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.Void System.IO::BinaryWriter::Write(System.Byte) */
inline static auto& m7_Write = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);
/* System.Void System.IO::BinaryWriter::Write(System.Byte[]) */
inline static auto& m8_Write = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[8]);
/* System.Void System.IO::BinaryWriter::Write(System.Byte[], System.Int32, System.Int32) */
inline static auto& m9_Write = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);
/* System.Void System.IO::BinaryWriter::Write(System.Char) */
inline static auto& m10_Write = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[10]);
/* System.Void System.IO::BinaryWriter::Write(System.Char[]) */
inline static auto& m11_Write = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[11]);
/* System.Void System.IO::BinaryWriter::Write(System.Double) */
inline static auto& m12_Write = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[12]);
/* System.Void System.IO::BinaryWriter::Write(System.Int16) */
inline static auto& m13_Write = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[13]);
/* System.Void System.IO::BinaryWriter::Write(System.UInt16) */
inline static auto& m14_Write = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[14]);
/* System.Void System.IO::BinaryWriter::Write(System.Int32) */
inline static auto& m15_Write = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[15]);
/* System.Void System.IO::BinaryWriter::Write(System.UInt32) */
inline static auto& m16_Write = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[16]);
/* System.Void System.IO::BinaryWriter::Write(System.Int64) */
inline static auto& m17_Write = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[17]);
/* System.Void System.IO::BinaryWriter::Write(System.UInt64) */
inline static auto& m18_Write = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[18]);
/* System.Void System.IO::BinaryWriter::Write(System.Single) */
inline static auto& m19_Write = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[19]);
/* System.Void System.IO::BinaryWriter::Write(System.String) */
inline static auto& m20_Write = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[20]);
/* System.Void System.IO::BinaryWriter::Write7BitEncodedInt(System.Int32) */
inline static auto& m21_Write7BitEncodedInt = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* System.Void System.IO::BinaryWriter::.cctor() */
inline static auto& m22__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[22]);

};

}