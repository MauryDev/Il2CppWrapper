
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::Threading::Tasks {

struct Task {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 126> methods;
    inline static std::array<Il2CppWrapper::Field*, 22> fields;  
    /* System.Int32 System.Threading.Tasks::Task::s_taskIdCounter */
inline static auto& f_s_taskIdCounter = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.Int32 System.Threading.Tasks::Task::m_taskId */
inline static auto& f_m_taskId = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* System.Delegate System.Threading.Tasks::Task::m_action */
inline static auto& f_m_action = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[2]);
/* System.Object System.Threading.Tasks::Task::m_stateObject */
inline static auto& f_m_stateObject = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[3]);
/* System.Threading.Tasks.TaskScheduler System.Threading.Tasks::Task::m_taskScheduler */
inline static auto& f_m_taskScheduler = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[4]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task::m_parent */
inline static auto& f_m_parent = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[5]);
/* System.Int32 System.Threading.Tasks::Task::m_stateFlags */
inline static auto& f_m_stateFlags = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[6]);
/* System.Object System.Threading.Tasks::Task::m_continuationObject */
inline static auto& f_m_continuationObject = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[7]);
/* System.Object System.Threading.Tasks::Task::s_taskCompletionSentinel */
inline static auto& f_s_taskCompletionSentinel = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[8]);
/* System.Boolean System.Threading.Tasks::Task::s_asyncDebuggingEnabled */
inline static auto& f_s_asyncDebuggingEnabled = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[9]);
/* System.Threading.Tasks.Task.ContingentProperties System.Threading.Tasks::Task::m_contingentProperties */
inline static auto& f_m_contingentProperties = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[10]);
/* System.Action<System.Object> System.Threading.Tasks::Task::s_taskCancelCallback */
inline static auto& f_s_taskCancelCallback = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[11]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task::t_currentTask */
inline static auto& f_t_currentTask = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[12]);
/* System.Threading.Tasks.StackGuard System.Threading.Tasks::Task::t_stackGuard */
inline static auto& f_t_stackGuard = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[13]);
/* System.Func<System.Threading.Tasks.Task.ContingentProperties> System.Threading.Tasks::Task::s_createContingentProperties */
inline static auto& f_s_createContingentProperties = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[14]);
/* System.Threading.Tasks.TaskFactory System.Threading.Tasks::Task::<Factory>k__BackingField */
inline static auto& f__Factory_k__BackingField = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[15]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task::<CompletedTask>k__BackingField */
inline static auto& f__CompletedTask_k__BackingField = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[16]);
/* System.Predicate<System.Threading.Tasks.Task> System.Threading.Tasks::Task::s_IsExceptionObservedByParentPredicate */
inline static auto& f_s_IsExceptionObservedByParentPredicate = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[17]);
/* System.Threading.ContextCallback System.Threading.Tasks::Task::s_ecCallback */
inline static auto& f_s_ecCallback = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[18]);
/* System.Predicate<System.Object> System.Threading.Tasks::Task::s_IsTaskContinuationNullPredicate */
inline static auto& f_s_IsTaskContinuationNullPredicate = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[19]);
/* System.Collections.Generic.Dictionary<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks::Task::s_currentActiveTasks */
inline static auto& f_s_currentActiveTasks = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[20]);
/* System.Object System.Threading.Tasks::Task::s_activeTasksLock */
inline static auto& f_s_activeTasksLock = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[21]);
  
    /* System.Void System.Threading.Tasks::Task::.ctor(System.Boolean, System.Threading.Tasks.TaskCreationOptions, System.Threading.CancellationToken) */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void System.Threading.Tasks::Task::.ctor() */
