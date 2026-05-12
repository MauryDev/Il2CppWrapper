
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Debug {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 34> methods;
    inline static std::array<Il2CppWrapper::Field*, 2> fields;  
    /* UnityEngine.ILogger UnityEngine::Debug::s_DefaultLogger */
inline static auto& f_s_DefaultLogger = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* UnityEngine.ILogger UnityEngine::Debug::s_Logger */
inline static auto& f_s_Logger = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
  
    /* UnityEngine.ILogger UnityEngine::Debug::get_unityLogger() */
inline static auto& m0_get_unityLogger = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.Void UnityEngine::Debug::DrawLine(UnityEngine.Vector3, UnityEngine.Vector3, UnityEngine.Color, System.Single) */
inline static auto& m1_DrawLine = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* System.Void UnityEngine::Debug::DrawLine(UnityEngine.Vector3, UnityEngine.Vector3, UnityEngine.Color) */
inline static auto& m2_DrawLine = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* System.Void UnityEngine::Debug::DrawLine(UnityEngine.Vector3, UnityEngine.Vector3) */
inline static auto& m3_DrawLine = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* System.Void UnityEngine::Debug::DrawLine(UnityEngine.Vector3, UnityEngine.Vector3, UnityEngine.Color, System.Single, System.Boolean) */
inline static auto& m4_DrawLine = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.Void UnityEngine::Debug::DrawRay(UnityEngine.Vector3, UnityEngine.Vector3, UnityEngine.Color, System.Single) */
inline static auto& m5_DrawRay = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.Void UnityEngine::Debug::DrawRay(UnityEngine.Vector3, UnityEngine.Vector3, UnityEngine.Color, System.Single, System.Boolean) */
inline static auto& m6_DrawRay = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.Void UnityEngine::Debug::Break() */
inline static auto& m7_Break = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Int32 UnityEngine::Debug::ExtractStackTraceNoAlloc(System.Byte*, System.Int32, System.String) */
inline static auto& m8_ExtractStackTraceNoAlloc = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);
/* System.Void UnityEngine::Debug::Log(System.Object) */
inline static auto& m9_Log = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* System.Void UnityEngine::Debug::Log(System.Object, UnityEngine.Object) */
inline static auto& m10_Log = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);
/* System.Void UnityEngine::Debug::LogFormat(System.String, System.Object[]) */
inline static auto& m11_LogFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* System.Void UnityEngine::Debug::LogFormat(UnityEngine.LogType, UnityEngine.LogOption, UnityEngine.Object, System.String, System.Object[]) */
inline static auto& m12_LogFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);
/* System.Void UnityEngine::Debug::LogError(System.Object) */
inline static auto& m13_LogError = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.Void UnityEngine::Debug::LogError(System.Object, UnityEngine.Object) */
inline static auto& m14_LogError = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);
/* System.Void UnityEngine::Debug::LogErrorFormat(System.String, System.Object[]) */
inline static auto& m15_LogErrorFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[15]);
/* System.Void UnityEngine::Debug::LogErrorFormat(UnityEngine.Object, System.String, System.Object[]) */
inline static auto& m16_LogErrorFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[16]);
/* System.Void UnityEngine::Debug::LogException(System.Exception) */
inline static auto& m17_LogException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[17]);
/* System.Void UnityEngine::Debug::LogException(System.Exception, UnityEngine.Object) */
inline static auto& m18_LogException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[18]);
/* System.Void UnityEngine::Debug::LogWarning(System.Object) */
inline static auto& m19_LogWarning = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[19]);
/* System.Void UnityEngine::Debug::LogWarning(System.Object, UnityEngine.Object) */
inline static auto& m20_LogWarning = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[20]);
/* System.Void UnityEngine::Debug::LogWarningFormat(System.String, System.Object[]) */
inline static auto& m21_LogWarningFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[21]);
/* System.Void UnityEngine::Debug::LogWarningFormat(UnityEngine.Object, System.String, System.Object[]) */
inline static auto& m22_LogWarningFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[22]);
/* System.Void UnityEngine::Debug::Assert(System.Boolean) */
inline static auto& m23_Assert = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* System.Void UnityEngine::Debug::Assert(System.Boolean, System.String) */
inline static auto& m24_Assert = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* System.Void UnityEngine::Debug::AssertFormat(System.Boolean, System.String, System.Object[]) */
inline static auto& m25_AssertFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* System.Void UnityEngine::Debug::LogAssertion(System.Object) */
inline static auto& m26_LogAssertion = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* System.Void UnityEngine::Debug::LogAssertionFormat(System.String, System.Object[]) */
inline static auto& m27_LogAssertionFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);
/* System.Boolean UnityEngine::Debug::get_isDebugBuild() */
inline static auto& m28_get_isDebugBuild = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[28]);
/* System.Boolean UnityEngine::Debug::CallOverridenDebugHandler(System.Exception, UnityEngine.Object) */
inline static auto& m29_CallOverridenDebugHandler = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);
/* System.Boolean UnityEngine::Debug::IsLoggingEnabled() */
inline static auto& m30_IsLoggingEnabled = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[30]);
/* System.Void UnityEngine::Debug::.cctor() */
inline static auto& m31__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[31]);
/* System.Void UnityEngine::Debug::DrawLine_Injected(UnityEngine.Vector3&, UnityEngine.Vector3&, UnityEngine.Color&, System.Single, System.Boolean) */
inline static auto& m32_DrawLine_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[32]);
/* System.Int32 UnityEngine::Debug::ExtractStackTraceNoAlloc_Injected(System.Byte*, System.Int32, UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m33_ExtractStackTraceNoAlloc_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[33]);

};

}