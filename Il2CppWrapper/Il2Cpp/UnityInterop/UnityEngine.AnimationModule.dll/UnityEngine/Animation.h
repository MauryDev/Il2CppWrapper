
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Animation {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 33> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Void UnityEngine::Animation::Stop() */
inline static auto& m0_Stop = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void UnityEngine::Animation::Rewind() */
inline static auto& m1_Rewind = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void UnityEngine::Animation::Rewind(System.String) */
inline static auto& m2_Rewind = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void UnityEngine::Animation::RewindNamed(System.String) */
inline static auto& m3_RewindNamed = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void UnityEngine::Animation::Sample() */
inline static auto& m4_Sample = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Boolean UnityEngine::Animation::IsPlaying(System.String) */
inline static auto& m5_IsPlaying = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* UnityEngine.AnimationState UnityEngine::Animation::get_Item(System.String) */
inline static auto& m6_get_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.Boolean UnityEngine::Animation::Play() */
inline static auto& m7_Play = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.Boolean UnityEngine::Animation::Play(UnityEngine.PlayMode) */
inline static auto& m8_Play = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Boolean UnityEngine::Animation::PlayDefaultAnimation(UnityEngine.PlayMode) */
inline static auto& m9_PlayDefaultAnimation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.Boolean UnityEngine::Animation::Play(System.String) */
inline static auto& m10_Play = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Boolean UnityEngine::Animation::Play(System.String, UnityEngine.PlayMode) */
inline static auto& m11_Play = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* System.Void UnityEngine::Animation::CrossFade(System.String, System.Single, UnityEngine.PlayMode) */
inline static auto& m12_CrossFade = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* UnityEngine.AnimationState UnityEngine::Animation::CrossFadeQueued(System.String, System.Single, UnityEngine.QueueMode) */
inline static auto& m13_CrossFadeQueued = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* UnityEngine.AnimationState UnityEngine::Animation::CrossFadeQueued(System.String, System.Single, UnityEngine.QueueMode, UnityEngine.PlayMode) */
inline static auto& m14_CrossFadeQueued = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* System.Collections.IEnumerator UnityEngine::Animation::GetEnumerator() */
inline static auto& m15_GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[15]);
/* UnityEngine.AnimationState UnityEngine::Animation::GetState(System.String) */
inline static auto& m16_GetState = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* UnityEngine.AnimationState UnityEngine::Animation::GetStateAtIndex(System.Int32) */
inline static auto& m17_GetStateAtIndex = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.Int32 UnityEngine::Animation::GetStateCount() */
inline static auto& m18_GetStateCount = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* UnityEngine.AnimationClip UnityEngine::Animation::GetClip(System.String) */
inline static auto& m19_GetClip = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.Void UnityEngine::Animation::.ctor() */
inline static auto& m20__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.Void UnityEngine::Animation::Stop_Injected(System.IntPtr) */
inline static auto& m21_Stop_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[21]);
/* System.Void UnityEngine::Animation::Rewind_Injected(System.IntPtr) */
inline static auto& m22_Rewind_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[22]);
/* System.Void UnityEngine::Animation::RewindNamed_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m23_RewindNamed_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* System.Void UnityEngine::Animation::Sample_Injected(System.IntPtr) */
inline static auto& m24_Sample_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* System.Boolean UnityEngine::Animation::IsPlaying_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m25_IsPlaying_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* System.Boolean UnityEngine::Animation::PlayDefaultAnimation_Injected(System.IntPtr, UnityEngine.PlayMode) */
inline static auto& m26_PlayDefaultAnimation_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* System.Boolean UnityEngine::Animation::Play_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&, UnityEngine.PlayMode) */
inline static auto& m27_Play_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);
/* System.Void UnityEngine::Animation::CrossFade_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&, System.Single, UnityEngine.PlayMode) */
inline static auto& m28_CrossFade_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[28]);
/* UnityEngine.AnimationState UnityEngine::Animation::CrossFadeQueued_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&, System.Single, UnityEngine.QueueMode, UnityEngine.PlayMode) */
inline static auto& m29_CrossFadeQueued_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);
/* UnityEngine.AnimationState UnityEngine::Animation::GetState_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m30_GetState_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[30]);
/* UnityEngine.AnimationState UnityEngine::Animation::GetStateAtIndex_Injected(System.IntPtr, System.Int32) */
inline static auto& m31_GetStateAtIndex_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[31]);
/* System.Int32 UnityEngine::Animation::GetStateCount_Injected(System.IntPtr) */
inline static auto& m32_GetStateCount_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[32]);

};

}