
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Collider {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 15> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Void UnityEngine::Collider::set_enabled(System.Boolean) */
inline static auto& m0_set_enabled = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Boolean UnityEngine::Collider::get_isTrigger() */
inline static auto& m1_get_isTrigger = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void UnityEngine::Collider::set_isTrigger(System.Boolean) */
inline static auto& m2_set_isTrigger = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* UnityEngine.Bounds UnityEngine::Collider::get_bounds() */
inline static auto& m3_get_bounds = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* UnityEngine.RaycastHit UnityEngine::Collider::Raycast(UnityEngine.Ray, System.Single, System.Boolean&) */
inline static auto& m4_Raycast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Boolean UnityEngine::Collider::Raycast(UnityEngine.Ray, UnityEngine.RaycastHit&, System.Single) */
inline static auto& m5_Raycast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Void UnityEngine::Collider::Internal_ClosestPointOnBounds(UnityEngine.Vector3, UnityEngine.Vector3&, System.Single&) */
inline static auto& m6_Internal_ClosestPointOnBounds = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* UnityEngine.Vector3 UnityEngine::Collider::ClosestPointOnBounds(UnityEngine.Vector3) */
inline static auto& m7_ClosestPointOnBounds = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.Void UnityEngine::Collider::.ctor() */
inline static auto& m8__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Void UnityEngine::Collider::set_enabled_Injected(System.IntPtr, System.Boolean) */
inline static auto& m9_set_enabled_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* System.Boolean UnityEngine::Collider::get_isTrigger_Injected(System.IntPtr) */
inline static auto& m10_get_isTrigger_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);
/* System.Void UnityEngine::Collider::set_isTrigger_Injected(System.IntPtr, System.Boolean) */
inline static auto& m11_set_isTrigger_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* System.Void UnityEngine::Collider::get_bounds_Injected(System.IntPtr, UnityEngine.Bounds&) */
inline static auto& m12_get_bounds_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);
/* System.Void UnityEngine::Collider::Raycast_Injected(System.IntPtr, UnityEngine.Ray&, System.Single, System.Boolean&, UnityEngine.RaycastHit&) */
inline static auto& m13_Raycast_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.Void UnityEngine::Collider::Internal_ClosestPointOnBounds_Injected(System.IntPtr, UnityEngine.Vector3&, UnityEngine.Vector3&, System.Single&) */
inline static auto& m14_Internal_ClosestPointOnBounds_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);

};

}