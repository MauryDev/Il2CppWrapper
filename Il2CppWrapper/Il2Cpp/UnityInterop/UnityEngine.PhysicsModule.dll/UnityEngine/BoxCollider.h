
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct BoxCollider {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 9> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* UnityEngine.Vector3 UnityEngine::BoxCollider::get_center() */
inline static auto& m0_get_center = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void UnityEngine::BoxCollider::set_center(UnityEngine.Vector3) */
inline static auto& m1_set_center = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* UnityEngine.Vector3 UnityEngine::BoxCollider::get_size() */
inline static auto& m2_get_size = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void UnityEngine::BoxCollider::set_size(UnityEngine.Vector3) */
inline static auto& m3_set_size = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void UnityEngine::BoxCollider::.ctor() */
inline static auto& m4__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Void UnityEngine::BoxCollider::get_center_Injected(System.IntPtr, UnityEngine.Vector3&) */
inline static auto& m5_get_center_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.Void UnityEngine::BoxCollider::set_center_Injected(System.IntPtr, UnityEngine.Vector3&) */
inline static auto& m6_set_center_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.Void UnityEngine::BoxCollider::get_size_Injected(System.IntPtr, UnityEngine.Vector3&) */
inline static auto& m7_get_size_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Void UnityEngine::BoxCollider::set_size_Injected(System.IntPtr, UnityEngine.Vector3&) */
inline static auto& m8_set_size_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);

};

}