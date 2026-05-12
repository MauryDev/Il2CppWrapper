
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Behaviour {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 7> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Boolean UnityEngine::Behaviour::get_enabled() */
inline static auto& m0_get_enabled = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void UnityEngine::Behaviour::set_enabled(System.Boolean) */
inline static auto& m1_set_enabled = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Boolean UnityEngine::Behaviour::get_isActiveAndEnabled() */
inline static auto& m2_get_isActiveAndEnabled = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void UnityEngine::Behaviour::.ctor() */
inline static auto& m3__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Boolean UnityEngine::Behaviour::get_enabled_Injected(System.IntPtr) */
inline static auto& m4_get_enabled_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.Void UnityEngine::Behaviour::set_enabled_Injected(System.IntPtr, System.Boolean) */
inline static auto& m5_set_enabled_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.Boolean UnityEngine::Behaviour::get_isActiveAndEnabled_Injected(System.IntPtr) */
inline static auto& m6_get_isActiveAndEnabled_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);

};

}