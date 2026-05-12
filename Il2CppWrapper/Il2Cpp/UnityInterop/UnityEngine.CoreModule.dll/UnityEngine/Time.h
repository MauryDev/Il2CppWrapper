
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Time {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 15> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Single UnityEngine::Time::get_time() */
inline static auto& m0_get_time = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.Double UnityEngine::Time::get_timeAsDouble() */
inline static auto& m1_get_timeAsDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* Unity.IntegerTime.RationalTime UnityEngine::Time::get_timeAsRational() */
inline static auto& m2_get_timeAsRational = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* System.Single UnityEngine::Time::get_timeSinceLevelLoad() */
inline static auto& m3_get_timeSinceLevelLoad = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* System.Single UnityEngine::Time::get_deltaTime() */
inline static auto& m4_get_deltaTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.Single UnityEngine::Time::get_fixedTime() */
inline static auto& m5_get_fixedTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.Single UnityEngine::Time::get_unscaledTime() */
inline static auto& m6_get_unscaledTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.Single UnityEngine::Time::get_unscaledDeltaTime() */
inline static auto& m7_get_unscaledDeltaTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Single UnityEngine::Time::get_fixedDeltaTime() */
inline static auto& m8_get_fixedDeltaTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);
/* System.Single UnityEngine::Time::get_smoothDeltaTime() */
inline static auto& m9_get_smoothDeltaTime = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* System.Single UnityEngine::Time::get_timeScale() */
inline static auto& m10_get_timeScale = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);
/* System.Int32 UnityEngine::Time::get_frameCount() */
inline static auto& m11_get_frameCount = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* System.Single UnityEngine::Time::get_realtimeSinceStartup() */
inline static auto& m12_get_realtimeSinceStartup = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);
/* System.Double UnityEngine::Time::get_realtimeSinceStartupAsDouble() */
inline static auto& m13_get_realtimeSinceStartupAsDouble = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.Void UnityEngine::Time::get_timeAsRational_Injected(Unity.IntegerTime.RationalTime&) */
inline static auto& m14_get_timeAsRational_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);

};

}