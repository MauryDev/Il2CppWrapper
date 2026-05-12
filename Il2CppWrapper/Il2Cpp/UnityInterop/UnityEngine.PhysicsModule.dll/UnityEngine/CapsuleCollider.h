
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct CapsuleCollider {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 13> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* UnityEngine.Vector3 UnityEngine::CapsuleCollider::get_center() */
inline static auto& m0_get_center = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void UnityEngine::CapsuleCollider::set_center(UnityEngine.Vector3) */
inline static auto& m1_set_center = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Single UnityEngine::CapsuleCollider::get_radius() */
inline static auto& m2_get_radius = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void UnityEngine::CapsuleCollider::set_radius(System.Single) */
inline static auto& m3_set_radius = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Single UnityEngine::CapsuleCollider::get_height() */
inline static auto& m4_get_height = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Void UnityEngine::CapsuleCollider::set_height(System.Single) */
inline static auto& m5_set_height = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Void UnityEngine::CapsuleCollider::.ctor() */
inline static auto& m6__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.Void UnityEngine::CapsuleCollider::get_center_Injected(System.IntPtr, UnityEngine.Vector3&) */
inline static auto& m7_get_center_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Void UnityEngine::CapsuleCollider::set_center_Injected(System.IntPtr, UnityEngine.Vector3&) */
inline static auto& m8_set_center_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);
/* System.Single UnityEngine::CapsuleCollider::get_radius_Injected(System.IntPtr) */
inline static auto& m9_get_radius_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* System.Void UnityEngine::CapsuleCollider::set_radius_Injected(System.IntPtr, System.Single) */
inline static auto& m10_set_radius_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);
/* System.Single UnityEngine::CapsuleCollider::get_height_Injected(System.IntPtr) */
inline static auto& m11_get_height_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* System.Void UnityEngine::CapsuleCollider::set_height_Injected(System.IntPtr, System.Single) */
inline static auto& m12_set_height_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);

};

}