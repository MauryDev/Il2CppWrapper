
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Rigidbody {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 10> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* UnityEngine.Vector3 UnityEngine::Rigidbody::get_position() */
inline static auto& m0_get_position = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* UnityEngine.Quaternion UnityEngine::Rigidbody::get_rotation() */
inline static auto& m1_get_rotation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void UnityEngine::Rigidbody::set_rotation(UnityEngine.Quaternion) */
inline static auto& m2_set_rotation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void UnityEngine::Rigidbody::MovePosition(UnityEngine.Vector3) */
inline static auto& m3_MovePosition = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void UnityEngine::Rigidbody::MoveRotation(UnityEngine.Quaternion) */
inline static auto& m4_MoveRotation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Void UnityEngine::Rigidbody::get_position_Injected(System.IntPtr, UnityEngine.Vector3&) */
inline static auto& m5_get_position_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.Void UnityEngine::Rigidbody::get_rotation_Injected(System.IntPtr, UnityEngine.Quaternion&) */
inline static auto& m6_get_rotation_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.Void UnityEngine::Rigidbody::set_rotation_Injected(System.IntPtr, UnityEngine.Quaternion&) */
inline static auto& m7_set_rotation_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Void UnityEngine::Rigidbody::MovePosition_Injected(System.IntPtr, UnityEngine.Vector3&) */
inline static auto& m8_MovePosition_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);
/* System.Void UnityEngine::Rigidbody::MoveRotation_Injected(System.IntPtr, UnityEngine.Quaternion&) */
inline static auto& m9_MoveRotation_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);

};

}