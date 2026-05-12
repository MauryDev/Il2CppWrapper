
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Input {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 46> methods;
    inline static std::array<Il2CppWrapper::Field*, 1> fields;  
    /* System.Boolean UnityEngine::Input::<simulateTouchEnabled>k__BackingField */
inline static auto& f__simulateTouchEnabled_k__BackingField = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
  
    /* System.Single UnityEngine::Input::GetAxis(System.String) */
inline static auto& m0_GetAxis = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.Single UnityEngine::Input::GetAxisRaw(System.String) */
inline static auto& m1_GetAxisRaw = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* System.Boolean UnityEngine::Input::GetButton(System.String) */
inline static auto& m2_GetButton = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* System.Boolean UnityEngine::Input::GetButtonDown(System.String) */
inline static auto& m3_GetButtonDown = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* System.Boolean UnityEngine::Input::GetButtonUp(System.String) */
inline static auto& m4_GetButtonUp = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.Boolean UnityEngine::Input::GetKeyInt(UnityEngine.KeyCode) */
inline static auto& m5_GetKeyInt = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.Boolean UnityEngine::Input::GetKeyUpInt(UnityEngine.KeyCode) */
inline static auto& m6_GetKeyUpInt = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.Boolean UnityEngine::Input::GetKeyDownInt(UnityEngine.KeyCode) */
inline static auto& m7_GetKeyDownInt = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Boolean UnityEngine::Input::GetMouseButton(System.Int32) */
inline static auto& m8_GetMouseButton = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);
/* System.Boolean UnityEngine::Input::GetMouseButtonDown(System.Int32) */
inline static auto& m9_GetMouseButtonDown = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* System.Boolean UnityEngine::Input::GetMouseButtonUp(System.Int32) */
inline static auto& m10_GetMouseButtonUp = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);
/* UnityEngine.Touch UnityEngine::Input::GetTouch(System.Int32) */
inline static auto& m11_GetTouch = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* UnityEngine.PenData UnityEngine::Input::GetLastPenContactEvent() */
inline static auto& m12_GetLastPenContactEvent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);
/* System.Void UnityEngine::Input::ClearLastPenContactEvent() */
inline static auto& m13_ClearLastPenContactEvent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.Boolean UnityEngine::Input::GetKey(UnityEngine.KeyCode) */
inline static auto& m14_GetKey = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);
/* System.Boolean UnityEngine::Input::GetKey(System.String) */
inline static auto& m15_GetKey = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[15]);
/* System.Boolean UnityEngine::Input::GetKeyUp(UnityEngine.KeyCode) */
inline static auto& m16_GetKeyUp = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[16]);
/* System.Boolean UnityEngine::Input::GetKeyUp(System.String) */
inline static auto& m17_GetKeyUp = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[17]);
/* System.Boolean UnityEngine::Input::GetKeyDown(UnityEngine.KeyCode) */
inline static auto& m18_GetKeyDown = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[18]);
/* System.Boolean UnityEngine::Input::GetKeyDown(System.String) */
inline static auto& m19_GetKeyDown = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[19]);
/* System.Boolean UnityEngine::Input::get_anyKey() */
inline static auto& m20_get_anyKey = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[20]);
/* System.String UnityEngine::Input::get_inputString() */
inline static auto& m21_get_inputString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[21]);
/* UnityEngine.Vector3 UnityEngine::Input::get_mousePosition() */
inline static auto& m22_get_mousePosition = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[22]);
/* UnityEngine.Vector2 UnityEngine::Input::get_mouseScrollDelta() */
inline static auto& m23_get_mouseScrollDelta = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* UnityEngine.IMECompositionMode UnityEngine::Input::get_imeCompositionMode() */
inline static auto& m24_get_imeCompositionMode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* System.Void UnityEngine::Input::set_imeCompositionMode(UnityEngine.IMECompositionMode) */
inline static auto& m25_set_imeCompositionMode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* System.String UnityEngine::Input::get_compositionString() */
inline static auto& m26_get_compositionString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* UnityEngine.Vector2 UnityEngine::Input::get_compositionCursorPos() */
inline static auto& m27_get_compositionCursorPos = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);
/* System.Void UnityEngine::Input::set_compositionCursorPos(UnityEngine.Vector2) */
inline static auto& m28_set_compositionCursorPos = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[28]);
/* System.Boolean UnityEngine::Input::get_simulateTouchEnabled() */
inline static auto& m29_get_simulateTouchEnabled = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);
/* System.Boolean UnityEngine::Input::GetMousePresentInternal() */
inline static auto& m30_GetMousePresentInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[30]);
/* System.Boolean UnityEngine::Input::GetTouchSupportedInternal() */
inline static auto& m31_GetTouchSupportedInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[31]);
/* System.Boolean UnityEngine::Input::get_mousePresent() */
inline static auto& m32_get_mousePresent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[32]);
/* System.Boolean UnityEngine::Input::get_touchSupported() */
inline static auto& m33_get_touchSupported = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[33]);
/* System.Int32 UnityEngine::Input::get_touchCount() */
inline static auto& m34_get_touchCount = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[34]);
/* UnityEngine.DeviceOrientation UnityEngine::Input::get_deviceOrientation() */
inline static auto& m35_get_deviceOrientation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[35]);
/* UnityEngine.Touch[] UnityEngine::Input::get_touches() */
inline static auto& m36_get_touches = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[36]);
/* System.Boolean UnityEngine::Input::CheckDisabled() */
inline static auto& m37_CheckDisabled = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[37]);
/* System.Void UnityEngine::Input::GetTouch_Injected(System.Int32, UnityEngine.Touch&) */
inline static auto& m38_GetTouch_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[38]);
/* System.Void UnityEngine::Input::GetLastPenContactEvent_Injected(UnityEngine.PenData&) */
inline static auto& m39_GetLastPenContactEvent_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[39]);
/* System.Void UnityEngine::Input::get_inputString_Injected(UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m40_get_inputString_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[40]);
/* System.Void UnityEngine::Input::get_mousePosition_Injected(UnityEngine.Vector3&) */
inline static auto& m41_get_mousePosition_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[41]);
/* System.Void UnityEngine::Input::get_mouseScrollDelta_Injected(UnityEngine.Vector2&) */
inline static auto& m42_get_mouseScrollDelta_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[42]);
/* System.Void UnityEngine::Input::get_compositionString_Injected(UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m43_get_compositionString_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[43]);
/* System.Void UnityEngine::Input::get_compositionCursorPos_Injected(UnityEngine.Vector2&) */
inline static auto& m44_get_compositionCursorPos_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[44]);
/* System.Void UnityEngine::Input::set_compositionCursorPos_Injected(UnityEngine.Vector2&) */
inline static auto& m45_set_compositionCursorPos_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[45]);

};

}