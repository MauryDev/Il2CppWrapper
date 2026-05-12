
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine::UI {

struct Button {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 7> methods;
    inline static std::array<Il2CppWrapper::Field*, 1> fields;  
    /* UnityEngine.UI.Button.ButtonClickedEvent UnityEngine.UI::Button::m_OnClick */
inline static auto& f_m_OnClick = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
  
    /* System.Void UnityEngine.UI::Button::.ctor() */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* UnityEngine.UI.Button.ButtonClickedEvent UnityEngine.UI::Button::get_onClick() */
inline static auto& m1_get_onClick = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void UnityEngine.UI::Button::set_onClick(UnityEngine.UI.Button.ButtonClickedEvent) */
inline static auto& m2_set_onClick = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void UnityEngine.UI::Button::Press() */
inline static auto& m3_Press = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void UnityEngine.UI::Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData) */
inline static auto& m4_OnPointerClick = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[4]);
/* System.Void UnityEngine.UI::Button::OnSubmit(UnityEngine.EventSystems.BaseEventData) */
inline static auto& m5_OnSubmit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Collections.IEnumerator UnityEngine.UI::Button::OnFinishSubmit() */
inline static auto& m6_OnFinishSubmit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);

};

}