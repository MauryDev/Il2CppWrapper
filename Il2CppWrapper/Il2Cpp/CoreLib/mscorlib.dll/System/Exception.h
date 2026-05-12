
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct Exception {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 27> methods;
    inline static std::array<Il2CppWrapper::Field*, 18> fields;  
    /* System.Object System::Exception::s_EDILock */
inline static auto& f_s_EDILock = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.String System::Exception::_className */
inline static auto& f__className = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* System.String System::Exception::_message */
inline static auto& f__message = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[2]);
/* System.Collections.IDictionary System::Exception::_data */
inline static auto& f__data = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[3]);
/* System.Exception System::Exception::_innerException */
inline static auto& f__innerException = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[4]);
/* System.String System::Exception::_helpURL */
inline static auto& f__helpURL = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[5]);
/* System.Object System::Exception::_stackTrace */
inline static auto& f__stackTrace = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[6]);
/* System.String System::Exception::_stackTraceString */
inline static auto& f__stackTraceString = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[7]);
/* System.String System::Exception::_remoteStackTraceString */
inline static auto& f__remoteStackTraceString = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[8]);
/* System.Int32 System::Exception::_remoteStackIndex */
inline static auto& f__remoteStackIndex = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[9]);
/* System.Object System::Exception::_dynamicMethods */
inline static auto& f__dynamicMethods = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[10]);
/* System.Int32 System::Exception::_HResult */
inline static auto& f__HResult = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[11]);
/* System.String System::Exception::_source */
inline static auto& f__source = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[12]);
/* System.Runtime.Serialization.SafeSerializationManager System::Exception::_safeSerializationManager */
inline static auto& f__safeSerializationManager = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[13]);
/* System.Diagnostics.StackTrace[] System::Exception::captured_traces */
inline static auto& f_captured_traces = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[14]);
/* System.IntPtr[] System::Exception::native_trace_ips */
inline static auto& f_native_trace_ips = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[15]);
/* System.Int32 System::Exception::caught_in_unmanaged */
inline static auto& f_caught_in_unmanaged = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[16]);
/* System.Int32 System::Exception::_COMPlusExceptionCode */
inline static auto& f__COMPlusExceptionCode = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[17]);
  
    /* System.Void System::Exception::Init() */
inline static auto& m0_Init = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void System::Exception::.ctor() */
inline static auto& m1__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void System::Exception::.ctor(System.String) */
inline static auto& m2__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void System::Exception::.ctor(System.String, System.Exception) */
inline static auto& m3__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void System::Exception::.ctor(System.Runtime.Serialization.SerializationInfo, System.Runtime.Serialization.StreamingContext) */
inline static auto& m4__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.String System::Exception::get_Message() */
inline static auto& m5_get_Message = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Collections.IDictionary System::Exception::get_Data() */
inline static auto& m6_get_Data = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.String System::Exception::GetClassName() */
inline static auto& m7_GetClassName = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.Exception System::Exception::get_InnerException() */
inline static auto& m8_get_InnerException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[8]);
/* System.Reflection.MethodBase System::Exception::get_TargetSite() */
inline static auto& m9_get_TargetSite = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);
/* System.String System::Exception::get_StackTrace() */
inline static auto& m10_get_StackTrace = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[10]);
/* System.String System::Exception::GetStackTrace(System.Boolean) */
inline static auto& m11_GetStackTrace = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* System.Void System::Exception::SetErrorCode(System.Int32) */
inline static auto& m12_SetErrorCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.String System::Exception::get_Source() */
inline static auto& m13_get_Source = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[13]);
/* System.String System::Exception::ToString() */
inline static auto& m14_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[14]);
/* System.String System::Exception::ToString(System.Boolean, System.Boolean) */
inline static auto& m15_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* System.Void System::Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo, System.Runtime.Serialization.StreamingContext) */
inline static auto& m16_GetObjectData = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[16]);
/* System.Void System::Exception::OnDeserialized(System.Runtime.Serialization.StreamingContext) */
inline static auto& m17_OnDeserialized = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.String System::Exception::StripFileInfo(System.String, System.Boolean) */
inline static auto& m18_StripFileInfo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* System.Void System::Exception::RestoreExceptionDispatchInfo(System.Runtime.ExceptionServices.ExceptionDispatchInfo) */
inline static auto& m19_RestoreExceptionDispatchInfo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.Int32 System::Exception::get_HResult() */
inline static auto& m20_get_HResult = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.Void System::Exception::set_HResult(System.Int32) */
inline static auto& m21_set_HResult = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* System.Type System::Exception::GetType() */
inline static auto& m22_GetType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[22]);
/* System.String System::Exception::GetMessageFromNativeResources(System.Exception.ExceptionMessageKind) */
inline static auto& m23_GetMessageFromNativeResources = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* System.Exception System::Exception::FixRemotingException() */
inline static auto& m24_FixRemotingException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[24]);
/* System.Void System::Exception::ReportUnhandledException(System.Exception) */
inline static auto& m25_ReportUnhandledException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* System.Void System::Exception::.cctor() */
inline static auto& m26__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);

};

}