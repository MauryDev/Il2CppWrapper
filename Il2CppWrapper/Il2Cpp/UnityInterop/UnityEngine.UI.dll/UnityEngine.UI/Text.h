
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine::UI {

struct Text {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 49> methods;
    inline static std::array<Il2CppWrapper::Field*, 7> fields;  
    /* UnityEngine.UI.FontData UnityEngine.UI::Text::m_FontData */
inline static auto& f_m_FontData = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* System.String UnityEngine.UI::Text::m_Text */
inline static auto& f_m_Text = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* UnityEngine.TextGenerator UnityEngine.UI::Text::m_TextCache */
inline static auto& f_m_TextCache = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[2]);
/* UnityEngine.TextGenerator UnityEngine.UI::Text::m_TextCacheForLayout */
inline static auto& f_m_TextCacheForLayout = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[3]);
/* UnityEngine.Material UnityEngine.UI::Text::s_DefaultText */
inline static auto& f_s_DefaultText = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[4]);
/* System.Boolean UnityEngine.UI::Text::m_DisableFontTextureRebuiltCallback */
inline static auto& f_m_DisableFontTextureRebuiltCallback = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[5]);
/* UnityEngine.UIVertex[] UnityEngine.UI::Text::m_TempVerts */
inline static auto& f_m_TempVerts = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[6]);
  
    /* System.Void UnityEngine.UI::Text::.ctor() */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* UnityEngine.TextGenerator UnityEngine.UI::Text::get_cachedTextGenerator() */
