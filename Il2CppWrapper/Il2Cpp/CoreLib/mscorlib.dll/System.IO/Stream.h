
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::IO {

struct Stream {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 50> methods;
    inline static std::array<Il2CppWrapper::Field*, 3> fields;  
    /* System.IO.Stream System.IO::Stream::Null */
inline static auto& f_Null = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.IO.Stream.ReadWriteTask System.IO::Stream::_activeReadWriteTask */
inline static auto& f__activeReadWriteTask = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* System.Threading.SemaphoreSlim System.IO::Stream::_asyncActiveSemaphore */
inline static auto& f__asyncActiveSemaphore = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[2]);
  
    /* System.Threading.SemaphoreSlim System.IO::Stream::EnsureAsyncActiveSemaphoreInitialized() */
inline static auto& m0_EnsureAsyncActiveSemaphoreInitialized = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Boolean System.IO::Stream::get_CanRead() */
inline static auto& m1_get_CanRead = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[1]);
/* System.Boolean System.IO::Stream::get_CanSeek() */
inline static auto& m2_get_CanSeek = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[2]);
/* System.Boolean System.IO::Stream::get_CanTimeout() */
inline static auto& m3_get_CanTimeout = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* System.Boolean System.IO::Stream::get_CanWrite() */
inline static auto& m4_get_CanWrite = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[4]);
/* System.Int64 System.IO::Stream::get_Length() */
inline static auto& m5_get_Length = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Int64 System.IO::Stream::get_Position() */
inline static auto& m6_get_Position = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.Void System.IO::Stream::set_Position(System.Int64) */
inline static auto& m7_set_Position = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);
/* System.Int32 System.IO::Stream::get_ReadTimeout() */
inline static auto& m8_get_ReadTimeout = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[8]);
/* System.Void System.IO::Stream::set_ReadTimeout(System.Int32) */
inline static auto& m9_set_ReadTimeout = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);
/* System.Int32 System.IO::Stream::get_WriteTimeout() */
inline static auto& m10_get_WriteTimeout = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[10]);
/* System.Void System.IO::Stream::set_WriteTimeout(System.Int32) */
inline static auto& m11_set_WriteTimeout = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[11]);
/* System.Void System.IO::Stream::Close() */
inline static auto& m12_Close = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[12]);
/* System.Void System.IO::Stream::Dispose() */
inline static auto& m13_Dispose = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[13]);
/* System.Void System.IO::Stream::Dispose(System.Boolean) */
inline static auto& m14_Dispose = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[14]);
/* System.Void System.IO::Stream::Flush() */
inline static auto& m15_Flush = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[15]);
/* System.IAsyncResult System.IO::Stream::BeginRead(System.Byte[], System.Int32, System.Int32, System.AsyncCallback, System.Object) */
inline static auto& m16_BeginRead = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[16]);
/* System.IAsyncResult System.IO::Stream::BeginReadInternal(System.Byte[], System.Int32, System.Int32, System.AsyncCallback, System.Object, System.Boolean, System.Boolean) */
inline static auto& m17_BeginReadInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.Int32 System.IO::Stream::EndRead(System.IAsyncResult) */
inline static auto& m18_EndRead = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[18]);
/* System.Threading.Tasks.Task<System.Int32> System.IO::Stream::ReadAsync(System.Byte[], System.Int32, System.Int32) */
inline static auto& m19_ReadAsync = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.Threading.Tasks.Task<System.Int32> System.IO::Stream::ReadAsync(System.Byte[], System.Int32, System.Int32, System.Threading.CancellationToken) */
inline static auto& m20_ReadAsync = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[20]);
/* System.Threading.Tasks.ValueTask<System.Int32> System.IO::Stream::ReadAsync(System.Memory<System.Byte>, System.Threading.CancellationToken) */
inline static auto& m21_ReadAsync = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[21]);
/* System.Threading.Tasks.Task<System.Int32> System.IO::Stream::BeginEndReadAsync(System.Byte[], System.Int32, System.Int32) */
inline static auto& m22_BeginEndReadAsync = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* System.IAsyncResult System.IO::Stream::BeginWrite(System.Byte[], System.Int32, System.Int32, System.AsyncCallback, System.Object) */
inline static auto& m23_BeginWrite = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[23]);
/* System.IAsyncResult System.IO::Stream::BeginWriteInternal(System.Byte[], System.Int32, System.Int32, System.AsyncCallback, System.Object, System.Boolean, System.Boolean) */
inline static auto& m24_BeginWriteInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[24]);
/* System.Void System.IO::Stream::RunReadWriteTaskWhenReady(System.Threading.Tasks.Task, System.IO.Stream.ReadWriteTask) */
inline static auto& m25_RunReadWriteTaskWhenReady = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[25]);
/* System.Void System.IO::Stream::RunReadWriteTask(System.IO.Stream.ReadWriteTask) */
inline static auto& m26_RunReadWriteTask = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[26]);
/* System.Void System.IO::Stream::FinishTrackingAsyncOperation() */
inline static auto& m27_FinishTrackingAsyncOperation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[27]);
/* System.Void System.IO::Stream::EndWrite(System.IAsyncResult) */
inline static auto& m28_EndWrite = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[28]);
/* System.Threading.Tasks.Task System.IO::Stream::WriteAsync(System.Byte[], System.Int32, System.Int32) */
inline static auto& m29_WriteAsync = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[29]);
/* System.Threading.Tasks.Task System.IO::Stream::WriteAsync(System.Byte[], System.Int32, System.Int32, System.Threading.CancellationToken) */
inline static auto& m30_WriteAsync = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[30]);
/* System.Threading.Tasks.ValueTask System.IO::Stream::WriteAsync(System.ReadOnlyMemory<System.Byte>, System.Threading.CancellationToken) */
inline static auto& m31_WriteAsync = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[31]);
/* System.Threading.Tasks.Task System.IO::Stream::FinishWriteAsync(System.Threading.Tasks.Task, System.Byte[]) */
inline static auto& m32_FinishWriteAsync = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[32]);
/* System.Threading.Tasks.Task System.IO::Stream::BeginEndWriteAsync(System.Byte[], System.Int32, System.Int32) */
inline static auto& m33_BeginEndWriteAsync = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[33]);
/* System.Int64 System.IO::Stream::Seek(System.Int64, System.IO.SeekOrigin) */
inline static auto& m34_Seek = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[34]);
/* System.Int32 System.IO::Stream::Read(System.Byte[], System.Int32, System.Int32) */
inline static auto& m35_Read = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[35]);
/* System.Int32 System.IO::Stream::Read(System.Span<System.Byte>) */
inline static auto& m36_Read = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[36]);
/* System.Int32 System.IO::Stream::ReadByte() */
inline static auto& m37_ReadByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[37]);
/* System.Void System.IO::Stream::Write(System.Byte[], System.Int32, System.Int32) */
inline static auto& m38_Write = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[38]);
/* System.Void System.IO::Stream::Write(System.ReadOnlySpan<System.Byte>) */
inline static auto& m39_Write = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[39]);
/* System.Void System.IO::Stream::WriteByte(System.Byte) */
inline static auto& m40_WriteByte = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[40]);
/* System.IAsyncResult System.IO::Stream::BlockingBeginRead(System.Byte[], System.Int32, System.Int32, System.AsyncCallback, System.Object) */
inline static auto& m41_BlockingBeginRead = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[41]);
/* System.Int32 System.IO::Stream::BlockingEndRead(System.IAsyncResult) */
inline static auto& m42_BlockingEndRead = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[42]);
/* System.IAsyncResult System.IO::Stream::BlockingBeginWrite(System.Byte[], System.Int32, System.Int32, System.AsyncCallback, System.Object) */
inline static auto& m43_BlockingBeginWrite = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[43]);
/* System.Void System.IO::Stream::BlockingEndWrite(System.IAsyncResult) */
inline static auto& m44_BlockingEndWrite = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[44]);
/* System.Boolean System.IO::Stream::HasOverriddenBeginEndRead() */
inline static auto& m45_HasOverriddenBeginEndRead = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[45]);
/* System.Boolean System.IO::Stream::HasOverriddenBeginEndWrite() */
inline static auto& m46_HasOverriddenBeginEndWrite = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[46]);
/* System.Void System.IO::Stream::.ctor() */
inline static auto& m47__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[47]);
/* System.Void System.IO::Stream::.cctor() */
inline static auto& m48__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[48]);
/* System.Threading.Tasks.ValueTask<System.Int32> System.IO::Stream::<ReadAsync>g__FinishReadAsync|44_0(System.Threading.Tasks.Task<System.Int32>, System.Byte[], System.Memory<System.Byte>) */
inline static auto& m49__ReadAsync_g__FinishReadAsync_44_0 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[49]);

};

}