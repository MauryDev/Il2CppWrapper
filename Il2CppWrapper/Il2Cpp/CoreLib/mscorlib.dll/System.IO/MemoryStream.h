
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::IO {

struct MemoryStream {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 36> methods;
    inline static std::array<Il2CppWrapper::Field*, 10> fields;  
    /* System.Byte[] System.IO::MemoryStream::_buffer */
inline static auto& f__buffer = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* System.Int32 System.IO::MemoryStream::_origin */
inline static auto& f__origin = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* System.Int32 System.IO::MemoryStream::_position */
inline static auto& f__position = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[2]);
/* System.Int32 System.IO::MemoryStream::_length */
inline static auto& f__length = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[3]);
/* System.Int32 System.IO::MemoryStream::_capacity */
inline static auto& f__capacity = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[4]);
/* System.Boolean System.IO::MemoryStream::_expandable */
inline static auto& f__expandable = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[5]);
/* System.Boolean System.IO::MemoryStream::_writable */
inline static auto& f__writable = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[6]);
/* System.Boolean System.IO::MemoryStream::_exposable */
inline static auto& f__exposable = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[7]);
/* System.Boolean System.IO::MemoryStream::_isOpen */
inline static auto& f__isOpen = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[8]);
/* System.Threading.Tasks.Task<System.Int32> System.IO::MemoryStream::_lastReadTask */
inline static auto& f__lastReadTask = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[9]);
  
    /* System.Void System.IO::MemoryStream::.ctor() */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void System.IO::MemoryStream::.ctor(System.Int32) */
inline static auto& m1__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void System.IO::MemoryStream::.ctor(System.Byte[]) */
inline static auto& m2__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void System.IO::MemoryStream::.ctor(System.Byte[], System.Boolean) */
inline static auto& m3__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void System.IO::MemoryStream::.ctor(System.Byte[], System.Int32, System.Int32) */
inline static auto& m4__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Void System.IO::MemoryStream::.ctor(System.Byte[], System.Int32, System.Int32, System.Boolean, System.Boolean) */
inline static auto& m5__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Boolean System.IO::MemoryStream::get_CanRead() */
inline static auto& m6_get_CanRead = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.Boolean System.IO::MemoryStream::get_CanSeek() */
inline static auto& m7_get_CanSeek = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);
/* System.Boolean System.IO::MemoryStream::get_CanWrite() */
inline static auto& m8_get_CanWrite = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[8]);
/* System.Void System.IO::MemoryStream::EnsureNotClosed() */
inline static auto& m9_EnsureNotClosed = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.Void System.IO::MemoryStream::EnsureWriteable() */
inline static auto& m10_EnsureWriteable = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Void System.IO::MemoryStream::Dispose(System.Boolean) */
inline static auto& m11_Dispose = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[11]);
/* System.Boolean System.IO::MemoryStream::EnsureCapacity(System.Int32) */
inline static auto& m12_EnsureCapacity = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.Void System.IO::MemoryStream::Flush() */
inline static auto& m13_Flush = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[13]);
/* System.Byte[] System.IO::MemoryStream::GetBuffer() */
inline static auto& m14_GetBuffer = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[14]);
/* System.Byte[] System.IO::MemoryStream::InternalGetBuffer() */
inline static auto& m15_InternalGetBuffer = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* System.Int32 System.IO::MemoryStream::InternalGetPosition() */
inline static auto& m16_InternalGetPosition = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* System.Int32 System.IO::MemoryStream::InternalReadInt32() */
inline static auto& m17_InternalReadInt32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.Int32 System.IO::MemoryStream::InternalEmulateRead(System.Int32) */
inline static auto& m18_InternalEmulateRead = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* System.Int32 System.IO::MemoryStream::get_Capacity() */
inline static auto& m19_get_Capacity = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[19]);
/* System.Void System.IO::MemoryStream::set_Capacity(System.Int32) */
inline static auto& m20_set_Capacity = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[20]);
/* System.Int64 System.IO::MemoryStream::get_Length() */
inline static auto& m21_get_Length = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[21]);
/* System.Int64 System.IO::MemoryStream::get_Position() */
inline static auto& m22_get_Position = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[22]);
/* System.Void System.IO::MemoryStream::set_Position(System.Int64) */
inline static auto& m23_set_Position = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[23]);
/* System.Int32 System.IO::MemoryStream::Read(System.Byte[], System.Int32, System.Int32) */
inline static auto& m24_Read = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[24]);
/* System.Int32 System.IO::MemoryStream::Read(System.Span<System.Byte>) */
inline static auto& m25_Read = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[25]);
/* System.Threading.Tasks.Task<System.Int32> System.IO::MemoryStream::ReadAsync(System.Byte[], System.Int32, System.Int32, System.Threading.CancellationToken) */
inline static auto& m26_ReadAsync = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[26]);
/* System.Threading.Tasks.ValueTask<System.Int32> System.IO::MemoryStream::ReadAsync(System.Memory<System.Byte>, System.Threading.CancellationToken) */
inline static auto& m27_ReadAsync = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[27]);
/* System.Int32 System.IO::MemoryStream::ReadByte() */
inline static auto& m28_ReadByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[28]);
/* System.Int64 System.IO::MemoryStream::Seek(System.Int64, System.IO.SeekOrigin) */
inline static auto& m29_Seek = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[29]);
/* System.Byte[] System.IO::MemoryStream::ToArray() */
inline static auto& m30_ToArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[30]);
/* System.Void System.IO::MemoryStream::Write(System.Byte[], System.Int32, System.Int32) */
inline static auto& m31_Write = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[31]);
/* System.Void System.IO::MemoryStream::Write(System.ReadOnlySpan<System.Byte>) */
inline static auto& m32_Write = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[32]);
/* System.Threading.Tasks.Task System.IO::MemoryStream::WriteAsync(System.Byte[], System.Int32, System.Int32, System.Threading.CancellationToken) */
inline static auto& m33_WriteAsync = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[33]);
/* System.Threading.Tasks.ValueTask System.IO::MemoryStream::WriteAsync(System.ReadOnlyMemory<System.Byte>, System.Threading.CancellationToken) */
inline static auto& m34_WriteAsync = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[34]);
/* System.Void System.IO::MemoryStream::WriteByte(System.Byte) */
inline static auto& m35_WriteByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[35]);

};

}