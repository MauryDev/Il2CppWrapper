
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Physics {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 62> methods;
    inline static std::array<Il2CppWrapper::Field*, 5> fields;  
    /* System.Action<UnityEngine.PhysicsScene,Unity.Collections.NativeArray<UnityEngine.ModifiableContactPair>> UnityEngine::Physics::ContactModifyEvent */
inline static auto& f_ContactModifyEvent = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.Action<UnityEngine.PhysicsScene,Unity.Collections.NativeArray<UnityEngine.ModifiableContactPair>> UnityEngine::Physics::ContactModifyEventCCD */
inline static auto& f_ContactModifyEventCCD = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
/* System.Action<UnityEngine.PhysicsScene,System.IntPtr,System.Int32,System.Boolean> UnityEngine::Physics::GenericContactModifyEvent */
inline static auto& f_GenericContactModifyEvent = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[2]);
/* UnityEngine.Physics.ContactEventDelegate UnityEngine::Physics::ContactEvent */
inline static auto& f_ContactEvent = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[3]);
/* UnityEngine.Collision UnityEngine::Physics::s_ReusableCollision */
inline static auto& f_s_ReusableCollision = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[4]);
  
    /* System.Void UnityEngine::Physics::OnSceneContactModify(UnityEngine.PhysicsScene, System.IntPtr, System.Int32, System.Boolean) */
