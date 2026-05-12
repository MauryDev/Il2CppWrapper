
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine::UI {

struct Image {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 81> methods;
    inline static std::array<Il2CppWrapper::Field*, 23> fields;  
    /* UnityEngine.Material UnityEngine.UI::Image::s_ETC1DefaultUI */
inline static auto& f_s_ETC1DefaultUI = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* UnityEngine.Sprite UnityEngine.UI::Image::m_Sprite */
inline static auto& f_m_Sprite = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* UnityEngine.Sprite UnityEngine.UI::Image::m_OverrideSprite */
inline static auto& f_m_OverrideSprite = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[2]);
/* UnityEngine.UI.Image.Type UnityEngine.UI::Image::m_Type */
inline static auto& f_m_Type = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[3]);
/* System.Boolean UnityEngine.UI::Image::m_PreserveAspect */
inline static auto& f_m_PreserveAspect = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[4]);
/* System.Boolean UnityEngine.UI::Image::m_FillCenter */
inline static auto& f_m_FillCenter = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[5]);
/* UnityEngine.UI.Image.FillMethod UnityEngine.UI::Image::m_FillMethod */
inline static auto& f_m_FillMethod = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[6]);
/* System.Single UnityEngine.UI::Image::m_FillAmount */
inline static auto& f_m_FillAmount = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[7]);
/* System.Boolean UnityEngine.UI::Image::m_FillClockwise */
inline static auto& f_m_FillClockwise = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[8]);
/* System.Int32 UnityEngine.UI::Image::m_FillOrigin */
inline static auto& f_m_FillOrigin = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[9]);
/* System.Single UnityEngine.UI::Image::m_AlphaHitTestMinimumThreshold */
inline static auto& f_m_AlphaHitTestMinimumThreshold = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[10]);
/* System.Boolean UnityEngine.UI::Image::m_Tracked */
inline static auto& f_m_Tracked = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[11]);
/* System.Boolean UnityEngine.UI::Image::m_UseSpriteMesh */
inline static auto& f_m_UseSpriteMesh = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[12]);
/* System.Single UnityEngine.UI::Image::m_PixelsPerUnitMultiplier */
inline static auto& f_m_PixelsPerUnitMultiplier = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[13]);
/* System.Single UnityEngine.UI::Image::m_CachedReferencePixelsPerUnit */
inline static auto& f_m_CachedReferencePixelsPerUnit = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[14]);
/* UnityEngine.SecondarySpriteTexture[] UnityEngine.UI::Image::s_TempNewSecondaryTextures */
inline static auto& f_s_TempNewSecondaryTextures = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[15]);
/* UnityEngine.SecondarySpriteTexture[] UnityEngine.UI::Image::m_SecondaryTextures */
inline static auto& f_m_SecondaryTextures = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[16]);
/* UnityEngine.Vector2[] UnityEngine.UI::Image::s_VertScratch */
inline static auto& f_s_VertScratch = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[17]);
/* UnityEngine.Vector2[] UnityEngine.UI::Image::s_UVScratch */
inline static auto& f_s_UVScratch = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[18]);
/* UnityEngine.Vector3[] UnityEngine.UI::Image::s_Xy */
inline static auto& f_s_Xy = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[19]);
/* UnityEngine.Vector3[] UnityEngine.UI::Image::s_Uv */
inline static auto& f_s_Uv = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[20]);
/* System.Collections.Generic.List<UnityEngine.UI.Image> UnityEngine.UI::Image::m_TrackedTexturelessImages */
inline static auto& f_m_TrackedTexturelessImages = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[21]);
/* System.Boolean UnityEngine.UI::Image::s_Initialized */
inline static auto& f_s_Initialized = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[22]);
  
    /* UnityEngine.Sprite UnityEngine.UI::Image::get_sprite() */
