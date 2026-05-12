
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Application {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 32> methods;
    inline static std::array<Il2CppWrapper::Field*, 10> fields;  
    /* UnityEngine.Application.LowMemoryCallback UnityEngine::Application::lowMemory */
inline static auto& f_lowMemory = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* UnityEngine.Application.MemoryUsageChangedCallback UnityEngine::Application::memoryUsageChanged */
inline static auto& f_memoryUsageChanged = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
/* UnityEngine.Application.LogCallback UnityEngine::Application::s_LogCallbackHandler */
inline static auto& f_s_LogCallbackHandler = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[2]);
/* UnityEngine.Application.LogCallback UnityEngine::Application::s_LogCallbackHandlerThreaded */
inline static auto& f_s_LogCallbackHandlerThreaded = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[3]);
/* System.Action<System.Boolean> UnityEngine::Application::focusChanged */
inline static auto& f_focusChanged = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[4]);
/* System.Action<System.String> UnityEngine::Application::deepLinkActivated */
inline static auto& f_deepLinkActivated = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[5]);
/* System.Func<System.Boolean> UnityEngine::Application::wantsToQuit */
inline static auto& f_wantsToQuit = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[6]);
/* System.Action UnityEngine::Application::quitting */
inline static auto& f_quitting = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[7]);
/* System.Action UnityEngine::Application::unloading */
inline static auto& f_unloading = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[8]);
/* System.Threading.CancellationTokenSource UnityEngine::Application::s_currentCancellationTokenSource */
inline static auto& f_s_currentCancellationTokenSource = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[9]);
  
    /* System.Void UnityEngine::Application::Quit(System.Int32) */
inline static auto& m0_Quit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.Void UnityEngine::Application::Quit() */
inline static auto& m1_Quit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* System.Boolean UnityEngine::Application::get_isPlaying() */
inline static auto& m2_get_isPlaying = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* System.Boolean UnityEngine::Application::get_isFocused() */
inline static auto& m3_get_isFocused = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* System.Void UnityEngine::Application::set_runInBackground(System.Boolean) */
inline static auto& m4_set_runInBackground = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.Boolean UnityEngine::Application::get_isBatchMode() */
inline static auto& m5_get_isBatchMode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.String UnityEngine::Application::get_dataPath() */
inline static auto& m6_get_dataPath = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.String UnityEngine::Application::get_version() */
inline static auto& m7_get_version = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Void UnityEngine::Application::OpenURL(System.String) */
inline static auto& m8_OpenURL = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);
/* System.Void UnityEngine::Application::set_targetFrameRate(System.Int32) */
inline static auto& m9_set_targetFrameRate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* System.Void UnityEngine::Application::SetLogCallbackDefined(System.Boolean) */
inline static auto& m10_SetLogCallbackDefined = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);
/* UnityEngine.RuntimePlatform UnityEngine::Application::get_platform() */
inline static auto& m11_get_platform = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* System.Void UnityEngine::Application::CallLowMemory(UnityEngine.ApplicationMemoryUsage) */
inline static auto& m12_CallLowMemory = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);
/* System.Boolean UnityEngine::Application::HasLogCallback() */
inline static auto& m13_HasLogCallback = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.Void UnityEngine::Application::add_logMessageReceived(UnityEngine.Application.LogCallback) */
inline static auto& m14_add_logMessageReceived = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);
/* System.Void UnityEngine::Application::remove_logMessageReceived(UnityEngine.Application.LogCallback) */
inline static auto& m15_remove_logMessageReceived = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[15]);
/* System.Void UnityEngine::Application::CallLogCallback(System.String, System.String, UnityEngine.LogType, System.Boolean) */
inline static auto& m16_CallLogCallback = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[16]);
/* System.Void UnityEngine::Application::add_focusChanged(System.Action<System.Boolean>) */
inline static auto& m17_add_focusChanged = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[17]);
/* System.Void UnityEngine::Application::remove_focusChanged(System.Action<System.Boolean>) */
inline static auto& m18_remove_focusChanged = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[18]);
/* System.Boolean UnityEngine::Application::Internal_ApplicationWantsToQuit() */
inline static auto& m19_Internal_ApplicationWantsToQuit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[19]);
/* System.Void UnityEngine::Application::Internal_InitializeExitCancellationToken() */
inline static auto& m20_Internal_InitializeExitCancellationToken = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[20]);
/* System.Void UnityEngine::Application::Internal_RaiseExitCancellationToken() */
inline static auto& m21_Internal_RaiseExitCancellationToken = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[21]);
/* System.Void UnityEngine::Application::Internal_ApplicationQuit() */
inline static auto& m22_Internal_ApplicationQuit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[22]);
/* System.Void UnityEngine::Application::Internal_ApplicationUnload() */
inline static auto& m23_Internal_ApplicationUnload = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* System.Void UnityEngine::Application::InvokeOnBeforeRender() */
inline static auto& m24_InvokeOnBeforeRender = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* System.Void UnityEngine::Application::InvokeFocusChanged(System.Boolean) */
inline static auto& m25_InvokeFocusChanged = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* System.Void UnityEngine::Application::InvokeDeepLinkActivated(System.String) */
inline static auto& m26_InvokeDeepLinkActivated = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* System.Boolean UnityEngine::Application::get_isEditor() */
inline static auto& m27_get_isEditor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);
/* System.Void UnityEngine::Application::.cctor() */
inline static auto& m28__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[28]);
/* System.Void UnityEngine::Application::get_dataPath_Injected(UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m29_get_dataPath_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);
/* System.Void UnityEngine::Application::get_version_Injected(UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m30_get_version_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[30]);
/* System.Void UnityEngine::Application::OpenURL_Injected(UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m31_OpenURL_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[31]);

};

}