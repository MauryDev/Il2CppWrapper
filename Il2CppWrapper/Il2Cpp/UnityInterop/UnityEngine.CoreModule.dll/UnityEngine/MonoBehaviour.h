
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct MonoBehaviour {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 52> methods;
    inline static std::array<Il2CppWrapper::Field*, 1> fields;  
    /* System.Threading.CancellationTokenSource UnityEngine::MonoBehaviour::m_CancellationTokenSource */
inline static auto& f_m_CancellationTokenSource = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
  
    /* System.Threading.CancellationToken UnityEngine::MonoBehaviour::get_destroyCancellationToken() */
inline static auto& m0_get_destroyCancellationToken = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void UnityEngine::MonoBehaviour::RaiseCancellation() */
inline static auto& m1_RaiseCancellation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Boolean UnityEngine::MonoBehaviour::IsInvoking() */
inline static auto& m2_IsInvoking = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void UnityEngine::MonoBehaviour::CancelInvoke() */
inline static auto& m3_CancelInvoke = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void UnityEngine::MonoBehaviour::Invoke(System.String, System.Single) */
inline static auto& m4_Invoke = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Void UnityEngine::MonoBehaviour::InvokeRepeating(System.String, System.Single, System.Single) */
inline static auto& m5_InvokeRepeating = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Void UnityEngine::MonoBehaviour::CancelInvoke(System.String) */
inline static auto& m6_CancelInvoke = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.Boolean UnityEngine::MonoBehaviour::IsInvoking(System.String) */
inline static auto& m7_IsInvoking = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* UnityEngine.Coroutine UnityEngine::MonoBehaviour::StartCoroutine(System.String) */
inline static auto& m8_StartCoroutine = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* UnityEngine.Coroutine UnityEngine::MonoBehaviour::StartCoroutine(System.String, System.Object) */
inline static auto& m9_StartCoroutine = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* UnityEngine.Coroutine UnityEngine::MonoBehaviour::StartCoroutine(System.Collections.IEnumerator) */
inline static auto& m10_StartCoroutine = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* UnityEngine.Coroutine UnityEngine::MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator) */
inline static auto& m11_StartCoroutine_Auto = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* System.Void UnityEngine::MonoBehaviour::StopCoroutine(System.Collections.IEnumerator) */
inline static auto& m12_StopCoroutine = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.Void UnityEngine::MonoBehaviour::StopCoroutine(UnityEngine.Coroutine) */
inline static auto& m13_StopCoroutine = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* System.Void UnityEngine::MonoBehaviour::StopCoroutine(System.String) */
inline static auto& m14_StopCoroutine = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* System.Void UnityEngine::MonoBehaviour::StopAllCoroutines() */
inline static auto& m15_StopAllCoroutines = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* System.Boolean UnityEngine::MonoBehaviour::get_useGUILayout() */
inline static auto& m16_get_useGUILayout = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* System.Void UnityEngine::MonoBehaviour::set_useGUILayout(System.Boolean) */
inline static auto& m17_set_useGUILayout = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.Boolean UnityEngine::MonoBehaviour::get_didStart() */
inline static auto& m18_get_didStart = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* System.Boolean UnityEngine::MonoBehaviour::get_didAwake() */
inline static auto& m19_get_didAwake = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.Void UnityEngine::MonoBehaviour::print(System.Object) */
inline static auto& m20_print = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[20]);
/* System.Void UnityEngine::MonoBehaviour::Internal_CancelInvokeAll(UnityEngine.MonoBehaviour) */
inline static auto& m21_Internal_CancelInvokeAll = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[21]);
/* System.Boolean UnityEngine::MonoBehaviour::Internal_IsInvokingAll(UnityEngine.MonoBehaviour) */
inline static auto& m22_Internal_IsInvokingAll = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[22]);
/* System.Void UnityEngine::MonoBehaviour::InvokeDelayed(UnityEngine.MonoBehaviour, System.String, System.Single, System.Single) */
inline static auto& m23_InvokeDelayed = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* System.Void UnityEngine::MonoBehaviour::CancelInvoke(UnityEngine.MonoBehaviour, System.String) */
inline static auto& m24_CancelInvoke = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* System.Boolean UnityEngine::MonoBehaviour::IsInvoking(UnityEngine.MonoBehaviour, System.String) */
inline static auto& m25_IsInvoking = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* System.Boolean UnityEngine::MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object) */
inline static auto& m26_IsObjectMonoBehaviour = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* UnityEngine.Coroutine UnityEngine::MonoBehaviour::StartCoroutineManaged(System.String, System.Object) */
inline static auto& m27_StartCoroutineManaged = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[27]);
/* UnityEngine.Coroutine UnityEngine::MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator) */
inline static auto& m28_StartCoroutineManaged2 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[28]);
/* System.Void UnityEngine::MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine) */
inline static auto& m29_StopCoroutineManaged = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[29]);
/* System.Void UnityEngine::MonoBehaviour::StopCoroutineFromEnumeratorManaged(System.Collections.IEnumerator) */
inline static auto& m30_StopCoroutineFromEnumeratorManaged = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[30]);
/* System.String UnityEngine::MonoBehaviour::GetScriptClassName() */
inline static auto& m31_GetScriptClassName = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[31]);
/* System.Void UnityEngine::MonoBehaviour::OnCancellationTokenCreated() */
inline static auto& m32_OnCancellationTokenCreated = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[32]);
/* System.Void UnityEngine::MonoBehaviour::.ctor() */
inline static auto& m33__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[33]);
/* System.Void UnityEngine::MonoBehaviour::StopCoroutine_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m34_StopCoroutine_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[34]);
/* System.Void UnityEngine::MonoBehaviour::StopAllCoroutines_Injected(System.IntPtr) */
inline static auto& m35_StopAllCoroutines_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[35]);
/* System.Boolean UnityEngine::MonoBehaviour::get_useGUILayout_Injected(System.IntPtr) */
inline static auto& m36_get_useGUILayout_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[36]);
/* System.Void UnityEngine::MonoBehaviour::set_useGUILayout_Injected(System.IntPtr, System.Boolean) */
inline static auto& m37_set_useGUILayout_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[37]);
/* System.Boolean UnityEngine::MonoBehaviour::get_didStart_Injected(System.IntPtr) */
inline static auto& m38_get_didStart_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[38]);
/* System.Boolean UnityEngine::MonoBehaviour::get_didAwake_Injected(System.IntPtr) */
inline static auto& m39_get_didAwake_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[39]);
/* System.Void UnityEngine::MonoBehaviour::Internal_CancelInvokeAll_Injected(System.IntPtr) */
inline static auto& m40_Internal_CancelInvokeAll_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[40]);
/* System.Boolean UnityEngine::MonoBehaviour::Internal_IsInvokingAll_Injected(System.IntPtr) */
inline static auto& m41_Internal_IsInvokingAll_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[41]);
/* System.Void UnityEngine::MonoBehaviour::InvokeDelayed_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&, System.Single, System.Single) */
inline static auto& m42_InvokeDelayed_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[42]);
/* System.Void UnityEngine::MonoBehaviour::CancelInvoke_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m43_CancelInvoke_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[43]);
/* System.Boolean UnityEngine::MonoBehaviour::IsInvoking_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m44_IsInvoking_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[44]);
/* System.Boolean UnityEngine::MonoBehaviour::IsObjectMonoBehaviour_Injected(System.IntPtr) */
inline static auto& m45_IsObjectMonoBehaviour_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[45]);
/* UnityEngine.Coroutine UnityEngine::MonoBehaviour::StartCoroutineManaged_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&, System.Object) */
inline static auto& m46_StartCoroutineManaged_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[46]);
/* UnityEngine.Coroutine UnityEngine::MonoBehaviour::StartCoroutineManaged2_Injected(System.IntPtr, System.Collections.IEnumerator) */
inline static auto& m47_StartCoroutineManaged2_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[47]);
/* System.Void UnityEngine::MonoBehaviour::StopCoroutineManaged_Injected(System.IntPtr, System.IntPtr) */
inline static auto& m48_StopCoroutineManaged_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[48]);
/* System.Void UnityEngine::MonoBehaviour::StopCoroutineFromEnumeratorManaged_Injected(System.IntPtr, System.Collections.IEnumerator) */
inline static auto& m49_StopCoroutineFromEnumeratorManaged_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[49]);
/* System.Void UnityEngine::MonoBehaviour::GetScriptClassName_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m50_GetScriptClassName_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[50]);
/* System.Void UnityEngine::MonoBehaviour::OnCancellationTokenCreated_Injected(System.IntPtr) */
inline static auto& m51_OnCancellationTokenCreated_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[51]);

};

}