inline static auto& m1__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void System.Threading.Tasks::Task::.ctor(System.Object, System.Threading.Tasks.TaskCreationOptions, System.Boolean) */
inline static auto& m2__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void System.Threading.Tasks::Task::.ctor(System.Delegate, System.Object, System.Threading.Tasks.Task, System.Threading.CancellationToken, System.Threading.Tasks.TaskCreationOptions, System.Threading.Tasks.InternalTaskOptions, System.Threading.Tasks.TaskScheduler) */
inline static auto& m3__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void System.Threading.Tasks::Task::TaskConstructorCore(System.Delegate, System.Object, System.Threading.CancellationToken, System.Threading.Tasks.TaskCreationOptions, System.Threading.Tasks.InternalTaskOptions, System.Threading.Tasks.TaskScheduler) */
inline static auto& m4_TaskConstructorCore = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Void System.Threading.Tasks::Task::AssignCancellationToken(System.Threading.CancellationToken, System.Threading.Tasks.Task, System.Threading.Tasks.TaskContinuation) */
inline static auto& m5_AssignCancellationToken = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Void System.Threading.Tasks::Task::TaskCancelCallback(System.Object) */
inline static auto& m6_TaskCancelCallback = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.Boolean System.Threading.Tasks::Task::TrySetCanceled(System.Threading.CancellationToken) */
inline static auto& m7_TrySetCanceled = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.Boolean System.Threading.Tasks::Task::TrySetCanceled(System.Threading.CancellationToken, System.Object) */
inline static auto& m8_TrySetCanceled = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Boolean System.Threading.Tasks::Task::TrySetException(System.Object) */
inline static auto& m9_TrySetException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks::Task::get_Options() */
inline static auto& m10_get_Options = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks::Task::OptionsMethod(System.Int32) */
inline static auto& m11_OptionsMethod = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* System.Boolean System.Threading.Tasks::Task::AtomicStateUpdate(System.Int32, System.Int32) */
inline static auto& m12_AtomicStateUpdate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.Boolean System.Threading.Tasks::Task::AtomicStateUpdate(System.Int32, System.Int32, System.Int32&) */
inline static auto& m13_AtomicStateUpdate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* System.Void System.Threading.Tasks::Task::SetNotificationForWaitCompletion(System.Boolean) */
inline static auto& m14_SetNotificationForWaitCompletion = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* System.Boolean System.Threading.Tasks::Task::NotifyDebuggerOfWaitCompletionIfNecessary() */
inline static auto& m15_NotifyDebuggerOfWaitCompletionIfNecessary = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* System.Boolean System.Threading.Tasks::Task::get_IsWaitNotificationEnabledOrNotRanToCompletion() */
inline static auto& m16_get_IsWaitNotificationEnabledOrNotRanToCompletion = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* System.Boolean System.Threading.Tasks::Task::get_ShouldNotifyDebuggerOfWaitCompletion() */
inline static auto& m17_get_ShouldNotifyDebuggerOfWaitCompletion = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[17]);
/* System.Boolean System.Threading.Tasks::Task::get_IsWaitNotificationEnabled() */
inline static auto& m18_get_IsWaitNotificationEnabled = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* System.Void System.Threading.Tasks::Task::NotifyDebuggerOfWaitCompletion() */
inline static auto& m19_NotifyDebuggerOfWaitCompletion = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.Boolean System.Threading.Tasks::Task::MarkStarted() */
inline static auto& m20_MarkStarted = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.Void System.Threading.Tasks::Task::AddNewChild() */
inline static auto& m21_AddNewChild = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* System.Void System.Threading.Tasks::Task::DisregardChild() */
inline static auto& m22_DisregardChild = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task::InternalStartNew(System.Threading.Tasks.Task, System.Delegate, System.Object, System.Threading.CancellationToken, System.Threading.Tasks.TaskScheduler, System.Threading.Tasks.TaskCreationOptions, System.Threading.Tasks.InternalTaskOptions) */
inline static auto& m23_InternalStartNew = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* System.Int32 System.Threading.Tasks::Task::get_Id() */
inline static auto& m24_get_Id = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[24]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task::get_InternalCurrent() */
inline static auto& m25_get_InternalCurrent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task::InternalCurrentIfAttached(System.Threading.Tasks.TaskCreationOptions) */
inline static auto& m26_InternalCurrentIfAttached = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* System.Threading.Tasks.StackGuard System.Threading.Tasks::Task::get_CurrentStackGuard() */
inline static auto& m27_get_CurrentStackGuard = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);
/* System.AggregateException System.Threading.Tasks::Task::get_Exception() */
inline static auto& m28_get_Exception = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[28]);
/* System.Threading.Tasks.TaskStatus System.Threading.Tasks::Task::get_Status() */
inline static auto& m29_get_Status = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[29]);
/* System.Boolean System.Threading.Tasks::Task::get_IsCanceled() */
inline static auto& m30_get_IsCanceled = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[30]);
/* System.Boolean System.Threading.Tasks::Task::get_IsCancellationRequested() */
inline static auto& m31_get_IsCancellationRequested = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[31]);
/* System.Threading.Tasks.Task.ContingentProperties System.Threading.Tasks::Task::EnsureContingentPropertiesInitialized(System.Boolean) */
inline static auto& m32_EnsureContingentPropertiesInitialized = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[32]);
/* System.Threading.Tasks.Task.ContingentProperties System.Threading.Tasks::Task::EnsureContingentPropertiesInitializedCore(System.Boolean) */
inline static auto& m33_EnsureContingentPropertiesInitializedCore = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[33]);
/* System.Threading.CancellationToken System.Threading.Tasks::Task::get_CancellationToken() */
inline static auto& m34_get_CancellationToken = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[34]);
/* System.Boolean System.Threading.Tasks::Task::get_IsCancellationAcknowledged() */
inline static auto& m35_get_IsCancellationAcknowledged = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[35]);
/* System.Boolean System.Threading.Tasks::Task::get_IsCompleted() */
inline static auto& m36_get_IsCompleted = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[36]);
/* System.Boolean System.Threading.Tasks::Task::IsCompletedMethod(System.Int32) */
inline static auto& m37_IsCompletedMethod = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[37]);
/* System.Boolean System.Threading.Tasks::Task::get_IsCompletedSuccessfully() */
inline static auto& m38_get_IsCompletedSuccessfully = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[38]);
/* System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks::Task::get_CreationOptions() */
inline static auto& m39_get_CreationOptions = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[39]);
/* System.Threading.WaitHandle System.Threading.Tasks::Task::System.IAsyncResult.get_AsyncWaitHandle() */
inline static auto& m40_System_IAsyncResult_get_AsyncWaitHandle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[40]);
/* System.Object System.Threading.Tasks::Task::get_AsyncState() */
inline static auto& m41_get_AsyncState = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[41]);
/* System.Boolean System.Threading.Tasks::Task::System.IAsyncResult.get_CompletedSynchronously() */
inline static auto& m42_System_IAsyncResult_get_CompletedSynchronously = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[42]);
/* System.Threading.Tasks.TaskScheduler System.Threading.Tasks::Task::get_ExecutingTaskScheduler() */
inline static auto& m43_get_ExecutingTaskScheduler = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[43]);
/* System.Threading.Tasks.TaskFactory System.Threading.Tasks::Task::get_Factory() */
inline static auto& m44_get_Factory = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[44]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task::get_CompletedTask() */
inline static auto& m45_get_CompletedTask = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[45]);
/* System.Threading.ManualResetEventSlim System.Threading.Tasks::Task::get_CompletedEvent() */
inline static auto& m46_get_CompletedEvent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[46]);
/* System.Boolean System.Threading.Tasks::Task::get_ExceptionRecorded() */
inline static auto& m47_get_ExceptionRecorded = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[47]);
/* System.Boolean System.Threading.Tasks::Task::get_IsFaulted() */
inline static auto& m48_get_IsFaulted = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[48]);
/* System.Threading.ExecutionContext System.Threading.Tasks::Task::get_CapturedContext() */
inline static auto& m49_get_CapturedContext = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[49]);
/* System.Void System.Threading.Tasks::Task::set_CapturedContext(System.Threading.ExecutionContext) */
inline static auto& m50_set_CapturedContext = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[50]);
/* System.Void System.Threading.Tasks::Task::Dispose() */
inline static auto& m51_Dispose = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[51]);
/* System.Void System.Threading.Tasks::Task::Dispose(System.Boolean) */
inline static auto& m52_Dispose = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[52]);
/* System.Void System.Threading.Tasks::Task::ScheduleAndStart(System.Boolean) */
inline static auto& m53_ScheduleAndStart = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[53]);
/* System.Void System.Threading.Tasks::Task::AddException(System.Object) */
inline static auto& m54_AddException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[54]);
/* System.Void System.Threading.Tasks::Task::AddException(System.Object, System.Boolean) */
inline static auto& m55_AddException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[55]);
/* System.AggregateException System.Threading.Tasks::Task::GetExceptions(System.Boolean) */
inline static auto& m56_GetExceptions = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[56]);
/* System.Collections.ObjectModel.ReadOnlyCollection<System.Runtime.ExceptionServices.ExceptionDispatchInfo> System.Threading.Tasks::Task::GetExceptionDispatchInfos() */
inline static auto& m57_GetExceptionDispatchInfos = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[57]);
/* System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Threading.Tasks::Task::GetCancellationExceptionDispatchInfo() */
inline static auto& m58_GetCancellationExceptionDispatchInfo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[58]);
/* System.Void System.Threading.Tasks::Task::ThrowIfExceptional(System.Boolean) */
inline static auto& m59_ThrowIfExceptional = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[59]);
/* System.Void System.Threading.Tasks::Task::UpdateExceptionObservedStatus() */
inline static auto& m60_UpdateExceptionObservedStatus = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[60]);
/* System.Boolean System.Threading.Tasks::Task::get_IsExceptionObservedByParent() */
inline static auto& m61_get_IsExceptionObservedByParent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[61]);
/* System.Boolean System.Threading.Tasks::Task::get_IsDelegateInvoked() */
inline static auto& m62_get_IsDelegateInvoked = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[62]);
/* System.Void System.Threading.Tasks::Task::Finish(System.Boolean) */
inline static auto& m63_Finish = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[63]);
/* System.Void System.Threading.Tasks::Task::FinishStageTwo() */
inline static auto& m64_FinishStageTwo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[64]);
/* System.Void System.Threading.Tasks::Task::FinishStageThree() */
inline static auto& m65_FinishStageThree = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[65]);
/* System.Void System.Threading.Tasks::Task::ProcessChildCompletion(System.Threading.Tasks.Task) */
inline static auto& m66_ProcessChildCompletion = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[66]);
/* System.Void System.Threading.Tasks::Task::AddExceptionsFromChildren() */
inline static auto& m67_AddExceptionsFromChildren = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[67]);
/* System.Void System.Threading.Tasks::Task::Execute() */
inline static auto& m68_Execute = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[68]);
/* System.Void System.Threading.Tasks::Task::System.Threading.IThreadPoolWorkItem.ExecuteWorkItem() */
inline static auto& m69_System_Threading_IThreadPoolWorkItem_ExecuteWorkItem = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[69]);
/* System.Boolean System.Threading.Tasks::Task::ExecuteEntry(System.Boolean) */
inline static auto& m70_ExecuteEntry = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[70]);
/* System.Void System.Threading.Tasks::Task::ExecutionContextCallback(System.Object) */
inline static auto& m71_ExecutionContextCallback = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[71]);
/* System.Void System.Threading.Tasks::Task::InnerInvoke() */
inline static auto& m72_InnerInvoke = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[72]);
/* System.Void System.Threading.Tasks::Task::HandleException(System.Exception) */
inline static auto& m73_HandleException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[73]);
/* System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks::Task::GetAwaiter() */
inline static auto& m74_GetAwaiter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[74]);
/* System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks::Task::ConfigureAwait(System.Boolean) */
inline static auto& m75_ConfigureAwait = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[75]);
/* System.Void System.Threading.Tasks::Task::SetContinuationForAwait(System.Action, System.Boolean, System.Boolean) */
inline static auto& m76_SetContinuationForAwait = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[76]);
/* System.Runtime.CompilerServices.YieldAwaitable System.Threading.Tasks::Task::Yield() */
inline static auto& m77_Yield = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[77]);
/* System.Void System.Threading.Tasks::Task::Wait() */
inline static auto& m78_Wait = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[78]);
/* System.Boolean System.Threading.Tasks::Task::Wait(System.Int32, System.Threading.CancellationToken) */
inline static auto& m79_Wait = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[79]);
/* System.Boolean System.Threading.Tasks::Task::WrappedTryRunInline() */
inline static auto& m80_WrappedTryRunInline = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[80]);
/* System.Boolean System.Threading.Tasks::Task::InternalWait(System.Int32, System.Threading.CancellationToken) */
inline static auto& m81_InternalWait = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[81]);
/* System.Boolean System.Threading.Tasks::Task::SpinThenBlockingWait(System.Int32, System.Threading.CancellationToken) */
inline static auto& m82_SpinThenBlockingWait = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[82]);
/* System.Boolean System.Threading.Tasks::Task::SpinWait(System.Int32) */
inline static auto& m83_SpinWait = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[83]);
/* System.Boolean System.Threading.Tasks::Task::InternalCancel(System.Boolean) */
inline static auto& m84_InternalCancel = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[84]);
/* System.Void System.Threading.Tasks::Task::RecordInternalCancellationRequest() */
inline static auto& m85_RecordInternalCancellationRequest = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[85]);
/* System.Void System.Threading.Tasks::Task::RecordInternalCancellationRequest(System.Threading.CancellationToken) */
inline static auto& m86_RecordInternalCancellationRequest = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[86]);
/* System.Void System.Threading.Tasks::Task::RecordInternalCancellationRequest(System.Threading.CancellationToken, System.Object) */
inline static auto& m87_RecordInternalCancellationRequest = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[87]);
/* System.Void System.Threading.Tasks::Task::CancellationCleanupLogic() */
inline static auto& m88_CancellationCleanupLogic = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[88]);
/* System.Void System.Threading.Tasks::Task::SetCancellationAcknowledged() */
inline static auto& m89_SetCancellationAcknowledged = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[89]);
/* System.Void System.Threading.Tasks::Task::FinishContinuations() */
inline static auto& m90_FinishContinuations = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[90]);
/* System.Void System.Threading.Tasks::Task::LogFinishCompletionNotification() */
inline static auto& m91_LogFinishCompletionNotification = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[91]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task::ContinueWith(System.Action<System.Threading.Tasks.Task>) */
inline static auto& m92_ContinueWith = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[92]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task::ContinueWith(System.Action<System.Threading.Tasks.Task>, System.Threading.Tasks.TaskScheduler, System.Threading.CancellationToken, System.Threading.Tasks.TaskContinuationOptions) */
inline static auto& m93_ContinueWith = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[93]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task::ContinueWith(System.Action<System.Threading.Tasks.Task,System.Object>, System.Object, System.Threading.CancellationToken, System.Threading.Tasks.TaskContinuationOptions, System.Threading.Tasks.TaskScheduler) */
inline static auto& m94_ContinueWith = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[94]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task::ContinueWith(System.Action<System.Threading.Tasks.Task,System.Object>, System.Object, System.Threading.Tasks.TaskScheduler, System.Threading.CancellationToken, System.Threading.Tasks.TaskContinuationOptions) */
inline static auto& m95_ContinueWith = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[95]);
/* System.Void System.Threading.Tasks::Task::CreationOptionsFromContinuationOptions(System.Threading.Tasks.TaskContinuationOptions, System.Threading.Tasks.TaskCreationOptions&, System.Threading.Tasks.InternalTaskOptions&) */
inline static auto& m96_CreationOptionsFromContinuationOptions = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[96]);
/* System.Void System.Threading.Tasks::Task::ContinueWithCore(System.Threading.Tasks.Task, System.Threading.Tasks.TaskScheduler, System.Threading.CancellationToken, System.Threading.Tasks.TaskContinuationOptions) */
inline static auto& m97_ContinueWithCore = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[97]);
/* System.Void System.Threading.Tasks::Task::AddCompletionAction(System.Threading.Tasks.ITaskCompletionAction) */
inline static auto& m98_AddCompletionAction = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[98]);
/* System.Void System.Threading.Tasks::Task::AddCompletionAction(System.Threading.Tasks.ITaskCompletionAction, System.Boolean) */
inline static auto& m99_AddCompletionAction = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[99]);
/* System.Boolean System.Threading.Tasks::Task::AddTaskContinuationComplex(System.Object, System.Boolean) */
inline static auto& m100_AddTaskContinuationComplex = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[100]);
/* System.Boolean System.Threading.Tasks::Task::AddTaskContinuation(System.Object, System.Boolean) */
inline static auto& m101_AddTaskContinuation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[101]);
/* System.Void System.Threading.Tasks::Task::RemoveContinuation(System.Object) */
inline static auto& m102_RemoveContinuation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[102]);
/* System.Threading.Tasks.Task<TResult> System.Threading.Tasks::Task::FromResult(TResult) */
inline static auto& m103_FromResult = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[103]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task::FromException(System.Exception) */
inline static auto& m104_FromException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[104]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task::FromException(System.Exception) */
inline static auto& m105_FromException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[105]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task::FromCancellation(System.Threading.CancellationToken) */
inline static auto& m106_FromCancellation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[106]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task::FromCanceled(System.Threading.CancellationToken) */
inline static auto& m107_FromCanceled = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[107]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task::FromCancellation(System.Threading.CancellationToken) */
inline static auto& m108_FromCancellation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[108]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task::FromCanceled(System.Threading.CancellationToken) */
inline static auto& m109_FromCanceled = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[109]);
/* System.Threading.Tasks.Task<TResult> System.Threading.Tasks::Task::FromCancellation(System.OperationCanceledException) */
inline static auto& m110_FromCancellation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[110]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task::Run(System.Action) */
inline static auto& m111_Run = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[111]);
/* System.Threading.Tasks.Task<TResult> System.Threading.Tasks::Task::Run(System.Func<TResult>) */
inline static auto& m112_Run = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[112]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task::Run(System.Func<System.Threading.Tasks.Task>) */
inline static auto& m113_Run = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[113]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task::Run(System.Func<System.Threading.Tasks.Task>, System.Threading.CancellationToken) */
inline static auto& m114_Run = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[114]);
/* System.Threading.Tasks.Task<TResult> System.Threading.Tasks::Task::Run(System.Func<System.Threading.Tasks.Task<TResult>>) */
inline static auto& m115_Run = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[115]);
/* System.Threading.Tasks.Task<TResult> System.Threading.Tasks::Task::Run(System.Func<System.Threading.Tasks.Task<TResult>>, System.Threading.CancellationToken) */
inline static auto& m116_Run = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[116]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task::Delay(System.Int32) */
inline static auto& m117_Delay = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[117]);
/* System.Threading.Tasks.Task System.Threading.Tasks::Task::Delay(System.Int32, System.Threading.CancellationToken) */
inline static auto& m118_Delay = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[118]);
/* System.Threading.Tasks.Task<System.Threading.Tasks.Task> System.Threading.Tasks::Task::WhenAny(System.Threading.Tasks.Task[]) */
inline static auto& m119_WhenAny = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[119]);
/* System.Threading.Tasks.Task<System.Threading.Tasks.Task> System.Threading.Tasks::Task::WhenAny(System.Collections.Generic.IEnumerable<System.Threading.Tasks.Task>) */
inline static auto& m120_WhenAny = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[120]);
/* System.Boolean System.Threading.Tasks::Task::AddToActiveTasks(System.Threading.Tasks.Task) */
inline static auto& m121_AddToActiveTasks = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[121]);
/* System.Void System.Threading.Tasks::Task::RemoveFromActiveTasks(System.Int32) */
inline static auto& m122_RemoveFromActiveTasks = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[122]);
/* System.Void System.Threading.Tasks::Task::MarkAborted(System.Threading.ThreadAbortException) */
inline static auto& m123_MarkAborted = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[123]);
/* System.Void System.Threading.Tasks::Task::ExecuteWithThreadLocal(System.Threading.Tasks.Task&) */
inline static auto& m124_ExecuteWithThreadLocal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[124]);
/* System.Void System.Threading.Tasks::Task::.cctor() */
inline static auto& m125__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[125]);

};

}