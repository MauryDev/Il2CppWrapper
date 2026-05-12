
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::Threading {

struct Thread {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 51> methods;
    inline static std::array<Il2CppWrapper::Field*, 15> fields;  
    /* System.LocalDataStoreMgr System.Threading::Thread::s_LocalDataStoreMgr */
inline static auto& f_s_LocalDataStoreMgr = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.LocalDataStoreHolder System.Threading::Thread::s_LocalDataStore */
inline static auto& f_s_LocalDataStore = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
/* System.Globalization.CultureInfo System.Threading::Thread::m_CurrentCulture */
inline static auto& f_m_CurrentCulture = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[2]);
/* System.Globalization.CultureInfo System.Threading::Thread::m_CurrentUICulture */
inline static auto& f_m_CurrentUICulture = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[3]);
/* System.Threading.AsyncLocal<System.Globalization.CultureInfo> System.Threading::Thread::s_asyncLocalCurrentCulture */
inline static auto& f_s_asyncLocalCurrentCulture = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[4]);
/* System.Threading.AsyncLocal<System.Globalization.CultureInfo> System.Threading::Thread::s_asyncLocalCurrentUICulture */
inline static auto& f_s_asyncLocalCurrentUICulture = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[5]);
/* System.Threading.InternalThread System.Threading::Thread::internal_thread */
inline static auto& f_internal_thread = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[6]);
/* System.Object System.Threading::Thread::m_ThreadStartArg */
inline static auto& f_m_ThreadStartArg = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[7]);
/* System.Object System.Threading::Thread::pending_exception */
inline static auto& f_pending_exception = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[8]);
/* System.Threading.Thread System.Threading::Thread::current_thread */
inline static auto& f_current_thread = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[9]);
/* System.MulticastDelegate System.Threading::Thread::m_Delegate */
inline static auto& f_m_Delegate = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[10]);
/* System.Threading.ExecutionContext System.Threading::Thread::m_ExecutionContext */
inline static auto& f_m_ExecutionContext = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[11]);
/* System.Boolean System.Threading::Thread::m_ExecutionContextBelongsToOuterScope */
inline static auto& f_m_ExecutionContextBelongsToOuterScope = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[12]);
/* System.Security.Principal.IPrincipal System.Threading::Thread::principal */
inline static auto& f_principal = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[13]);
/* System.Int32 System.Threading::Thread::principal_version */
inline static auto& f_principal_version = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[14]);
  
    /* System.Void System.Threading::Thread::.ctor(System.Threading.ThreadStart) */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void System.Threading::Thread::.ctor(System.Threading.ParameterizedThreadStart, System.Int32) */
