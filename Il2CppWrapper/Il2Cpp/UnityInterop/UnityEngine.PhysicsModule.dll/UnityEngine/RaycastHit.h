
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct RaycastHit {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 4> methods;
    inline static std::array<Il2CppWrapper::Field*, 6> fields;  
    /* UnityEngine.Vector3 UnityEngine::RaycastHit::m_Point */
inline static auto& f_m_Point = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* UnityEngine.Vector3 UnityEngine::RaycastHit::m_Normal */
inline static auto& f_m_Normal = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* System.UInt32 UnityEngine::RaycastHit::m_FaceID */
inline static auto& f_m_FaceID = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[2]);
/* System.Single UnityEngine::RaycastHit::m_Distance */
inline static auto& f_m_Distance = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[3]);
/* UnityEngine.Vector2 UnityEngine::RaycastHit::m_UV */
inline static auto& f_m_UV = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[4]);
/* System.Int32 UnityEngine::RaycastHit::m_Collider */
inline static auto& f_m_Collider = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[5]);
  
    /* UnityEngine.Collider UnityEngine::RaycastHit::get_collider() */
inline static auto& m0_get_collider = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* UnityEngine.Vector3 UnityEngine::RaycastHit::get_point() */
inline static auto& m1_get_point = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* UnityEngine.Vector3 UnityEngine::RaycastHit::get_normal() */
inline static auto& m2_get_normal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Single UnityEngine::RaycastHit::get_distance() */
inline static auto& m3_get_distance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);

};

}