inline static auto& m0_OnSceneContactModify = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.Void UnityEngine::Physics::PhysXOnSceneContactModify(UnityEngine.PhysicsScene, System.IntPtr, System.Int32, System.Boolean) */
inline static auto& m1_PhysXOnSceneContactModify = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* System.Boolean UnityEngine::Physics::get_invokeCollisionCallbacks() */
inline static auto& m2_get_invokeCollisionCallbacks = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* UnityEngine.PhysicsScene UnityEngine::Physics::get_defaultPhysicsScene() */
inline static auto& m3_get_defaultPhysicsScene = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* System.Boolean UnityEngine::Physics::Raycast(UnityEngine.Vector3, UnityEngine.Vector3, System.Single, System.Int32, UnityEngine.QueryTriggerInteraction) */
inline static auto& m4_Raycast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.Boolean UnityEngine::Physics::Raycast(UnityEngine.Vector3, UnityEngine.Vector3, System.Single, System.Int32) */
inline static auto& m5_Raycast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.Boolean UnityEngine::Physics::Raycast(UnityEngine.Vector3, UnityEngine.Vector3, System.Single) */
inline static auto& m6_Raycast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.Boolean UnityEngine::Physics::Raycast(UnityEngine.Vector3, UnityEngine.Vector3) */
inline static auto& m7_Raycast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Boolean UnityEngine::Physics::Raycast(UnityEngine.Vector3, UnityEngine.Vector3, UnityEngine.RaycastHit&, System.Single, System.Int32, UnityEngine.QueryTriggerInteraction) */
inline static auto& m8_Raycast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);
/* System.Boolean UnityEngine::Physics::Raycast(UnityEngine.Vector3, UnityEngine.Vector3, UnityEngine.RaycastHit&, System.Single, System.Int32) */
inline static auto& m9_Raycast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* System.Boolean UnityEngine::Physics::Raycast(UnityEngine.Vector3, UnityEngine.Vector3, UnityEngine.RaycastHit&, System.Single) */
inline static auto& m10_Raycast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);
/* System.Boolean UnityEngine::Physics::Raycast(UnityEngine.Vector3, UnityEngine.Vector3, UnityEngine.RaycastHit&) */
inline static auto& m11_Raycast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* System.Boolean UnityEngine::Physics::Raycast(UnityEngine.Ray, System.Single, System.Int32, UnityEngine.QueryTriggerInteraction) */
inline static auto& m12_Raycast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);
/* System.Boolean UnityEngine::Physics::Raycast(UnityEngine.Ray, System.Single, System.Int32) */
inline static auto& m13_Raycast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.Boolean UnityEngine::Physics::Raycast(UnityEngine.Ray, System.Single) */
inline static auto& m14_Raycast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);
/* System.Boolean UnityEngine::Physics::Raycast(UnityEngine.Ray) */
inline static auto& m15_Raycast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[15]);
/* System.Boolean UnityEngine::Physics::Raycast(UnityEngine.Ray, UnityEngine.RaycastHit&, System.Single, System.Int32, UnityEngine.QueryTriggerInteraction) */
inline static auto& m16_Raycast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[16]);
/* System.Boolean UnityEngine::Physics::Raycast(UnityEngine.Ray, UnityEngine.RaycastHit&, System.Single, System.Int32) */
inline static auto& m17_Raycast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[17]);
/* System.Boolean UnityEngine::Physics::Raycast(UnityEngine.Ray, UnityEngine.RaycastHit&, System.Single) */
inline static auto& m18_Raycast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[18]);
/* System.Boolean UnityEngine::Physics::Raycast(UnityEngine.Ray, UnityEngine.RaycastHit&) */
inline static auto& m19_Raycast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[19]);
/* UnityEngine.RaycastHit[] UnityEngine::Physics::Internal_RaycastAll(UnityEngine.PhysicsScene, UnityEngine.Ray, System.Single, System.Int32, UnityEngine.QueryTriggerInteraction) */
inline static auto& m20_Internal_RaycastAll = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[20]);
/* UnityEngine.RaycastHit[] UnityEngine::Physics::RaycastAll(UnityEngine.Vector3, UnityEngine.Vector3, System.Single, System.Int32, UnityEngine.QueryTriggerInteraction) */
inline static auto& m21_RaycastAll = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[21]);
/* UnityEngine.RaycastHit[] UnityEngine::Physics::RaycastAll(UnityEngine.Vector3, UnityEngine.Vector3, System.Single, System.Int32) */
inline static auto& m22_RaycastAll = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[22]);
/* UnityEngine.RaycastHit[] UnityEngine::Physics::RaycastAll(UnityEngine.Vector3, UnityEngine.Vector3, System.Single) */
inline static auto& m23_RaycastAll = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* UnityEngine.RaycastHit[] UnityEngine::Physics::RaycastAll(UnityEngine.Vector3, UnityEngine.Vector3) */
inline static auto& m24_RaycastAll = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* UnityEngine.RaycastHit[] UnityEngine::Physics::RaycastAll(UnityEngine.Ray, System.Single, System.Int32, UnityEngine.QueryTriggerInteraction) */
inline static auto& m25_RaycastAll = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* UnityEngine.RaycastHit[] UnityEngine::Physics::RaycastAll(UnityEngine.Ray, System.Single, System.Int32) */
inline static auto& m26_RaycastAll = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* UnityEngine.RaycastHit[] UnityEngine::Physics::RaycastAll(UnityEngine.Ray, System.Single) */
inline static auto& m27_RaycastAll = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);
/* UnityEngine.RaycastHit[] UnityEngine::Physics::RaycastAll(UnityEngine.Ray) */
inline static auto& m28_RaycastAll = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[28]);
/* System.Int32 UnityEngine::Physics::RaycastNonAlloc(UnityEngine.Ray, UnityEngine.RaycastHit[], System.Single, System.Int32, UnityEngine.QueryTriggerInteraction) */
inline static auto& m29_RaycastNonAlloc = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);
/* System.Int32 UnityEngine::Physics::RaycastNonAlloc(UnityEngine.Ray, UnityEngine.RaycastHit[], System.Single, System.Int32) */
inline static auto& m30_RaycastNonAlloc = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[30]);
/* System.Int32 UnityEngine::Physics::RaycastNonAlloc(UnityEngine.Ray, UnityEngine.RaycastHit[], System.Single) */
inline static auto& m31_RaycastNonAlloc = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[31]);
/* System.Int32 UnityEngine::Physics::RaycastNonAlloc(UnityEngine.Ray, UnityEngine.RaycastHit[]) */
inline static auto& m32_RaycastNonAlloc = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[32]);
/* System.Int32 UnityEngine::Physics::RaycastNonAlloc(UnityEngine.Vector3, UnityEngine.Vector3, UnityEngine.RaycastHit[], System.Single, System.Int32, UnityEngine.QueryTriggerInteraction) */
inline static auto& m33_RaycastNonAlloc = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[33]);
/* System.Int32 UnityEngine::Physics::RaycastNonAlloc(UnityEngine.Vector3, UnityEngine.Vector3, UnityEngine.RaycastHit[], System.Single, System.Int32) */
inline static auto& m34_RaycastNonAlloc = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[34]);
/* System.Int32 UnityEngine::Physics::RaycastNonAlloc(UnityEngine.Vector3, UnityEngine.Vector3, UnityEngine.RaycastHit[], System.Single) */
inline static auto& m35_RaycastNonAlloc = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[35]);
/* System.Int32 UnityEngine::Physics::RaycastNonAlloc(UnityEngine.Vector3, UnityEngine.Vector3, UnityEngine.RaycastHit[]) */
inline static auto& m36_RaycastNonAlloc = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[36]);
/* System.Boolean UnityEngine::Physics::get_reuseCollisionCallbacks() */
inline static auto& m37_get_reuseCollisionCallbacks = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[37]);
/* System.Int32 UnityEngine::Physics::OverlapSphereNonAlloc(UnityEngine.Vector3, System.Single, UnityEngine.Collider[], System.Int32, UnityEngine.QueryTriggerInteraction) */
inline static auto& m38_OverlapSphereNonAlloc = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[38]);
/* System.Int32 UnityEngine::Physics::OverlapSphereNonAlloc(UnityEngine.Vector3, System.Single, UnityEngine.Collider[], System.Int32) */
inline static auto& m39_OverlapSphereNonAlloc = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[39]);
/* System.Int32 UnityEngine::Physics::SphereCastNonAlloc(UnityEngine.Vector3, System.Single, UnityEngine.Vector3, UnityEngine.RaycastHit[], System.Single, System.Int32, UnityEngine.QueryTriggerInteraction) */
inline static auto& m40_SphereCastNonAlloc = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[40]);
/* System.Int32 UnityEngine::Physics::SphereCastNonAlloc(UnityEngine.Ray, System.Single, UnityEngine.RaycastHit[], System.Single, System.Int32, UnityEngine.QueryTriggerInteraction) */
inline static auto& m41_SphereCastNonAlloc = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[41]);
/* System.Int32 UnityEngine::Physics::SphereCastNonAlloc(UnityEngine.Ray, System.Single, UnityEngine.RaycastHit[], System.Single, System.Int32) */
inline static auto& m42_SphereCastNonAlloc = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[42]);
/* UnityEngine.Collider[] UnityEngine::Physics::OverlapBox_Internal(UnityEngine.PhysicsScene, UnityEngine.Vector3, UnityEngine.Vector3, UnityEngine.Quaternion, System.Int32, UnityEngine.QueryTriggerInteraction) */
inline static auto& m43_OverlapBox_Internal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[43]);
/* UnityEngine.Collider[] UnityEngine::Physics::OverlapBox(UnityEngine.Vector3, UnityEngine.Vector3, UnityEngine.Quaternion, System.Int32, UnityEngine.QueryTriggerInteraction) */
inline static auto& m44_OverlapBox = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[44]);
/* UnityEngine.Collider[] UnityEngine::Physics::OverlapBox(UnityEngine.Vector3, UnityEngine.Vector3, UnityEngine.Quaternion) */
inline static auto& m45_OverlapBox = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[45]);
/* UnityEngine.Collider UnityEngine::Physics::GetColliderByInstanceID(UnityEngine.EntityId) */
inline static auto& m46_GetColliderByInstanceID = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[46]);
/* UnityEngine.Component UnityEngine::Physics::GetBodyByInstanceID(UnityEngine.EntityId) */
inline static auto& m47_GetBodyByInstanceID = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[47]);
/* System.Void UnityEngine::Physics::SendOnCollisionEnter(UnityEngine.Component, UnityEngine.Collision) */
inline static auto& m48_SendOnCollisionEnter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[48]);
/* System.Void UnityEngine::Physics::SendOnCollisionStay(UnityEngine.Component, UnityEngine.Collision) */
inline static auto& m49_SendOnCollisionStay = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[49]);
/* System.Void UnityEngine::Physics::SendOnCollisionExit(UnityEngine.Component, UnityEngine.Collision) */
inline static auto& m50_SendOnCollisionExit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[50]);
/* System.Void UnityEngine::Physics::OnSceneContact(UnityEngine.PhysicsScene, System.IntPtr, System.Int32) */
inline static auto& m51_OnSceneContact = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[51]);
/* System.Void UnityEngine::Physics::ReportContacts(Unity.Collections.NativeArray.ReadOnly<UnityEngine.ContactPairHeader>) */
inline static auto& m52_ReportContacts = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[52]);
/* UnityEngine.Collision UnityEngine::Physics::GetCollisionToReport(UnityEngine.ContactPairHeader&, UnityEngine.ContactPair&, System.Boolean) */
inline static auto& m53_GetCollisionToReport = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[53]);
/* System.Void UnityEngine::Physics::.cctor() */
inline static auto& m54__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[54]);
/* System.Void UnityEngine::Physics::Internal_RaycastAll_Injected(UnityEngine.PhysicsScene&, UnityEngine.Ray&, System.Single, System.Int32, UnityEngine.QueryTriggerInteraction, UnityEngine.Bindings.BlittableArrayWrapper&) */
inline static auto& m55_Internal_RaycastAll_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[55]);
/* UnityEngine.Collider[] UnityEngine::Physics::OverlapBox_Internal_Injected(UnityEngine.PhysicsScene&, UnityEngine.Vector3&, UnityEngine.Vector3&, UnityEngine.Quaternion&, System.Int32, UnityEngine.QueryTriggerInteraction) */
inline static auto& m56_OverlapBox_Internal_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[56]);
/* System.IntPtr UnityEngine::Physics::GetColliderByInstanceID_Injected(UnityEngine.EntityId&) */
inline static auto& m57_GetColliderByInstanceID_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[57]);
/* System.IntPtr UnityEngine::Physics::GetBodyByInstanceID_Injected(UnityEngine.EntityId&) */
inline static auto& m58_GetBodyByInstanceID_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[58]);
/* System.Void UnityEngine::Physics::SendOnCollisionEnter_Injected(System.IntPtr, UnityEngine.Collision) */
inline static auto& m59_SendOnCollisionEnter_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[59]);
/* System.Void UnityEngine::Physics::SendOnCollisionStay_Injected(System.IntPtr, UnityEngine.Collision) */
inline static auto& m60_SendOnCollisionStay_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[60]);
/* System.Void UnityEngine::Physics::SendOnCollisionExit_Injected(System.IntPtr, UnityEngine.Collision) */
inline static auto& m61_SendOnCollisionExit_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[61]);

};

}