inline static auto& m1__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void System.Threading::Thread::Start() */
inline static auto& m2_Start = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void System.Threading::Thread::Start(System.Object) */
inline static auto& m3_Start = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void System.Threading::Thread::Start(System.Threading.StackCrawlMark&) */
inline static auto& m4_Start = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Threading.ExecutionContext.Reader System.Threading::Thread::GetExecutionContextReader() */
inline static auto& m5_GetExecutionContextReader = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Boolean System.Threading::Thread::get_ExecutionContextBelongsToCurrentScope() */
inline static auto& m6_get_ExecutionContextBelongsToCurrentScope = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.Void System.Threading::Thread::set_ExecutionContextBelongsToCurrentScope(System.Boolean) */
inline static auto& m7_set_ExecutionContextBelongsToCurrentScope = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.Threading.ExecutionContext System.Threading::Thread::GetMutableExecutionContext() */
inline static auto& m8_GetMutableExecutionContext = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Void System.Threading::Thread::SetExecutionContext(System.Threading.ExecutionContext, System.Boolean) */
inline static auto& m9_SetExecutionContext = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.Void System.Threading::Thread::SetExecutionContext(System.Threading.ExecutionContext.Reader, System.Boolean) */
inline static auto& m10_SetExecutionContext = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Void System.Threading::Thread::SleepInternal(System.Int32) */
inline static auto& m11_SleepInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* System.Void System.Threading::Thread::Sleep(System.Int32) */
inline static auto& m12_Sleep = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);
/* System.Boolean System.Threading::Thread::YieldInternal() */
inline static auto& m13_YieldInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.Boolean System.Threading::Thread::Yield() */
inline static auto& m14_Yield = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);
/* System.Void System.Threading::Thread::SetStartHelper(System.Delegate, System.Int32) */
inline static auto& m15_SetStartHelper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* System.Globalization.CultureInfo System.Threading::Thread::get_CurrentUICulture() */
inline static auto& m16_get_CurrentUICulture = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* System.Globalization.CultureInfo System.Threading::Thread::GetCurrentUICultureNoAppX() */
inline static auto& m17_GetCurrentUICultureNoAppX = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.Globalization.CultureInfo System.Threading::Thread::get_CurrentCulture() */
inline static auto& m18_get_CurrentCulture = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* System.Globalization.CultureInfo System.Threading::Thread::GetCurrentCultureNoAppX() */
inline static auto& m19_GetCurrentCultureNoAppX = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.Void System.Threading::Thread::MemoryBarrier() */
inline static auto& m20_MemoryBarrier = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[20]);
/* System.Void System.Threading::Thread::ConstructInternalThread() */
inline static auto& m21_ConstructInternalThread = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* System.Threading.InternalThread System.Threading::Thread::get_Internal() */
inline static auto& m22_get_Internal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* System.Runtime.Remoting.Contexts.Context System.Threading::Thread::get_CurrentContext() */
inline static auto& m23_get_CurrentContext = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* System.Void System.Threading::Thread::GetCurrentThread_icall(System.Threading.Thread&) */
inline static auto& m24_GetCurrentThread_icall = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* System.Threading.Thread System.Threading::Thread::GetCurrentThread() */
inline static auto& m25_GetCurrentThread = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* System.Threading.Thread System.Threading::Thread::get_CurrentThread() */
inline static auto& m26_get_CurrentThread = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* System.Int32 System.Threading::Thread::get_CurrentThreadId() */
inline static auto& m27_get_CurrentThreadId = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);
/* System.Int32 System.Threading::Thread::GetDomainID() */
inline static auto& m28_GetDomainID = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[28]);
/* System.Boolean System.Threading::Thread::Thread_internal(System.MulticastDelegate) */
inline static auto& m29_Thread_internal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[29]);
/* System.Void System.Threading::Thread::Finalize() */
inline static auto& m30_Finalize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[30]);
/* System.Boolean System.Threading::Thread::get_IsThreadPoolThread() */
inline static auto& m31_get_IsThreadPoolThread = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[31]);
/* System.Boolean System.Threading::Thread::get_IsThreadPoolThreadInternal() */
inline static auto& m32_get_IsThreadPoolThreadInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[32]);
/* System.Void System.Threading::Thread::set_IsBackground(System.Boolean) */
inline static auto& m33_set_IsBackground = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[33]);
/* System.Void System.Threading::Thread::SetName_icall(System.Threading.InternalThread, System.Char*, System.Int32) */
inline static auto& m34_SetName_icall = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[34]);
/* System.Void System.Threading::Thread::SetName_internal(System.Threading.InternalThread, System.String) */
inline static auto& m35_SetName_internal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[35]);
/* System.Void System.Threading::Thread::set_Name(System.String) */
inline static auto& m36_set_Name = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[36]);
/* System.Void System.Threading::Thread::SpinWait_nop() */
inline static auto& m37_SpinWait_nop = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[37]);
/* System.Void System.Threading::Thread::SpinWait(System.Int32) */
inline static auto& m38_SpinWait = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[38]);
/* System.Void System.Threading::Thread::StartInternal(System.Object, System.Threading.StackCrawlMark&) */
inline static auto& m39_StartInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[39]);
/* System.Void System.Threading::Thread::SetState(System.Threading.InternalThread, System.Threading.ThreadState) */
inline static auto& m40_SetState = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[40]);
/* System.Void System.Threading::Thread::ClrState(System.Threading.InternalThread, System.Threading.ThreadState) */
inline static auto& m41_ClrState = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[41]);
/* System.Threading.ThreadState System.Threading::Thread::GetState(System.Threading.InternalThread) */
inline static auto& m42_GetState = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[42]);
/* System.Int32 System.Threading::Thread::SystemMaxStackStize() */
inline static auto& m43_SystemMaxStackStize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[43]);
/* System.Int32 System.Threading::Thread::GetProcessDefaultStackSize(System.Int32) */
inline static auto& m44_GetProcessDefaultStackSize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[44]);
/* System.Void System.Threading::Thread::SetStart(System.MulticastDelegate, System.Int32) */
inline static auto& m45_SetStart = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[45]);
/* System.Int32 System.Threading::Thread::get_ManagedThreadId() */
inline static auto& m46_get_ManagedThreadId = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[46]);
/* System.Void System.Threading::Thread::BeginCriticalRegion() */
inline static auto& m47_BeginCriticalRegion = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[47]);
/* System.Void System.Threading::Thread::EndCriticalRegion() */
inline static auto& m48_EndCriticalRegion = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[48]);
/* System.Int32 System.Threading::Thread::GetHashCode() */
inline static auto& m49_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[49]);
/* System.Threading.ThreadState System.Threading::Thread::ValidateThreadState() */
inline static auto& m50_ValidateThreadState = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[50]);

};

}