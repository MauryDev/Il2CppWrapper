
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::TMPro {

struct TextMeshProUGUI {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 74> methods;
    inline static std::array<Il2CppWrapper::Field*, 43> fields;  
    /* System.Boolean TMPro::TextMeshProUGUI::m_isRebuildingLayout */
inline static auto& f_m_isRebuildingLayout = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* UnityEngine.Coroutine TMPro::TextMeshProUGUI::m_DelayedGraphicRebuild */
inline static auto& f_m_DelayedGraphicRebuild = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* UnityEngine.Coroutine TMPro::TextMeshProUGUI::m_DelayedMaterialRebuild */
inline static auto& f_m_DelayedMaterialRebuild = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[2]);
/* System.Boolean TMPro::TextMeshProUGUI::m_ShouldUpdateCulling */
inline static auto& f_m_ShouldUpdateCulling = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[3]);
/* UnityEngine.Rect TMPro::TextMeshProUGUI::m_ClipRect */
inline static auto& f_m_ClipRect = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[4]);
/* System.Boolean TMPro::TextMeshProUGUI::m_ValidRect */
inline static auto& f_m_ValidRect = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[5]);
/* System.Action<TMPro.TMP_TextInfo> TMPro::TextMeshProUGUI::OnPreRenderText */
inline static auto& f_OnPreRenderText = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[6]);
/* System.Boolean TMPro::TextMeshProUGUI::m_hasFontAssetChanged */
inline static auto& f_m_hasFontAssetChanged = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[7]);
/* TMPro.TMP_SubMeshUI[] TMPro::TextMeshProUGUI::m_subTextObjects */
inline static auto& f_m_subTextObjects = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[8]);
/* System.Single TMPro::TextMeshProUGUI::m_previousLossyScaleY */
inline static auto& f_m_previousLossyScaleY = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[9]);
/* UnityEngine.Vector3[] TMPro::TextMeshProUGUI::m_RectTransformCorners */
inline static auto& f_m_RectTransformCorners = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[10]);
/* UnityEngine.CanvasRenderer TMPro::TextMeshProUGUI::m_canvasRenderer */
inline static auto& f_m_canvasRenderer = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[11]);
/* UnityEngine.Canvas TMPro::TextMeshProUGUI::m_canvas */
inline static auto& f_m_canvas = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[12]);
/* System.Single TMPro::TextMeshProUGUI::m_CanvasScaleFactor */
inline static auto& f_m_CanvasScaleFactor = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[13]);
/* System.Boolean TMPro::TextMeshProUGUI::m_isFirstAllocation */
inline static auto& f_m_isFirstAllocation = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[14]);
/* System.Int32 TMPro::TextMeshProUGUI::m_max_characters */
inline static auto& f_m_max_characters = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[15]);
/* UnityEngine.Material TMPro::TextMeshProUGUI::m_baseMaterial */
inline static auto& f_m_baseMaterial = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[16]);
/* System.Boolean TMPro::TextMeshProUGUI::m_isScrollRegionSet */
inline static auto& f_m_isScrollRegionSet = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[17]);
/* UnityEngine.Vector4 TMPro::TextMeshProUGUI::m_maskOffset */
inline static auto& f_m_maskOffset = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[18]);
/* UnityEngine.Matrix4x4 TMPro::TextMeshProUGUI::m_EnvMapMatrix */
inline static auto& f_m_EnvMapMatrix = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[19]);
/* System.Boolean TMPro::TextMeshProUGUI::m_isRegisteredForEvents */
inline static auto& f_m_isRegisteredForEvents = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[20]);
/* Unity.Profiling.ProfilerMarker TMPro::TextMeshProUGUI::k_GenerateTextMarker */
inline static auto& f_k_GenerateTextMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[21]);
/* Unity.Profiling.ProfilerMarker TMPro::TextMeshProUGUI::k_SetArraySizesMarker */
inline static auto& f_k_SetArraySizesMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[22]);
/* Unity.Profiling.ProfilerMarker TMPro::TextMeshProUGUI::k_GenerateTextPhaseIMarker */
inline static auto& f_k_GenerateTextPhaseIMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[23]);
/* Unity.Profiling.ProfilerMarker TMPro::TextMeshProUGUI::k_ParseMarkupTextMarker */
inline static auto& f_k_ParseMarkupTextMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[24]);
/* Unity.Profiling.ProfilerMarker TMPro::TextMeshProUGUI::k_CharacterLookupMarker */
inline static auto& f_k_CharacterLookupMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[25]);
/* Unity.Profiling.ProfilerMarker TMPro::TextMeshProUGUI::k_HandleGPOSFeaturesMarker */
inline static auto& f_k_HandleGPOSFeaturesMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[26]);
/* Unity.Profiling.ProfilerMarker TMPro::TextMeshProUGUI::k_CalculateVerticesPositionMarker */
inline static auto& f_k_CalculateVerticesPositionMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[27]);
/* Unity.Profiling.ProfilerMarker TMPro::TextMeshProUGUI::k_ComputeTextMetricsMarker */
inline static auto& f_k_ComputeTextMetricsMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[28]);
/* Unity.Profiling.ProfilerMarker TMPro::TextMeshProUGUI::k_HandleVisibleCharacterMarker */
inline static auto& f_k_HandleVisibleCharacterMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[29]);
/* Unity.Profiling.ProfilerMarker TMPro::TextMeshProUGUI::k_HandleWhiteSpacesMarker */
inline static auto& f_k_HandleWhiteSpacesMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[30]);
/* Unity.Profiling.ProfilerMarker TMPro::TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker */
inline static auto& f_k_HandleHorizontalLineBreakingMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[31]);
/* Unity.Profiling.ProfilerMarker TMPro::TextMeshProUGUI::k_HandleVerticalLineBreakingMarker */
inline static auto& f_k_HandleVerticalLineBreakingMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[32]);
/* Unity.Profiling.ProfilerMarker TMPro::TextMeshProUGUI::k_SaveGlyphVertexDataMarker */
inline static auto& f_k_SaveGlyphVertexDataMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[33]);
/* Unity.Profiling.ProfilerMarker TMPro::TextMeshProUGUI::k_ComputeCharacterAdvanceMarker */
inline static auto& f_k_ComputeCharacterAdvanceMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[34]);
/* Unity.Profiling.ProfilerMarker TMPro::TextMeshProUGUI::k_HandleCarriageReturnMarker */
inline static auto& f_k_HandleCarriageReturnMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[35]);
/* Unity.Profiling.ProfilerMarker TMPro::TextMeshProUGUI::k_HandleLineTerminationMarker */
inline static auto& f_k_HandleLineTerminationMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[36]);
/* Unity.Profiling.ProfilerMarker TMPro::TextMeshProUGUI::k_SavePageInfoMarker */
inline static auto& f_k_SavePageInfoMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[37]);
/* Unity.Profiling.ProfilerMarker TMPro::TextMeshProUGUI::k_SaveTextExtentMarker */
inline static auto& f_k_SaveTextExtentMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[38]);
/* Unity.Profiling.ProfilerMarker TMPro::TextMeshProUGUI::k_SaveProcessingStatesMarker */
inline static auto& f_k_SaveProcessingStatesMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[39]);
/* Unity.Profiling.ProfilerMarker TMPro::TextMeshProUGUI::k_GenerateTextPhaseIIMarker */
inline static auto& f_k_GenerateTextPhaseIIMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[40]);
/* Unity.Profiling.ProfilerMarker TMPro::TextMeshProUGUI::k_GenerateTextPhaseIIIMarker */
inline static auto& f_k_GenerateTextPhaseIIIMarker = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[41]);
/* System.Collections.Generic.Dictionary<System.Int32,System.Int32> TMPro::TextMeshProUGUI::materialIndexPairs */
inline static auto& f_materialIndexPairs = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[42]);
  
    /* UnityEngine.Material TMPro::TextMeshProUGUI::get_materialForRendering() */
