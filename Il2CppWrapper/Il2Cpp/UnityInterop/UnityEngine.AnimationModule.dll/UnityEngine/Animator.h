
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Animator {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 18> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Void UnityEngine::Animator::SetTrigger(System.String) */
inline static auto& m0_SetTrigger = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void UnityEngine::Animator::ResetTrigger(System.String) */
inline static auto& m1_ResetTrigger = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void UnityEngine::Animator::set_speed(System.Single) */
inline static auto& m2_set_speed = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void UnityEngine::Animator::Play(System.String, System.Int32, System.Single) */
inline static auto& m3_Play = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void UnityEngine::Animator::Play(System.Int32, System.Int32, System.Single) */
inline static auto& m4_Play = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* UnityEngine.RuntimeAnimatorController UnityEngine::Animator::get_runtimeAnimatorController() */
inline static auto& m5_get_runtimeAnimatorController = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Boolean UnityEngine::Animator::get_hasBoundPlayables() */
inline static auto& m6_get_hasBoundPlayables = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.Int32 UnityEngine::Animator::StringToHash(System.String) */
inline static auto& m7_StringToHash = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Void UnityEngine::Animator::SetTriggerString(System.String) */
inline static auto& m8_SetTriggerString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Void UnityEngine::Animator::ResetTriggerString(System.String) */
inline static auto& m9_ResetTriggerString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.Void UnityEngine::Animator::.ctor() */
inline static auto& m10__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Void UnityEngine::Animator::set_speed_Injected(System.IntPtr, System.Single) */
inline static auto& m11_set_speed_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* System.Void UnityEngine::Animator::Play_Injected(System.IntPtr, System.Int32, System.Int32, System.Single) */
inline static auto& m12_Play_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);
/* System.IntPtr UnityEngine::Animator::get_runtimeAnimatorController_Injected(System.IntPtr) */
inline static auto& m13_get_runtimeAnimatorController_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.Boolean UnityEngine::Animator::get_hasBoundPlayables_Injected(System.IntPtr) */
inline static auto& m14_get_hasBoundPlayables_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);
/* System.Int32 UnityEngine::Animator::StringToHash_Injected(UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m15_StringToHash_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[15]);
/* System.Void UnityEngine::Animator::SetTriggerString_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m16_SetTriggerString_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[16]);
/* System.Void UnityEngine::Animator::ResetTriggerString_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m17_ResetTriggerString_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[17]);

};

}