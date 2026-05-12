
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct AudioClip {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 7> methods;
    inline static std::array<Il2CppWrapper::Field*, 2> fields;  
    /* UnityEngine.AudioClip.PCMReaderCallback UnityEngine::AudioClip::m_PCMReaderCallback */
inline static auto& f_m_PCMReaderCallback = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* UnityEngine.AudioClip.PCMSetPositionCallback UnityEngine::AudioClip::m_PCMSetPositionCallback */
inline static auto& f_m_PCMSetPositionCallback = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
  
    /* System.Void UnityEngine::AudioClip::.ctor() */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Single UnityEngine::AudioClip::get_length() */
inline static auto& m1_get_length = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Int32 UnityEngine::AudioClip::get_samples() */
inline static auto& m2_get_samples = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void UnityEngine::AudioClip::InvokePCMReaderCallback_Internal(System.Single[]) */
inline static auto& m3_InvokePCMReaderCallback_Internal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void UnityEngine::AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32) */
inline static auto& m4_InvokePCMSetPositionCallback_Internal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Single UnityEngine::AudioClip::get_length_Injected(System.IntPtr) */
inline static auto& m5_get_length_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.Int32 UnityEngine::AudioClip::get_samples_Injected(System.IntPtr) */
inline static auto& m6_get_samples_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);

};

}