inline static auto& m1_get_cachedTextGenerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* UnityEngine.TextGenerator UnityEngine.UI::Text::get_cachedTextGeneratorForLayout() */
inline static auto& m2_get_cachedTextGeneratorForLayout = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* UnityEngine.Texture UnityEngine.UI::Text::get_mainTexture() */
inline static auto& m3_get_mainTexture = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* System.Void UnityEngine.UI::Text::FontTextureChanged() */
inline static auto& m4_FontTextureChanged = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* UnityEngine.Font UnityEngine.UI::Text::get_font() */
inline static auto& m5_get_font = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Void UnityEngine.UI::Text::set_font(UnityEngine.Font) */
inline static auto& m6_set_font = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.String UnityEngine.UI::Text::get_text() */
inline static auto& m7_get_text = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);
/* System.Void UnityEngine.UI::Text::set_text(System.String) */
inline static auto& m8_set_text = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[8]);
/* System.Boolean UnityEngine.UI::Text::get_supportRichText() */
inline static auto& m9_get_supportRichText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.Void UnityEngine.UI::Text::set_supportRichText(System.Boolean) */
inline static auto& m10_set_supportRichText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Boolean UnityEngine.UI::Text::get_resizeTextForBestFit() */
inline static auto& m11_get_resizeTextForBestFit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* System.Void UnityEngine.UI::Text::set_resizeTextForBestFit(System.Boolean) */
inline static auto& m12_set_resizeTextForBestFit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.Int32 UnityEngine.UI::Text::get_resizeTextMinSize() */
inline static auto& m13_get_resizeTextMinSize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* System.Void UnityEngine.UI::Text::set_resizeTextMinSize(System.Int32) */
inline static auto& m14_set_resizeTextMinSize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* System.Int32 UnityEngine.UI::Text::get_resizeTextMaxSize() */
inline static auto& m15_get_resizeTextMaxSize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* System.Void UnityEngine.UI::Text::set_resizeTextMaxSize(System.Int32) */
inline static auto& m16_set_resizeTextMaxSize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* UnityEngine.TextAnchor UnityEngine.UI::Text::get_alignment() */
inline static auto& m17_get_alignment = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.Void UnityEngine.UI::Text::set_alignment(UnityEngine.TextAnchor) */
inline static auto& m18_set_alignment = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* System.Boolean UnityEngine.UI::Text::get_alignByGeometry() */
inline static auto& m19_get_alignByGeometry = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.Void UnityEngine.UI::Text::set_alignByGeometry(System.Boolean) */
inline static auto& m20_set_alignByGeometry = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.Int32 UnityEngine.UI::Text::get_fontSize() */
inline static auto& m21_get_fontSize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* System.Void UnityEngine.UI::Text::set_fontSize(System.Int32) */
inline static auto& m22_set_fontSize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* UnityEngine.HorizontalWrapMode UnityEngine.UI::Text::get_horizontalOverflow() */
inline static auto& m23_get_horizontalOverflow = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[23]);
/* System.Void UnityEngine.UI::Text::set_horizontalOverflow(UnityEngine.HorizontalWrapMode) */
inline static auto& m24_set_horizontalOverflow = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[24]);
/* UnityEngine.VerticalWrapMode UnityEngine.UI::Text::get_verticalOverflow() */
inline static auto& m25_get_verticalOverflow = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[25]);
/* System.Void UnityEngine.UI::Text::set_verticalOverflow(UnityEngine.VerticalWrapMode) */
inline static auto& m26_set_verticalOverflow = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[26]);
/* System.Single UnityEngine.UI::Text::get_lineSpacing() */
inline static auto& m27_get_lineSpacing = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[27]);
/* System.Void UnityEngine.UI::Text::set_lineSpacing(System.Single) */
inline static auto& m28_set_lineSpacing = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[28]);
/* UnityEngine.FontStyle UnityEngine.UI::Text::get_fontStyle() */
inline static auto& m29_get_fontStyle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[29]);
/* System.Void UnityEngine.UI::Text::set_fontStyle(UnityEngine.FontStyle) */
inline static auto& m30_set_fontStyle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[30]);
/* System.Single UnityEngine.UI::Text::get_pixelsPerUnit() */
inline static auto& m31_get_pixelsPerUnit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[31]);
/* System.Void UnityEngine.UI::Text::OnEnable() */
inline static auto& m32_OnEnable = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[32]);
/* System.Void UnityEngine.UI::Text::OnDisable() */
inline static auto& m33_OnDisable = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[33]);
/* System.Void UnityEngine.UI::Text::UpdateGeometry() */
inline static auto& m34_UpdateGeometry = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[34]);
/* System.Void UnityEngine.UI::Text::AssignDefaultFont() */
inline static auto& m35_AssignDefaultFont = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[35]);
/* System.Void UnityEngine.UI::Text::AssignDefaultFontIfNecessary() */
inline static auto& m36_AssignDefaultFontIfNecessary = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[36]);
/* UnityEngine.TextGenerationSettings UnityEngine.UI::Text::GetGenerationSettings(UnityEngine.Vector2) */
inline static auto& m37_GetGenerationSettings = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[37]);
/* UnityEngine.Vector2 UnityEngine.UI::Text::GetTextAnchorPivot(UnityEngine.TextAnchor) */
inline static auto& m38_GetTextAnchorPivot = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[38]);
/* System.Void UnityEngine.UI::Text::OnPopulateMesh(UnityEngine.UI.VertexHelper) */
inline static auto& m39_OnPopulateMesh = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[39]);
/* System.Void UnityEngine.UI::Text::CalculateLayoutInputHorizontal() */
inline static auto& m40_CalculateLayoutInputHorizontal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[40]);
/* System.Void UnityEngine.UI::Text::CalculateLayoutInputVertical() */
inline static auto& m41_CalculateLayoutInputVertical = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[41]);
/* System.Single UnityEngine.UI::Text::get_minWidth() */
inline static auto& m42_get_minWidth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[42]);
/* System.Single UnityEngine.UI::Text::get_preferredWidth() */
inline static auto& m43_get_preferredWidth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[43]);
/* System.Single UnityEngine.UI::Text::get_flexibleWidth() */
inline static auto& m44_get_flexibleWidth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[44]);
/* System.Single UnityEngine.UI::Text::get_minHeight() */
inline static auto& m45_get_minHeight = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[45]);
/* System.Single UnityEngine.UI::Text::get_preferredHeight() */
inline static auto& m46_get_preferredHeight = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[46]);
/* System.Single UnityEngine.UI::Text::get_flexibleHeight() */
inline static auto& m47_get_flexibleHeight = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[47]);
/* System.Int32 UnityEngine.UI::Text::get_layoutPriority() */
inline static auto& m48_get_layoutPriority = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[48]);

};

}