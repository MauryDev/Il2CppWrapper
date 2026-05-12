
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct AudioSource {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 102> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Single UnityEngine::AudioSource::GetPitch(UnityEngine.AudioSource) */
inline static auto& m0_GetPitch = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.Void UnityEngine::AudioSource::SetPitch(UnityEngine.AudioSource, System.Single) */
inline static auto& m1_SetPitch = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* System.Void UnityEngine::AudioSource::PlayHelper(UnityEngine.AudioSource, System.UInt64) */
inline static auto& m2_PlayHelper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* System.Void UnityEngine::AudioSource::Play(System.Double) */
inline static auto& m3_Play = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void UnityEngine::AudioSource::PlayOneShotHelper(UnityEngine.AudioSource, UnityEngine.AudioClip, System.Single) */
inline static auto& m4_PlayOneShotHelper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.Void UnityEngine::AudioSource::Stop(System.Boolean) */
inline static auto& m5_Stop = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Single UnityEngine::AudioSource::get_volume() */
inline static auto& m6_get_volume = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.Void UnityEngine::AudioSource::set_volume(System.Single) */
inline static auto& m7_set_volume = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.Single UnityEngine::AudioSource::get_pitch() */
inline static auto& m8_get_pitch = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Void UnityEngine::AudioSource::set_pitch(System.Single) */
inline static auto& m9_set_pitch = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.Single UnityEngine::AudioSource::get_time() */
inline static auto& m10_get_time = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Void UnityEngine::AudioSource::set_timeSamples(System.Int32) */
inline static auto& m11_set_timeSamples = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* UnityEngine.AudioClip UnityEngine::AudioSource::get_clip() */
inline static auto& m12_get_clip = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.Void UnityEngine::AudioSource::set_clip(UnityEngine.AudioClip) */
inline static auto& m13_set_clip = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* UnityEngine.Audio.AudioResource UnityEngine::AudioSource::get_resource() */
inline static auto& m14_get_resource = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* System.Void UnityEngine::AudioSource::set_resource(UnityEngine.Audio.AudioResource) */
inline static auto& m15_set_resource = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* UnityEngine.Audio.AudioMixerGroup UnityEngine::AudioSource::get_outputAudioMixerGroup() */
inline static auto& m16_get_outputAudioMixerGroup = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* System.Void UnityEngine::AudioSource::set_outputAudioMixerGroup(UnityEngine.Audio.AudioMixerGroup) */
inline static auto& m17_set_outputAudioMixerGroup = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.Void UnityEngine::AudioSource::Play() */
inline static auto& m18_Play = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* System.Void UnityEngine::AudioSource::PlayScheduled(System.Double) */
inline static auto& m19_PlayScheduled = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.Void UnityEngine::AudioSource::PlayOneShot(UnityEngine.AudioClip) */
inline static auto& m20_PlayOneShot = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.Void UnityEngine::AudioSource::PlayOneShot(UnityEngine.AudioClip, System.Single) */
inline static auto& m21_PlayOneShot = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* System.Void UnityEngine::AudioSource::SetScheduledEndTime(System.Double) */
inline static auto& m22_SetScheduledEndTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* System.Void UnityEngine::AudioSource::Stop() */
inline static auto& m23_Stop = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[23]);
/* System.Boolean UnityEngine::AudioSource::get_isPlaying() */
inline static auto& m24_get_isPlaying = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[24]);
/* System.Boolean UnityEngine::AudioSource::get_loop() */
inline static auto& m25_get_loop = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[25]);
/* System.Void UnityEngine::AudioSource::set_loop(System.Boolean) */
inline static auto& m26_set_loop = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[26]);
/* System.Boolean UnityEngine::AudioSource::get_playOnAwake() */
inline static auto& m27_get_playOnAwake = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[27]);
/* System.Void UnityEngine::AudioSource::set_playOnAwake(System.Boolean) */
inline static auto& m28_set_playOnAwake = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[28]);
/* System.Single UnityEngine::AudioSource::get_panStereo() */
inline static auto& m29_get_panStereo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[29]);
/* System.Void UnityEngine::AudioSource::set_panStereo(System.Single) */
inline static auto& m30_set_panStereo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[30]);
/* System.Single UnityEngine::AudioSource::get_spatialBlend() */
inline static auto& m31_get_spatialBlend = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[31]);
/* System.Void UnityEngine::AudioSource::set_spatialBlend(System.Single) */
inline static auto& m32_set_spatialBlend = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[32]);
/* System.Single UnityEngine::AudioSource::get_reverbZoneMix() */
inline static auto& m33_get_reverbZoneMix = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[33]);
/* System.Void UnityEngine::AudioSource::set_reverbZoneMix(System.Single) */
inline static auto& m34_set_reverbZoneMix = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[34]);
/* System.Boolean UnityEngine::AudioSource::get_bypassEffects() */
inline static auto& m35_get_bypassEffects = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[35]);
/* System.Void UnityEngine::AudioSource::set_bypassEffects(System.Boolean) */
inline static auto& m36_set_bypassEffects = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[36]);
/* System.Boolean UnityEngine::AudioSource::get_bypassListenerEffects() */
inline static auto& m37_get_bypassListenerEffects = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[37]);
/* System.Void UnityEngine::AudioSource::set_bypassListenerEffects(System.Boolean) */
inline static auto& m38_set_bypassListenerEffects = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[38]);
/* System.Boolean UnityEngine::AudioSource::get_bypassReverbZones() */
inline static auto& m39_get_bypassReverbZones = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[39]);
/* System.Void UnityEngine::AudioSource::set_bypassReverbZones(System.Boolean) */
inline static auto& m40_set_bypassReverbZones = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[40]);
/* System.Single UnityEngine::AudioSource::get_dopplerLevel() */
inline static auto& m41_get_dopplerLevel = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[41]);
/* System.Void UnityEngine::AudioSource::set_dopplerLevel(System.Single) */
inline static auto& m42_set_dopplerLevel = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[42]);
/* System.Single UnityEngine::AudioSource::get_spread() */
inline static auto& m43_get_spread = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[43]);
/* System.Void UnityEngine::AudioSource::set_spread(System.Single) */
inline static auto& m44_set_spread = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[44]);
/* System.Int32 UnityEngine::AudioSource::get_priority() */
inline static auto& m45_get_priority = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[45]);
/* System.Void UnityEngine::AudioSource::set_priority(System.Int32) */
inline static auto& m46_set_priority = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[46]);
/* System.Boolean UnityEngine::AudioSource::get_mute() */
inline static auto& m47_get_mute = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[47]);
/* System.Void UnityEngine::AudioSource::set_mute(System.Boolean) */
inline static auto& m48_set_mute = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[48]);
/* System.Single UnityEngine::AudioSource::get_minDistance() */
inline static auto& m49_get_minDistance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[49]);
/* System.Void UnityEngine::AudioSource::set_minDistance(System.Single) */
inline static auto& m50_set_minDistance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[50]);
/* System.Single UnityEngine::AudioSource::get_maxDistance() */
inline static auto& m51_get_maxDistance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[51]);
/* System.Void UnityEngine::AudioSource::set_maxDistance(System.Single) */
inline static auto& m52_set_maxDistance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[52]);
/* UnityEngine.AudioRolloffMode UnityEngine::AudioSource::get_rolloffMode() */
inline static auto& m53_get_rolloffMode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[53]);
/* System.Void UnityEngine::AudioSource::set_rolloffMode(UnityEngine.AudioRolloffMode) */
inline static auto& m54_set_rolloffMode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[54]);
/* System.Void UnityEngine::AudioSource::.ctor() */
inline static auto& m55__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[55]);
/* System.Single UnityEngine::AudioSource::GetPitch_Injected(System.IntPtr) */
inline static auto& m56_GetPitch_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[56]);
/* System.Void UnityEngine::AudioSource::SetPitch_Injected(System.IntPtr, System.Single) */
inline static auto& m57_SetPitch_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[57]);
/* System.Void UnityEngine::AudioSource::PlayHelper_Injected(System.IntPtr, System.UInt64) */
inline static auto& m58_PlayHelper_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[58]);
/* System.Void UnityEngine::AudioSource::Play_Injected(System.IntPtr, System.Double) */
inline static auto& m59_Play_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[59]);
/* System.Void UnityEngine::AudioSource::PlayOneShotHelper_Injected(System.IntPtr, System.IntPtr, System.Single) */
inline static auto& m60_PlayOneShotHelper_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[60]);
/* System.Void UnityEngine::AudioSource::Stop_Injected(System.IntPtr, System.Boolean) */
inline static auto& m61_Stop_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[61]);
/* System.Single UnityEngine::AudioSource::get_volume_Injected(System.IntPtr) */
inline static auto& m62_get_volume_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[62]);
/* System.Void UnityEngine::AudioSource::set_volume_Injected(System.IntPtr, System.Single) */
inline static auto& m63_set_volume_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[63]);
/* System.Single UnityEngine::AudioSource::get_time_Injected(System.IntPtr) */
inline static auto& m64_get_time_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[64]);
/* System.Void UnityEngine::AudioSource::set_timeSamples_Injected(System.IntPtr, System.Int32) */
inline static auto& m65_set_timeSamples_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[65]);
/* System.IntPtr UnityEngine::AudioSource::get_resource_Injected(System.IntPtr) */
inline static auto& m66_get_resource_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[66]);
/* System.Void UnityEngine::AudioSource::set_resource_Injected(System.IntPtr, System.IntPtr) */
inline static auto& m67_set_resource_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[67]);
/* System.IntPtr UnityEngine::AudioSource::get_outputAudioMixerGroup_Injected(System.IntPtr) */
inline static auto& m68_get_outputAudioMixerGroup_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[68]);
/* System.Void UnityEngine::AudioSource::set_outputAudioMixerGroup_Injected(System.IntPtr, System.IntPtr) */
inline static auto& m69_set_outputAudioMixerGroup_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[69]);
/* System.Void UnityEngine::AudioSource::SetScheduledEndTime_Injected(System.IntPtr, System.Double) */
inline static auto& m70_SetScheduledEndTime_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[70]);
/* System.Boolean UnityEngine::AudioSource::get_isPlaying_Injected(System.IntPtr) */
inline static auto& m71_get_isPlaying_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[71]);
/* System.Boolean UnityEngine::AudioSource::get_loop_Injected(System.IntPtr) */
inline static auto& m72_get_loop_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[72]);
/* System.Void UnityEngine::AudioSource::set_loop_Injected(System.IntPtr, System.Boolean) */
inline static auto& m73_set_loop_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[73]);
/* System.Boolean UnityEngine::AudioSource::get_playOnAwake_Injected(System.IntPtr) */
inline static auto& m74_get_playOnAwake_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[74]);
/* System.Void UnityEngine::AudioSource::set_playOnAwake_Injected(System.IntPtr, System.Boolean) */
inline static auto& m75_set_playOnAwake_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[75]);
/* System.Single UnityEngine::AudioSource::get_panStereo_Injected(System.IntPtr) */
inline static auto& m76_get_panStereo_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[76]);
/* System.Void UnityEngine::AudioSource::set_panStereo_Injected(System.IntPtr, System.Single) */
inline static auto& m77_set_panStereo_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[77]);
/* System.Single UnityEngine::AudioSource::get_spatialBlend_Injected(System.IntPtr) */
inline static auto& m78_get_spatialBlend_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[78]);
/* System.Void UnityEngine::AudioSource::set_spatialBlend_Injected(System.IntPtr, System.Single) */
inline static auto& m79_set_spatialBlend_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[79]);
/* System.Single UnityEngine::AudioSource::get_reverbZoneMix_Injected(System.IntPtr) */
inline static auto& m80_get_reverbZoneMix_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[80]);
/* System.Void UnityEngine::AudioSource::set_reverbZoneMix_Injected(System.IntPtr, System.Single) */
inline static auto& m81_set_reverbZoneMix_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[81]);
/* System.Boolean UnityEngine::AudioSource::get_bypassEffects_Injected(System.IntPtr) */
inline static auto& m82_get_bypassEffects_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[82]);
/* System.Void UnityEngine::AudioSource::set_bypassEffects_Injected(System.IntPtr, System.Boolean) */
inline static auto& m83_set_bypassEffects_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[83]);
/* System.Boolean UnityEngine::AudioSource::get_bypassListenerEffects_Injected(System.IntPtr) */
inline static auto& m84_get_bypassListenerEffects_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[84]);
/* System.Void UnityEngine::AudioSource::set_bypassListenerEffects_Injected(System.IntPtr, System.Boolean) */
inline static auto& m85_set_bypassListenerEffects_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[85]);
/* System.Boolean UnityEngine::AudioSource::get_bypassReverbZones_Injected(System.IntPtr) */
inline static auto& m86_get_bypassReverbZones_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[86]);
/* System.Void UnityEngine::AudioSource::set_bypassReverbZones_Injected(System.IntPtr, System.Boolean) */
inline static auto& m87_set_bypassReverbZones_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[87]);
/* System.Single UnityEngine::AudioSource::get_dopplerLevel_Injected(System.IntPtr) */
inline static auto& m88_get_dopplerLevel_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[88]);
/* System.Void UnityEngine::AudioSource::set_dopplerLevel_Injected(System.IntPtr, System.Single) */
inline static auto& m89_set_dopplerLevel_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[89]);
/* System.Single UnityEngine::AudioSource::get_spread_Injected(System.IntPtr) */
inline static auto& m90_get_spread_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[90]);
/* System.Void UnityEngine::AudioSource::set_spread_Injected(System.IntPtr, System.Single) */
inline static auto& m91_set_spread_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[91]);
/* System.Int32 UnityEngine::AudioSource::get_priority_Injected(System.IntPtr) */
inline static auto& m92_get_priority_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[92]);
/* System.Void UnityEngine::AudioSource::set_priority_Injected(System.IntPtr, System.Int32) */
inline static auto& m93_set_priority_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[93]);
/* System.Boolean UnityEngine::AudioSource::get_mute_Injected(System.IntPtr) */
inline static auto& m94_get_mute_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[94]);
/* System.Void UnityEngine::AudioSource::set_mute_Injected(System.IntPtr, System.Boolean) */
inline static auto& m95_set_mute_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[95]);
/* System.Single UnityEngine::AudioSource::get_minDistance_Injected(System.IntPtr) */
inline static auto& m96_get_minDistance_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[96]);
/* System.Void UnityEngine::AudioSource::set_minDistance_Injected(System.IntPtr, System.Single) */
inline static auto& m97_set_minDistance_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[97]);
/* System.Single UnityEngine::AudioSource::get_maxDistance_Injected(System.IntPtr) */
inline static auto& m98_get_maxDistance_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[98]);
/* System.Void UnityEngine::AudioSource::set_maxDistance_Injected(System.IntPtr, System.Single) */
inline static auto& m99_set_maxDistance_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[99]);
/* UnityEngine.AudioRolloffMode UnityEngine::AudioSource::get_rolloffMode_Injected(System.IntPtr) */
inline static auto& m100_get_rolloffMode_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[100]);
/* System.Void UnityEngine::AudioSource::set_rolloffMode_Injected(System.IntPtr, UnityEngine.AudioRolloffMode) */
inline static auto& m101_set_rolloffMode_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[101]);

};

}