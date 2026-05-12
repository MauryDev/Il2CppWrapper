
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Shader {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 16> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* UnityEngine.Shader UnityEngine::Shader::Find(System.String) */
inline static auto& m0_Find = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.Void UnityEngine::Shader::set_maximumLOD(System.Int32) */
inline static auto& m1_set_maximumLOD = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Boolean UnityEngine::Shader::get_isSupported() */
inline static auto& m2_get_isSupported = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void UnityEngine::Shader::set_globalRenderPipeline(System.String) */
inline static auto& m3_set_globalRenderPipeline = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* System.Void UnityEngine::Shader::EnableKeyword(System.String) */
inline static auto& m4_EnableKeyword = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.Void UnityEngine::Shader::DisableKeyword(System.String) */
inline static auto& m5_DisableKeyword = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.Int32 UnityEngine::Shader::TagToID(System.String) */
inline static auto& m6_TagToID = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.Int32 UnityEngine::Shader::PropertyToID(System.String) */
inline static auto& m7_PropertyToID = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Void UnityEngine::Shader::.ctor() */
inline static auto& m8__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Void UnityEngine::Shader::set_maximumLOD_Injected(System.IntPtr, System.Int32) */
inline static auto& m9_set_maximumLOD_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* System.Boolean UnityEngine::Shader::get_isSupported_Injected(System.IntPtr) */
inline static auto& m10_get_isSupported_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);
/* System.Void UnityEngine::Shader::set_globalRenderPipeline_Injected(UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m11_set_globalRenderPipeline_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* System.Void UnityEngine::Shader::EnableKeyword_Injected(UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m12_EnableKeyword_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);
/* System.Void UnityEngine::Shader::DisableKeyword_Injected(UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m13_DisableKeyword_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.Int32 UnityEngine::Shader::TagToID_Injected(UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m14_TagToID_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);
/* System.Int32 UnityEngine::Shader::PropertyToID_Injected(UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m15_PropertyToID_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[15]);

};

}