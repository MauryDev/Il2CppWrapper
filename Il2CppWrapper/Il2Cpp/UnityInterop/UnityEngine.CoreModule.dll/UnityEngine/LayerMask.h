
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct LayerMask {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 6> methods;
    inline static std::array<Il2CppWrapper::Field*, 1> fields;  
    /* System.Int32 UnityEngine::LayerMask::m_Mask */
inline static auto& f_m_Mask = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
  
    /* System.Int32 UnityEngine::LayerMask::op_Implicit(UnityEngine.LayerMask) */
inline static auto& m0_op_Implicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* UnityEngine.LayerMask UnityEngine::LayerMask::op_Implicit(System.Int32) */
inline static auto& m1_op_Implicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* System.String UnityEngine::LayerMask::LayerToName(System.Int32) */
inline static auto& m2_LayerToName = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* System.Int32 UnityEngine::LayerMask::NameToLayer(System.String) */
inline static auto& m3_NameToLayer = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* System.Void UnityEngine::LayerMask::LayerToName_Injected(System.Int32, UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m4_LayerToName_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.Int32 UnityEngine::LayerMask::NameToLayer_Injected(UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m5_NameToLayer_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);

};

}