inline static auto& m0_get_sprite = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void UnityEngine.UI::Image::set_sprite(UnityEngine.Sprite) */
inline static auto& m1_set_sprite = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void UnityEngine.UI::Image::DisableSpriteOptimizations() */
inline static auto& m2_DisableSpriteOptimizations = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* UnityEngine.Sprite UnityEngine.UI::Image::get_overrideSprite() */
inline static auto& m3_get_overrideSprite = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void UnityEngine.UI::Image::set_overrideSprite(UnityEngine.Sprite) */
inline static auto& m4_set_overrideSprite = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* UnityEngine.Sprite UnityEngine.UI::Image::get_activeSprite() */
inline static auto& m5_get_activeSprite = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* UnityEngine.UI.Image.Type UnityEngine.UI::Image::get_type() */
inline static auto& m6_get_type = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.Void UnityEngine.UI::Image::set_type(UnityEngine.UI.Image.Type) */
inline static auto& m7_set_type = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.Boolean UnityEngine.UI::Image::get_preserveAspect() */
inline static auto& m8_get_preserveAspect = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Void UnityEngine.UI::Image::set_preserveAspect(System.Boolean) */
inline static auto& m9_set_preserveAspect = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.Boolean UnityEngine.UI::Image::get_fillCenter() */
inline static auto& m10_get_fillCenter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Void UnityEngine.UI::Image::set_fillCenter(System.Boolean) */
inline static auto& m11_set_fillCenter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* UnityEngine.UI.Image.FillMethod UnityEngine.UI::Image::get_fillMethod() */
inline static auto& m12_get_fillMethod = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.Void UnityEngine.UI::Image::set_fillMethod(UnityEngine.UI.Image.FillMethod) */
inline static auto& m13_set_fillMethod = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* System.Single UnityEngine.UI::Image::get_fillAmount() */
inline static auto& m14_get_fillAmount = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* System.Void UnityEngine.UI::Image::set_fillAmount(System.Single) */
inline static auto& m15_set_fillAmount = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* System.Boolean UnityEngine.UI::Image::get_fillClockwise() */
inline static auto& m16_get_fillClockwise = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* System.Void UnityEngine.UI::Image::set_fillClockwise(System.Boolean) */
inline static auto& m17_set_fillClockwise = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.Int32 UnityEngine.UI::Image::get_fillOrigin() */
inline static auto& m18_get_fillOrigin = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* System.Void UnityEngine.UI::Image::set_fillOrigin(System.Int32) */
inline static auto& m19_set_fillOrigin = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.Single UnityEngine.UI::Image::get_eventAlphaThreshold() */
inline static auto& m20_get_eventAlphaThreshold = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.Void UnityEngine.UI::Image::set_eventAlphaThreshold(System.Single) */
inline static auto& m21_set_eventAlphaThreshold = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* System.Single UnityEngine.UI::Image::get_alphaHitTestMinimumThreshold() */
inline static auto& m22_get_alphaHitTestMinimumThreshold = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* System.Void UnityEngine.UI::Image::set_alphaHitTestMinimumThreshold(System.Single) */
inline static auto& m23_set_alphaHitTestMinimumThreshold = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[23]);
/* System.Boolean UnityEngine.UI::Image::get_useSpriteMesh() */
inline static auto& m24_get_useSpriteMesh = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[24]);
/* System.Void UnityEngine.UI::Image::set_useSpriteMesh(System.Boolean) */
inline static auto& m25_set_useSpriteMesh = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[25]);
/* System.Void UnityEngine.UI::Image::.ctor() */
inline static auto& m26__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[26]);
/* UnityEngine.Material UnityEngine.UI::Image::get_defaultETC1GraphicMaterial() */
inline static auto& m27_get_defaultETC1GraphicMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);
/* UnityEngine.Texture UnityEngine.UI::Image::get_mainTexture() */
inline static auto& m28_get_mainTexture = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[28]);
/* System.Boolean UnityEngine.UI::Image::get_hasBorder() */
inline static auto& m29_get_hasBorder = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[29]);
/* System.Single UnityEngine.UI::Image::get_pixelsPerUnitMultiplier() */
inline static auto& m30_get_pixelsPerUnitMultiplier = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[30]);
/* System.Void UnityEngine.UI::Image::set_pixelsPerUnitMultiplier(System.Single) */
inline static auto& m31_set_pixelsPerUnitMultiplier = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[31]);
/* System.Single UnityEngine.UI::Image::get_pixelsPerUnit() */
inline static auto& m32_get_pixelsPerUnit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[32]);
/* System.Single UnityEngine.UI::Image::get_multipliedPixelsPerUnit() */
inline static auto& m33_get_multipliedPixelsPerUnit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[33]);
/* UnityEngine.Material UnityEngine.UI::Image::get_material() */
inline static auto& m34_get_material = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[34]);
/* System.Void UnityEngine.UI::Image::set_material(UnityEngine.Material) */
inline static auto& m35_set_material = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[35]);
/* System.Void UnityEngine.UI::Image::OnBeforeSerialize() */
inline static auto& m36_OnBeforeSerialize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[36]);
/* System.Void UnityEngine.UI::Image::OnAfterDeserialize() */
inline static auto& m37_OnAfterDeserialize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[37]);
/* System.Void UnityEngine.UI::Image::PreserveSpriteAspectRatio(UnityEngine.Rect&, UnityEngine.Vector2) */
inline static auto& m38_PreserveSpriteAspectRatio = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[38]);
/* UnityEngine.Vector4 UnityEngine.UI::Image::GetDrawingDimensions(System.Boolean) */
inline static auto& m39_GetDrawingDimensions = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[39]);
/* System.Void UnityEngine.UI::Image::SetNativeSize() */
inline static auto& m40_SetNativeSize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[40]);
/* System.Void UnityEngine.UI::Image::OnPopulateMesh(UnityEngine.UI.VertexHelper) */
inline static auto& m41_OnPopulateMesh = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[41]);
/* System.Void UnityEngine.UI::Image::TrackSprite() */
inline static auto& m42_TrackSprite = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[42]);
/* System.Void UnityEngine.UI::Image::OnEnable() */
inline static auto& m43_OnEnable = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[43]);
/* System.Void UnityEngine.UI::Image::OnDisable() */
inline static auto& m44_OnDisable = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[44]);
/* UnityEngine.SecondarySpriteTexture[] UnityEngine.UI::Image::get_secondaryTextures() */
inline static auto& m45_get_secondaryTextures = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[45]);
/* System.Void UnityEngine.UI::Image::ClearArray(UnityEngine.SecondarySpriteTexture[]&) */
inline static auto& m46_ClearArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[46]);
/* System.Boolean UnityEngine.UI::Image::CheckSecondaryTexturesChanged(UnityEngine.Sprite) */
inline static auto& m47_CheckSecondaryTexturesChanged = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[47]);
/* System.Boolean UnityEngine.UI::Image::CheckSecondaryTexturesChanged(UnityEngine.Sprite, UnityEngine.SecondarySpriteTexture[]&) */
inline static auto& m48_CheckSecondaryTexturesChanged = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[48]);
/* System.Void UnityEngine.UI::Image::SetSecondaryTextures(UnityEngine.CanvasRenderer) */
inline static auto& m49_SetSecondaryTextures = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[49]);
/* System.Void UnityEngine.UI::Image::UpdateMaterial() */
inline static auto& m50_UpdateMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[50]);
/* System.Void UnityEngine.UI::Image::OnCanvasHierarchyChanged() */
inline static auto& m51_OnCanvasHierarchyChanged = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[51]);
/* System.Void UnityEngine.UI::Image::GenerateSimpleSprite(UnityEngine.UI.VertexHelper, System.Boolean) */
inline static auto& m52_GenerateSimpleSprite = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[52]);
/* System.Void UnityEngine.UI::Image::GenerateSprite(UnityEngine.UI.VertexHelper, System.Boolean) */
inline static auto& m53_GenerateSprite = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[53]);
/* System.Void UnityEngine.UI::Image::GenerateSlicedSprite(UnityEngine.UI.VertexHelper) */
inline static auto& m54_GenerateSlicedSprite = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[54]);
/* System.Void UnityEngine.UI::Image::GenerateTiledSprite(UnityEngine.UI.VertexHelper) */
inline static auto& m55_GenerateTiledSprite = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[55]);
/* System.Void UnityEngine.UI::Image::AddQuad(UnityEngine.UI.VertexHelper, UnityEngine.Vector3[], UnityEngine.Color32, UnityEngine.Vector3[]) */
inline static auto& m56_AddQuad = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[56]);
/* System.Void UnityEngine.UI::Image::AddQuad(UnityEngine.UI.VertexHelper, UnityEngine.Vector2, UnityEngine.Vector2, UnityEngine.Color32, UnityEngine.Vector2, UnityEngine.Vector2) */
inline static auto& m57_AddQuad = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[57]);
/* UnityEngine.Vector4 UnityEngine.UI::Image::GetAdjustedBorders(UnityEngine.Vector4, UnityEngine.Rect) */
inline static auto& m58_GetAdjustedBorders = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[58]);
/* System.Void UnityEngine.UI::Image::GenerateFilledSprite(UnityEngine.UI.VertexHelper, System.Boolean) */
inline static auto& m59_GenerateFilledSprite = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[59]);
/* System.Boolean UnityEngine.UI::Image::RadialCut(UnityEngine.Vector3[], UnityEngine.Vector3[], System.Single, System.Boolean, System.Int32) */
inline static auto& m60_RadialCut = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[60]);
/* System.Void UnityEngine.UI::Image::RadialCut(UnityEngine.Vector3[], System.Single, System.Single, System.Boolean, System.Int32) */
inline static auto& m61_RadialCut = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[61]);
/* System.Void UnityEngine.UI::Image::CalculateLayoutInputHorizontal() */
inline static auto& m62_CalculateLayoutInputHorizontal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[62]);
/* System.Void UnityEngine.UI::Image::CalculateLayoutInputVertical() */
inline static auto& m63_CalculateLayoutInputVertical = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[63]);
/* System.Single UnityEngine.UI::Image::get_minWidth() */
inline static auto& m64_get_minWidth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[64]);
/* System.Single UnityEngine.UI::Image::get_preferredWidth() */
inline static auto& m65_get_preferredWidth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[65]);
/* System.Single UnityEngine.UI::Image::get_flexibleWidth() */
inline static auto& m66_get_flexibleWidth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[66]);
/* System.Single UnityEngine.UI::Image::get_minHeight() */
inline static auto& m67_get_minHeight = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[67]);
/* System.Single UnityEngine.UI::Image::get_preferredHeight() */
inline static auto& m68_get_preferredHeight = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[68]);
/* System.Single UnityEngine.UI::Image::get_flexibleHeight() */
inline static auto& m69_get_flexibleHeight = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[69]);
/* System.Int32 UnityEngine.UI::Image::get_layoutPriority() */
inline static auto& m70_get_layoutPriority = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[70]);
/* System.Boolean UnityEngine.UI::Image::IsRaycastLocationValid(UnityEngine.Vector2, UnityEngine.Camera) */
inline static auto& m71_IsRaycastLocationValid = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[71]);
/* UnityEngine.Vector2 UnityEngine.UI::Image::MapCoordinate(UnityEngine.Vector2, UnityEngine.Rect) */
inline static auto& m72_MapCoordinate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[72]);
/* System.Void UnityEngine.UI::Image::RebuildImage(UnityEngine.U2D.SpriteAtlas) */
inline static auto& m73_RebuildImage = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[73]);
/* System.Void UnityEngine.UI::Image::TrackImage(UnityEngine.UI.Image) */
inline static auto& m74_TrackImage = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[74]);
/* System.Void UnityEngine.UI::Image::UnTrackImage(UnityEngine.UI.Image) */
inline static auto& m75_UnTrackImage = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[75]);
/* System.Void UnityEngine.UI::Image::OnDidApplyAnimationProperties() */
inline static auto& m76_OnDidApplyAnimationProperties = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[76]);
/* System.Void UnityEngine.UI::Image::.cctor() */
inline static auto& m77__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[77]);
/* System.Void UnityEngine.UI::Image::<set_sprite>g__ResetAlphaHitThresholdIfNeeded|11_0() */
inline static auto& m78__set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[78]);
/* System.Boolean UnityEngine.UI::Image::<set_sprite>g__SpriteSupportsAlphaHitTest|11_1() */
inline static auto& m79__set_sprite_g__SpriteSupportsAlphaHitTest_11_1 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[79]);
/* System.Boolean UnityEngine.UI::Image::<CheckSecondaryTexturesChanged>g__Compare|93_0(UnityEngine.SecondarySpriteTexture[], UnityEngine.SecondarySpriteTexture[]) */
inline static auto& m80__CheckSecondaryTexturesChanged_g__Compare_93_0 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[80]);

};

}