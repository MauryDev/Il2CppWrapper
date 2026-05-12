
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::Threading::Tasks {

struct Task_1 {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 22> methods;
    inline static std::array<Il2CppWrapper::Field*, 2> fields;  
    /* TResult System.Threading.Tasks::Task`1::m_result */
inline static auto& f_m_result = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* System.Threading.Tasks.TaskFactory<TResult> System.Threading.Tasks::Task`1::s_defaultFactory */
inline static auto& f_s_defaultFactory = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
  
    /* System.Void System.Threading.Tasks::Task`1::.ctor() */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void System.Threading.Tasks::Task`1::.ctor(System.Object, System.Threading.Tasks.TaskCreationOptions) */
inline static auto& m1__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void System.Threading.Tasks::Task`1::.ctor(TResult) */
inline static auto& m2__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void System.Threading.Tasks::Task`1::.ctor(System.Boolean, TResult, System.Threading.Tasks.TaskCreationOptions, System.Threading.CancellationToken) */
inline static auto& m3__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void System.Threading.Tasks::Task`1::.ctor(System.Func<System.Object,TResult>, System.Object, System.Threading.CancellationToken, System.Threading.Tasks.TaskCreationOptions) */
inline static auto& m4__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Void System.Threading.Tasks::Task`1::.ctor(System.Func<TResult>, System.Threading.Tasks.Task, System.Threading.CancellationToken, System.Threading.Tasks.TaskCreationOptions, System.Threading.Tasks.InternalTaskOptions, System.Threading.Tasks.TaskScheduler) */
inline static auto& m5__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Void System.Threading.Tasks::Task`1::.ctor(System.Delegate, System.Object, System.Threading.Tasks.Task, System.Threading.CancellationToken, System.Threading.Tasks.TaskCreationOptions, System.Threading.Tasks.InternalTaskOptions, System.Threading.Tasks.TaskScheduler) */
inline static auto& m6__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.Threading.Tasks.Task<TResult> System.Threading.Tasks::Task`1::StartNew(System.Threading.Tasks.Task, System.Func<TResult>, System.Threading.CancellationToken, System.Threading.Tasks.TaskCreationOptions, System.Threading.Tasks.InternalTaskOptions, System.Threading.Tasks.TaskScheduler) */
inline static auto& m7_StartNew = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Threading.Tasks.Task<TResult> System.Threading.Tasks::Task`1::StartNew(System.Threading.Tasks.Task, System.Func<System.Object,TResult>, System.Object, System.Threading.CancellationToken, System.Threading.Tasks.TaskCreationOptions, System.Threading.Tasks.InternalTaskOptions, System.Threading.Tasks.TaskScheduler) */
inline static auto& m8_StartNew = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);
/* System.Boolean System.Threading.Tasks::Task`1::TrySetResult(TResult) */
inline static auto& m9_TrySetResult = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.Void System.Threading.Tasks::Task`1::DangerousSetResult(TResult) */
inline static auto& m10_DangerousSetResult = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* TResult System.Threading.Tasks::Task`1::get_Result() */
inline static auto& m11_get_Result = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* TResult System.Threading.Tasks::Task`1::get_ResultOnSuccess() */
inline static auto& m12_get_ResultOnSuccess = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* TResult System.Threading.Tasks::Task`1::GetResultCore(System.Boolean) */
inline static auto& m13_GetResultCore = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* System.Threading.Tasks.TaskFactory<TResult> System.Threading.Tasks::Task`1::get_Factory() */
inline static auto& m14_get_Factory = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);
/* System.Void System.Threading.Tasks::Task`1::InnerInvoke() */
inline static auto& m15_InnerInvoke = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[15]);
/* System.Runtime.CompilerServices.TaskAwaiter<TResult> System.Threading.Tasks::Task`1::GetAwaiter() */
inline static auto& m16_GetAwaiter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* System.Runtime.CompilerServices.ConfiguredTaskAwaitable<TResult> System.Threading.Tasks::Task`1::ConfigureAwait(System.Boolean) */
inline static auto& m17_ConfigureAwait = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task`1::ContinueWith(System.Action<System.Threading.Tasks.Task<TResult>>, System.Threading.Tasks.TaskScheduler) */
inline static auto& m18_ContinueWith = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task`1::ContinueWith(System.Action<System.Threading.Tasks.Task<TResult>>, System.Threading.Tasks.TaskScheduler, System.Threading.CancellationToken, System.Threading.Tasks.TaskContinuationOptions) */
inline static auto& m19_ContinueWith = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.Threading.Tasks.Task<TNewResult> System.Threading.Tasks::Task`1::ContinueWith(System.Func<System.Threading.Tasks.Task<TResult>,TNewResult>, System.Threading.Tasks.TaskContinuationOptions) */
inline static auto& m20_ContinueWith = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.Threading.Tasks.Task<TNewResult> System.Threading.Tasks::Task`1::ContinueWith(System.Func<System.Threading.Tasks.Task<TResult>,TNewResult>, System.Threading.Tasks.TaskScheduler, System.Threading.CancellationToken, System.Threading.Tasks.TaskContinuationOptions) */
inline static auto& m21_ContinueWith = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);

};

}