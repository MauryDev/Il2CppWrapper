
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Canvas {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 66> methods;
    inline static std::array<Il2CppWrapper::Field*, 5> fields;  
    /* UnityEngine.Canvas.WillRenderCanvases UnityEngine::Canvas::preWillRenderCanvases */
inline static auto& f_preWillRenderCanvases = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* UnityEngine.Canvas.WillRenderCanvases UnityEngine::Canvas::willRenderCanvases */
inline static auto& f_willRenderCanvases = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
/* System.Action<System.Int32> UnityEngine::Canvas::<externBeginRenderOverlays>k__BackingField */
inline static auto& f__externBeginRenderOverlays_k__BackingField = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[2]);
/* System.Action<System.Int32,System.Int32> UnityEngine::Canvas::<externRenderOverlaysBefore>k__BackingField */
inline static auto& f__externRenderOverlaysBefore_k__BackingField = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[3]);
/* System.Action<System.Int32> UnityEngine::Canvas::<externEndRenderOverlays>k__BackingField */
inline static auto& f__externEndRenderOverlays_k__BackingField = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[4]);
  
    /* System.Void UnityEngine::Canvas::add_preWillRenderCanvases(UnityEngine.Canvas.WillRenderCanvases) */
inline static auto& m0_add_preWillRenderCanvases = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.Void UnityEngine::Canvas::remove_preWillRenderCanvases(UnityEngine.Canvas.WillRenderCanvases) */
inline static auto& m1_remove_preWillRenderCanvases = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* System.Void UnityEngine::Canvas::add_willRenderCanvases(UnityEngine.Canvas.WillRenderCanvases) */
inline static auto& m2_add_willRenderCanvases = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* System.Void UnityEngine::Canvas::remove_willRenderCanvases(UnityEngine.Canvas.WillRenderCanvases) */
inline static auto& m3_remove_willRenderCanvases = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* UnityEngine.RenderMode UnityEngine::Canvas::get_renderMode() */
inline static auto& m4_get_renderMode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Boolean UnityEngine::Canvas::get_isRootCanvas() */
inline static auto& m5_get_isRootCanvas = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Single UnityEngine::Canvas::get_scaleFactor() */
inline static auto& m6_get_scaleFactor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.Void UnityEngine::Canvas::set_scaleFactor(System.Single) */
inline static auto& m7_set_scaleFactor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.Single UnityEngine::Canvas::get_referencePixelsPerUnit() */
inline static auto& m8_get_referencePixelsPerUnit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Void UnityEngine::Canvas::set_referencePixelsPerUnit(System.Single) */
inline static auto& m9_set_referencePixelsPerUnit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.Boolean UnityEngine::Canvas::get_pixelPerfect() */
inline static auto& m10_get_pixelPerfect = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Void UnityEngine::Canvas::set_pixelPerfect(System.Boolean) */
inline static auto& m11_set_pixelPerfect = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* System.Int32 UnityEngine::Canvas::get_renderOrder() */
inline static auto& m12_get_renderOrder = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.Boolean UnityEngine::Canvas::get_overrideSorting() */
inline static auto& m13_get_overrideSorting = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* System.Void UnityEngine::Canvas::set_overrideSorting(System.Boolean) */
inline static auto& m14_set_overrideSorting = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* System.Int32 UnityEngine::Canvas::get_sortingOrder() */
inline static auto& m15_get_sortingOrder = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* System.Void UnityEngine::Canvas::set_sortingOrder(System.Int32) */
inline static auto& m16_set_sortingOrder = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* System.Int32 UnityEngine::Canvas::get_targetDisplay() */
inline static auto& m17_get_targetDisplay = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.Int32 UnityEngine::Canvas::get_sortingLayerID() */
inline static auto& m18_get_sortingLayerID = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* System.Void UnityEngine::Canvas::set_sortingLayerID(System.Int32) */
inline static auto& m19_set_sortingLayerID = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* UnityEngine.AdditionalCanvasShaderChannels UnityEngine::Canvas::get_additionalShaderChannels() */
inline static auto& m20_get_additionalShaderChannels = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.Void UnityEngine::Canvas::set_additionalShaderChannels(UnityEngine.AdditionalCanvasShaderChannels) */
inline static auto& m21_set_additionalShaderChannels = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* UnityEngine.Canvas UnityEngine::Canvas::get_rootCanvas() */
inline static auto& m22_get_rootCanvas = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* UnityEngine.Vector2 UnityEngine::Canvas::get_renderingDisplaySize() */
inline static auto& m23_get_renderingDisplaySize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[23]);
/* System.Action<System.Int32> UnityEngine::Canvas::get_externBeginRenderOverlays() */
inline static auto& m24_get_externBeginRenderOverlays = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* System.Void UnityEngine::Canvas::set_externBeginRenderOverlays(System.Action<System.Int32>) */
inline static auto& m25_set_externBeginRenderOverlays = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* System.Action<System.Int32,System.Int32> UnityEngine::Canvas::get_externRenderOverlaysBefore() */
inline static auto& m26_get_externRenderOverlaysBefore = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* System.Void UnityEngine::Canvas::set_externRenderOverlaysBefore(System.Action<System.Int32,System.Int32>) */
inline static auto& m27_set_externRenderOverlaysBefore = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);
/* System.Action<System.Int32> UnityEngine::Canvas::get_externEndRenderOverlays() */
inline static auto& m28_get_externEndRenderOverlays = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[28]);
/* System.Void UnityEngine::Canvas::set_externEndRenderOverlays(System.Action<System.Int32>) */
inline static auto& m29_set_externEndRenderOverlays = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);
/* System.Void UnityEngine::Canvas::SetExternalCanvasEnabled(System.Boolean) */
inline static auto& m30_SetExternalCanvasEnabled = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[30]);
/* UnityEngine.Camera UnityEngine::Canvas::get_worldCamera() */
inline static auto& m31_get_worldCamera = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[31]);
/* System.Void UnityEngine::Canvas::set_worldCamera(UnityEngine.Camera) */
inline static auto& m32_set_worldCamera = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[32]);
/* UnityEngine.Material UnityEngine::Canvas::GetDefaultCanvasMaterial() */
inline static auto& m33_GetDefaultCanvasMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[33]);
/* UnityEngine.Material UnityEngine::Canvas::GetETC1SupportedCanvasMaterial() */
inline static auto& m34_GetETC1SupportedCanvasMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[34]);
/* System.Void UnityEngine::Canvas::ForceUpdateCanvases() */
inline static auto& m35_ForceUpdateCanvases = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[35]);
/* System.Void UnityEngine::Canvas::SendPreWillRenderCanvases() */
inline static auto& m36_SendPreWillRenderCanvases = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[36]);
/* System.Void UnityEngine::Canvas::SendWillRenderCanvases() */
inline static auto& m37_SendWillRenderCanvases = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[37]);
/* System.Void UnityEngine::Canvas::BeginRenderExtraOverlays(System.Int32) */
inline static auto& m38_BeginRenderExtraOverlays = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[38]);
/* System.Void UnityEngine::Canvas::RenderExtraOverlaysBefore(System.Int32, System.Int32) */
inline static auto& m39_RenderExtraOverlaysBefore = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[39]);
/* System.Void UnityEngine::Canvas::EndRenderExtraOverlays(System.Int32) */
inline static auto& m40_EndRenderExtraOverlays = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[40]);
/* System.Void UnityEngine::Canvas::.ctor() */
inline static auto& m41__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[41]);
/* UnityEngine.RenderMode UnityEngine::Canvas::get_renderMode_Injected(System.IntPtr) */
inline static auto& m42_get_renderMode_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[42]);
/* System.Boolean UnityEngine::Canvas::get_isRootCanvas_Injected(System.IntPtr) */
inline static auto& m43_get_isRootCanvas_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[43]);
/* System.Single UnityEngine::Canvas::get_scaleFactor_Injected(System.IntPtr) */
inline static auto& m44_get_scaleFactor_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[44]);
/* System.Void UnityEngine::Canvas::set_scaleFactor_Injected(System.IntPtr, System.Single) */
inline static auto& m45_set_scaleFactor_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[45]);
/* System.Single UnityEngine::Canvas::get_referencePixelsPerUnit_Injected(System.IntPtr) */
inline static auto& m46_get_referencePixelsPerUnit_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[46]);
/* System.Void UnityEngine::Canvas::set_referencePixelsPerUnit_Injected(System.IntPtr, System.Single) */
inline static auto& m47_set_referencePixelsPerUnit_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[47]);
/* System.Boolean UnityEngine::Canvas::get_pixelPerfect_Injected(System.IntPtr) */
inline static auto& m48_get_pixelPerfect_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[48]);
/* System.Void UnityEngine::Canvas::set_pixelPerfect_Injected(System.IntPtr, System.Boolean) */
inline static auto& m49_set_pixelPerfect_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[49]);
/* System.Int32 UnityEngine::Canvas::get_renderOrder_Injected(System.IntPtr) */
inline static auto& m50_get_renderOrder_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[50]);
/* System.Boolean UnityEngine::Canvas::get_overrideSorting_Injected(System.IntPtr) */
inline static auto& m51_get_overrideSorting_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[51]);
/* System.Void UnityEngine::Canvas::set_overrideSorting_Injected(System.IntPtr, System.Boolean) */
inline static auto& m52_set_overrideSorting_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[52]);
/* System.Int32 UnityEngine::Canvas::get_sortingOrder_Injected(System.IntPtr) */
inline static auto& m53_get_sortingOrder_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[53]);
/* System.Void UnityEngine::Canvas::set_sortingOrder_Injected(System.IntPtr, System.Int32) */
inline static auto& m54_set_sortingOrder_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[54]);
/* System.Int32 UnityEngine::Canvas::get_targetDisplay_Injected(System.IntPtr) */
inline static auto& m55_get_targetDisplay_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[55]);
/* System.Int32 UnityEngine::Canvas::get_sortingLayerID_Injected(System.IntPtr) */
inline static auto& m56_get_sortingLayerID_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[56]);
/* System.Void UnityEngine::Canvas::set_sortingLayerID_Injected(System.IntPtr, System.Int32) */
inline static auto& m57_set_sortingLayerID_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[57]);
/* UnityEngine.AdditionalCanvasShaderChannels UnityEngine::Canvas::get_additionalShaderChannels_Injected(System.IntPtr) */
inline static auto& m58_get_additionalShaderChannels_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[58]);
/* System.Void UnityEngine::Canvas::set_additionalShaderChannels_Injected(System.IntPtr, UnityEngine.AdditionalCanvasShaderChannels) */
inline static auto& m59_set_additionalShaderChannels_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[59]);
/* System.IntPtr UnityEngine::Canvas::get_rootCanvas_Injected(System.IntPtr) */
inline static auto& m60_get_rootCanvas_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[60]);
/* System.Void UnityEngine::Canvas::get_renderingDisplaySize_Injected(System.IntPtr, UnityEngine.Vector2&) */
inline static auto& m61_get_renderingDisplaySize_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[61]);
/* System.IntPtr UnityEngine::Canvas::get_worldCamera_Injected(System.IntPtr) */
inline static auto& m62_get_worldCamera_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[62]);
/* System.Void UnityEngine::Canvas::set_worldCamera_Injected(System.IntPtr, System.IntPtr) */
inline static auto& m63_set_worldCamera_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[63]);
/* System.IntPtr UnityEngine::Canvas::GetDefaultCanvasMaterial_Injected() */
inline static auto& m64_GetDefaultCanvasMaterial_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[64]);
/* System.IntPtr UnityEngine::Canvas::GetETC1SupportedCanvasMaterial_Injected() */
inline static auto& m65_GetETC1SupportedCanvasMaterial_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[65]);

};

}