inline static auto& m0_get_materialForRendering = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[0]);
/* System.Boolean TMPro::TextMeshProUGUI::get_autoSizeTextContainer() */
inline static auto& m1_get_autoSizeTextContainer = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[1]);
/* System.Void TMPro::TextMeshProUGUI::set_autoSizeTextContainer(System.Boolean) */
inline static auto& m2_set_autoSizeTextContainer = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[2]);
/* UnityEngine.Mesh TMPro::TextMeshProUGUI::get_mesh() */
inline static auto& m3_get_mesh = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* UnityEngine.CanvasRenderer TMPro::TextMeshProUGUI::get_canvasRenderer() */
inline static auto& m4_get_canvasRenderer = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Void TMPro::TextMeshProUGUI::CalculateLayoutInputHorizontal() */
inline static auto& m5_CalculateLayoutInputHorizontal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Void TMPro::TextMeshProUGUI::CalculateLayoutInputVertical() */
inline static auto& m6_CalculateLayoutInputVertical = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.Void TMPro::TextMeshProUGUI::SetVerticesDirty() */
inline static auto& m7_SetVerticesDirty = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);
/* System.Void TMPro::TextMeshProUGUI::SetLayoutDirty() */
inline static auto& m8_SetLayoutDirty = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[8]);
/* System.Void TMPro::TextMeshProUGUI::SetMaterialDirty() */
inline static auto& m9_SetMaterialDirty = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);
/* System.Void TMPro::TextMeshProUGUI::SetAllDirty() */
inline static auto& m10_SetAllDirty = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[10]);
/* System.Collections.IEnumerator TMPro::TextMeshProUGUI::DelayedGraphicRebuild() */
inline static auto& m11_DelayedGraphicRebuild = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* System.Collections.IEnumerator TMPro::TextMeshProUGUI::DelayedMaterialRebuild() */
inline static auto& m12_DelayedMaterialRebuild = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.Void TMPro::TextMeshProUGUI::Rebuild(UnityEngine.UI.CanvasUpdate) */
inline static auto& m13_Rebuild = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[13]);
/* System.Void TMPro::TextMeshProUGUI::UpdateSubObjectPivot() */
inline static auto& m14_UpdateSubObjectPivot = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* UnityEngine.Material TMPro::TextMeshProUGUI::GetModifiedMaterial(UnityEngine.Material) */
inline static auto& m15_GetModifiedMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[15]);
/* System.Void TMPro::TextMeshProUGUI::UpdateMaterial() */
inline static auto& m16_UpdateMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[16]);
/* UnityEngine.Vector4 TMPro::TextMeshProUGUI::get_maskOffset() */
inline static auto& m17_get_maskOffset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.Void TMPro::TextMeshProUGUI::set_maskOffset(UnityEngine.Vector4) */
inline static auto& m18_set_maskOffset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* System.Void TMPro::TextMeshProUGUI::RecalculateClipping() */
inline static auto& m19_RecalculateClipping = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[19]);
/* System.Void TMPro::TextMeshProUGUI::Cull(UnityEngine.Rect, System.Boolean) */
inline static auto& m20_Cull = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[20]);
/* System.Void TMPro::TextMeshProUGUI::UpdateCulling() */
inline static auto& m21_UpdateCulling = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[21]);
/* System.Void TMPro::TextMeshProUGUI::UpdateMeshPadding() */
inline static auto& m22_UpdateMeshPadding = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[22]);
/* System.Void TMPro::TextMeshProUGUI::InternalCrossFadeColor(UnityEngine.Color, System.Single, System.Boolean, System.Boolean) */
inline static auto& m23_InternalCrossFadeColor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[23]);
/* System.Void TMPro::TextMeshProUGUI::InternalCrossFadeAlpha(System.Single, System.Single, System.Boolean) */
inline static auto& m24_InternalCrossFadeAlpha = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[24]);
/* System.Void TMPro::TextMeshProUGUI::ForceMeshUpdate(System.Boolean, System.Boolean) */
inline static auto& m25_ForceMeshUpdate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[25]);
/* TMPro.TMP_TextInfo TMPro::TextMeshProUGUI::GetTextInfo(System.String) */
inline static auto& m26_GetTextInfo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[26]);
/* System.Void TMPro::TextMeshProUGUI::ClearMesh() */
inline static auto& m27_ClearMesh = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[27]);
/* System.Void TMPro::TextMeshProUGUI::add_OnPreRenderText(System.Action<TMPro.TMP_TextInfo>) */
inline static auto& m28_add_OnPreRenderText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[28]);
/* System.Void TMPro::TextMeshProUGUI::remove_OnPreRenderText(System.Action<TMPro.TMP_TextInfo>) */
inline static auto& m29_remove_OnPreRenderText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[29]);
/* System.Void TMPro::TextMeshProUGUI::UpdateGeometry(UnityEngine.Mesh, System.Int32) */
inline static auto& m30_UpdateGeometry = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[30]);
/* System.Void TMPro::TextMeshProUGUI::UpdateVertexData(TMPro.TMP_VertexDataUpdateFlags) */
inline static auto& m31_UpdateVertexData = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[31]);
/* System.Void TMPro::TextMeshProUGUI::UpdateVertexData() */
inline static auto& m32_UpdateVertexData = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[32]);
/* System.Void TMPro::TextMeshProUGUI::UpdateFontAsset() */
inline static auto& m33_UpdateFontAsset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[33]);
/* System.Void TMPro::TextMeshProUGUI::Awake() */
inline static auto& m34_Awake = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[34]);
/* System.Void TMPro::TextMeshProUGUI::OnEnable() */
inline static auto& m35_OnEnable = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[35]);
/* System.Void TMPro::TextMeshProUGUI::OnDisable() */
inline static auto& m36_OnDisable = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[36]);
/* System.Void TMPro::TextMeshProUGUI::OnDestroy() */
inline static auto& m37_OnDestroy = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[37]);
/* System.Void TMPro::TextMeshProUGUI::LoadFontAsset() */
inline static auto& m38_LoadFontAsset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[38]);
/* UnityEngine.Canvas TMPro::TextMeshProUGUI::GetCanvas() */
inline static auto& m39_GetCanvas = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[39]);
/* System.Void TMPro::TextMeshProUGUI::ValidateEnvMapProperty() */
inline static auto& m40_ValidateEnvMapProperty = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[40]);
/* System.Void TMPro::TextMeshProUGUI::UpdateEnvMapMatrix() */
inline static auto& m41_UpdateEnvMapMatrix = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[41]);
/* System.Void TMPro::TextMeshProUGUI::EnableMasking() */
inline static auto& m42_EnableMasking = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[42]);
/* System.Void TMPro::TextMeshProUGUI::DisableMasking() */
inline static auto& m43_DisableMasking = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[43]);
/* System.Void TMPro::TextMeshProUGUI::UpdateMask() */
inline static auto& m44_UpdateMask = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[44]);
/* UnityEngine.Material TMPro::TextMeshProUGUI::GetMaterial(UnityEngine.Material) */
inline static auto& m45_GetMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[45]);
/* UnityEngine.Material[] TMPro::TextMeshProUGUI::GetMaterials(UnityEngine.Material[]) */
inline static auto& m46_GetMaterials = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[46]);
/* System.Void TMPro::TextMeshProUGUI::SetSharedMaterial(UnityEngine.Material) */
inline static auto& m47_SetSharedMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[47]);
/* UnityEngine.Material[] TMPro::TextMeshProUGUI::GetSharedMaterials() */
inline static auto& m48_GetSharedMaterials = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[48]);
/* System.Void TMPro::TextMeshProUGUI::SetSharedMaterials(UnityEngine.Material[]) */
inline static auto& m49_SetSharedMaterials = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[49]);
/* System.Void TMPro::TextMeshProUGUI::SetOutlineThickness(System.Single) */
inline static auto& m50_SetOutlineThickness = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[50]);
/* System.Void TMPro::TextMeshProUGUI::SetFaceColor(UnityEngine.Color32) */
inline static auto& m51_SetFaceColor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[51]);
/* System.Void TMPro::TextMeshProUGUI::SetOutlineColor(UnityEngine.Color32) */
inline static auto& m52_SetOutlineColor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[52]);
/* System.Void TMPro::TextMeshProUGUI::SetShaderDepth() */
inline static auto& m53_SetShaderDepth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[53]);
/* System.Void TMPro::TextMeshProUGUI::SetCulling() */
inline static auto& m54_SetCulling = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[54]);
/* System.Void TMPro::TextMeshProUGUI::SetPerspectiveCorrection() */
inline static auto& m55_SetPerspectiveCorrection = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[55]);
/* System.Void TMPro::TextMeshProUGUI::SetMeshArrays(System.Int32) */
inline static auto& m56_SetMeshArrays = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[56]);
/* System.Int32 TMPro::TextMeshProUGUI::SetArraySizes(TMPro.TMP_Text.TextProcessingElement[]) */
inline static auto& m57_SetArraySizes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[57]);
/* System.Void TMPro::TextMeshProUGUI::ComputeMarginSize() */
inline static auto& m58_ComputeMarginSize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[58]);
/* System.Void TMPro::TextMeshProUGUI::OnDidApplyAnimationProperties() */
inline static auto& m59_OnDidApplyAnimationProperties = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[59]);
/* System.Void TMPro::TextMeshProUGUI::OnCanvasHierarchyChanged() */
inline static auto& m60_OnCanvasHierarchyChanged = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[60]);
/* System.Void TMPro::TextMeshProUGUI::OnTransformParentChanged() */
inline static auto& m61_OnTransformParentChanged = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[61]);
/* System.Void TMPro::TextMeshProUGUI::OnRectTransformDimensionsChange() */
inline static auto& m62_OnRectTransformDimensionsChange = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[62]);
/* System.Void TMPro::TextMeshProUGUI::InternalUpdate() */
inline static auto& m63_InternalUpdate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[63]);
/* System.Void TMPro::TextMeshProUGUI::OnPreRenderCanvas() */
inline static auto& m64_OnPreRenderCanvas = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[64]);
/* System.Void TMPro::TextMeshProUGUI::GenerateTextMesh() */
inline static auto& m65_GenerateTextMesh = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[65]);
/* UnityEngine.Vector3[] TMPro::TextMeshProUGUI::GetTextContainerLocalCorners() */
inline static auto& m66_GetTextContainerLocalCorners = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[66]);
/* System.Void TMPro::TextMeshProUGUI::SetActiveSubMeshes(System.Boolean) */
inline static auto& m67_SetActiveSubMeshes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[67]);
/* System.Void TMPro::TextMeshProUGUI::DestroySubMeshObjects() */
inline static auto& m68_DestroySubMeshObjects = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[68]);
/* UnityEngine.Bounds TMPro::TextMeshProUGUI::GetCompoundBounds() */
inline static auto& m69_GetCompoundBounds = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[69]);
/* UnityEngine.Rect TMPro::TextMeshProUGUI::GetCanvasSpaceClippingRect() */
inline static auto& m70_GetCanvasSpaceClippingRect = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[70]);
/* System.Void TMPro::TextMeshProUGUI::UpdateSDFScale(System.Single) */
inline static auto& m71_UpdateSDFScale = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[71]);
/* System.Void TMPro::TextMeshProUGUI::.ctor() */
inline static auto& m72__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[72]);
/* System.Void TMPro::TextMeshProUGUI::.cctor() */
inline static auto& m73__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[73]);

};

}