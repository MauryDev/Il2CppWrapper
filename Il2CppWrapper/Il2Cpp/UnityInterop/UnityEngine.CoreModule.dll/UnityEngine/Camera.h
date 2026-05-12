
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Camera {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 110> methods;
    inline static std::array<Il2CppWrapper::Field*, 8> fields;  
    /* System.Single UnityEngine::Camera::kMinAperture */
inline static auto& f_kMinAperture = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.Single UnityEngine::Camera::kMaxAperture */
inline static auto& f_kMaxAperture = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
/* System.Int32 UnityEngine::Camera::kMinBladeCount */
inline static auto& f_kMinBladeCount = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[2]);
/* System.Int32 UnityEngine::Camera::kMaxBladeCount */
inline static auto& f_kMaxBladeCount = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[3]);
/* System.UInt32 UnityEngine::Camera::m_NonSerializedVersion */
inline static auto& f_m_NonSerializedVersion = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[4]);
/* UnityEngine.Camera.CameraCallback UnityEngine::Camera::onPreCull */
inline static auto& f_onPreCull = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[5]);
/* UnityEngine.Camera.CameraCallback UnityEngine::Camera::onPreRender */
inline static auto& f_onPreRender = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[6]);
/* UnityEngine.Camera.CameraCallback UnityEngine::Camera::onPostRender */
inline static auto& f_onPostRender = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[7]);
  
    /* System.Void UnityEngine::Camera::.ctor() */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Single UnityEngine::Camera::get_nearClipPlane() */
inline static auto& m1_get_nearClipPlane = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void UnityEngine::Camera::set_nearClipPlane(System.Single) */
inline static auto& m2_set_nearClipPlane = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Single UnityEngine::Camera::get_farClipPlane() */
inline static auto& m3_get_farClipPlane = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void UnityEngine::Camera::set_farClipPlane(System.Single) */
inline static auto& m4_set_farClipPlane = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Single UnityEngine::Camera::get_fieldOfView() */
inline static auto& m5_get_fieldOfView = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Void UnityEngine::Camera::set_fieldOfView(System.Single) */
inline static auto& m6_set_fieldOfView = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.Void UnityEngine::Camera::set_renderingPath(UnityEngine.RenderingPath) */
inline static auto& m7_set_renderingPath = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.Single UnityEngine::Camera::get_orthographicSize() */
inline static auto& m8_get_orthographicSize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Void UnityEngine::Camera::set_orthographicSize(System.Single) */
inline static auto& m9_set_orthographicSize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.Boolean UnityEngine::Camera::get_orthographic() */
inline static auto& m10_get_orthographic = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Void UnityEngine::Camera::set_orthographic(System.Boolean) */
inline static auto& m11_set_orthographic = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* System.Single UnityEngine::Camera::get_depth() */
inline static auto& m12_get_depth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.Void UnityEngine::Camera::set_depth(System.Single) */
inline static auto& m13_set_depth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* System.Single UnityEngine::Camera::get_aspect() */
inline static auto& m14_get_aspect = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* System.Void UnityEngine::Camera::set_aspect(System.Single) */
inline static auto& m15_set_aspect = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* System.Int32 UnityEngine::Camera::get_cullingMask() */
inline static auto& m16_get_cullingMask = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* System.Void UnityEngine::Camera::set_cullingMask(System.Int32) */
inline static auto& m17_set_cullingMask = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.Int32 UnityEngine::Camera::get_eventMask() */
inline static auto& m18_get_eventMask = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* UnityEngine.Color UnityEngine::Camera::get_backgroundColor() */
inline static auto& m19_get_backgroundColor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.Void UnityEngine::Camera::set_backgroundColor(UnityEngine.Color) */
inline static auto& m20_set_backgroundColor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* UnityEngine.CameraClearFlags UnityEngine::Camera::get_clearFlags() */
inline static auto& m21_get_clearFlags = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* System.Void UnityEngine::Camera::set_clearFlags(UnityEngine.CameraClearFlags) */
inline static auto& m22_set_clearFlags = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* UnityEngine.DepthTextureMode UnityEngine::Camera::get_depthTextureMode() */
inline static auto& m23_get_depthTextureMode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[23]);
/* System.Void UnityEngine::Camera::set_depthTextureMode(UnityEngine.DepthTextureMode) */
inline static auto& m24_set_depthTextureMode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[24]);
/* System.Void UnityEngine::Camera::SetReplacementShader(UnityEngine.Shader, System.String) */
inline static auto& m25_SetReplacementShader = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[25]);
/* System.Void UnityEngine::Camera::ResetReplacementShader() */
inline static auto& m26_ResetReplacementShader = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[26]);
/* System.Void UnityEngine::Camera::set_rect(UnityEngine.Rect) */
inline static auto& m27_set_rect = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[27]);
/* UnityEngine.Rect UnityEngine::Camera::get_pixelRect() */
inline static auto& m28_get_pixelRect = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[28]);
/* System.Int32 UnityEngine::Camera::get_pixelWidth() */
inline static auto& m29_get_pixelWidth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[29]);
/* System.Int32 UnityEngine::Camera::get_pixelHeight() */
inline static auto& m30_get_pixelHeight = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[30]);
/* UnityEngine.RenderTexture UnityEngine::Camera::get_targetTexture() */
inline static auto& m31_get_targetTexture = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[31]);
/* System.Void UnityEngine::Camera::set_targetTexture(UnityEngine.RenderTexture) */
inline static auto& m32_set_targetTexture = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[32]);
/* System.Int32 UnityEngine::Camera::get_targetDisplay() */
inline static auto& m33_get_targetDisplay = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[33]);
/* UnityEngine.Matrix4x4 UnityEngine::Camera::get_worldToCameraMatrix() */
inline static auto& m34_get_worldToCameraMatrix = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[34]);
/* System.Void UnityEngine::Camera::set_worldToCameraMatrix(UnityEngine.Matrix4x4) */
inline static auto& m35_set_worldToCameraMatrix = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[35]);
/* UnityEngine.Matrix4x4 UnityEngine::Camera::get_projectionMatrix() */
inline static auto& m36_get_projectionMatrix = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[36]);
/* System.Void UnityEngine::Camera::set_projectionMatrix(UnityEngine.Matrix4x4) */
inline static auto& m37_set_projectionMatrix = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[37]);
/* UnityEngine.Matrix4x4 UnityEngine::Camera::CalculateObliqueMatrix(UnityEngine.Vector4) */
inline static auto& m38_CalculateObliqueMatrix = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[38]);
/* UnityEngine.Vector3 UnityEngine::Camera::WorldToScreenPoint(UnityEngine.Vector3, UnityEngine.Camera.MonoOrStereoscopicEye) */
inline static auto& m39_WorldToScreenPoint = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[39]);
/* UnityEngine.Vector3 UnityEngine::Camera::WorldToViewportPoint(UnityEngine.Vector3, UnityEngine.Camera.MonoOrStereoscopicEye) */
inline static auto& m40_WorldToViewportPoint = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[40]);
/* UnityEngine.Vector3 UnityEngine::Camera::ScreenToWorldPoint(UnityEngine.Vector3, UnityEngine.Camera.MonoOrStereoscopicEye) */
inline static auto& m41_ScreenToWorldPoint = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[41]);
/* UnityEngine.Vector3 UnityEngine::Camera::WorldToScreenPoint(UnityEngine.Vector3) */
inline static auto& m42_WorldToScreenPoint = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[42]);
/* UnityEngine.Vector3 UnityEngine::Camera::WorldToViewportPoint(UnityEngine.Vector3) */
inline static auto& m43_WorldToViewportPoint = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[43]);
/* UnityEngine.Vector3 UnityEngine::Camera::ScreenToWorldPoint(UnityEngine.Vector3) */
inline static auto& m44_ScreenToWorldPoint = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[44]);
/* UnityEngine.Vector3 UnityEngine::Camera::ScreenToViewportPoint(UnityEngine.Vector3) */
inline static auto& m45_ScreenToViewportPoint = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[45]);
/* UnityEngine.Ray UnityEngine::Camera::ScreenPointToRay(UnityEngine.Vector2, UnityEngine.Camera.MonoOrStereoscopicEye) */
inline static auto& m46_ScreenPointToRay = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[46]);
/* UnityEngine.Ray UnityEngine::Camera::ScreenPointToRay(UnityEngine.Vector3, UnityEngine.Camera.MonoOrStereoscopicEye) */
inline static auto& m47_ScreenPointToRay = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[47]);
/* UnityEngine.Ray UnityEngine::Camera::ScreenPointToRay(UnityEngine.Vector3) */
inline static auto& m48_ScreenPointToRay = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[48]);
/* UnityEngine.Camera UnityEngine::Camera::get_main() */
inline static auto& m49_get_main = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[49]);
/* UnityEngine.Camera UnityEngine::Camera::get_current() */
inline static auto& m50_get_current = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[50]);
/* UnityEngine.Camera UnityEngine::Camera::get_currentInternal() */
inline static auto& m51_get_currentInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[51]);
/* System.Int32 UnityEngine::Camera::GetAllCamerasCount() */
inline static auto& m52_GetAllCamerasCount = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[52]);
/* System.Int32 UnityEngine::Camera::GetAllCamerasImpl(UnityEngine.Camera[]) */
inline static auto& m53_GetAllCamerasImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[53]);
/* System.Int32 UnityEngine::Camera::get_allCamerasCount() */
inline static auto& m54_get_allCamerasCount = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[54]);
/* System.Int32 UnityEngine::Camera::GetAllCameras(UnityEngine.Camera[]) */
inline static auto& m55_GetAllCameras = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[55]);
/* System.Void UnityEngine::Camera::Render() */
inline static auto& m56_Render = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[56]);
/* System.Void UnityEngine::Camera::SetupCurrent(UnityEngine.Camera) */
inline static auto& m57_SetupCurrent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[57]);
/* System.Void UnityEngine::Camera::FireOnPreCull(UnityEngine.Camera) */
inline static auto& m58_FireOnPreCull = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[58]);
/* System.Void UnityEngine::Camera::FireOnPreRender(UnityEngine.Camera) */
inline static auto& m59_FireOnPreRender = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[59]);
/* System.Void UnityEngine::Camera::FireOnPostRender(UnityEngine.Camera) */
inline static auto& m60_FireOnPostRender = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[60]);
/* System.Void UnityEngine::Camera::BumpNonSerializedVersion(UnityEngine.Camera) */
inline static auto& m61_BumpNonSerializedVersion = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[61]);
/* System.Single UnityEngine::Camera::get_nearClipPlane_Injected(System.IntPtr) */
inline static auto& m62_get_nearClipPlane_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[62]);
/* System.Void UnityEngine::Camera::set_nearClipPlane_Injected(System.IntPtr, System.Single) */
inline static auto& m63_set_nearClipPlane_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[63]);
/* System.Single UnityEngine::Camera::get_farClipPlane_Injected(System.IntPtr) */
inline static auto& m64_get_farClipPlane_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[64]);
/* System.Void UnityEngine::Camera::set_farClipPlane_Injected(System.IntPtr, System.Single) */
inline static auto& m65_set_farClipPlane_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[65]);
/* System.Single UnityEngine::Camera::get_fieldOfView_Injected(System.IntPtr) */
inline static auto& m66_get_fieldOfView_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[66]);
/* System.Void UnityEngine::Camera::set_fieldOfView_Injected(System.IntPtr, System.Single) */
inline static auto& m67_set_fieldOfView_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[67]);
/* System.Void UnityEngine::Camera::set_renderingPath_Injected(System.IntPtr, UnityEngine.RenderingPath) */
inline static auto& m68_set_renderingPath_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[68]);
/* System.Single UnityEngine::Camera::get_orthographicSize_Injected(System.IntPtr) */
inline static auto& m69_get_orthographicSize_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[69]);
/* System.Void UnityEngine::Camera::set_orthographicSize_Injected(System.IntPtr, System.Single) */
inline static auto& m70_set_orthographicSize_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[70]);
/* System.Boolean UnityEngine::Camera::get_orthographic_Injected(System.IntPtr) */
inline static auto& m71_get_orthographic_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[71]);
/* System.Void UnityEngine::Camera::set_orthographic_Injected(System.IntPtr, System.Boolean) */
inline static auto& m72_set_orthographic_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[72]);
/* System.Single UnityEngine::Camera::get_depth_Injected(System.IntPtr) */
inline static auto& m73_get_depth_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[73]);
/* System.Void UnityEngine::Camera::set_depth_Injected(System.IntPtr, System.Single) */
inline static auto& m74_set_depth_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[74]);
/* System.Single UnityEngine::Camera::get_aspect_Injected(System.IntPtr) */
inline static auto& m75_get_aspect_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[75]);
/* System.Void UnityEngine::Camera::set_aspect_Injected(System.IntPtr, System.Single) */
inline static auto& m76_set_aspect_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[76]);
/* System.Int32 UnityEngine::Camera::get_cullingMask_Injected(System.IntPtr) */
inline static auto& m77_get_cullingMask_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[77]);
/* System.Void UnityEngine::Camera::set_cullingMask_Injected(System.IntPtr, System.Int32) */
inline static auto& m78_set_cullingMask_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[78]);
/* System.Int32 UnityEngine::Camera::get_eventMask_Injected(System.IntPtr) */
inline static auto& m79_get_eventMask_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[79]);
/* System.Void UnityEngine::Camera::get_backgroundColor_Injected(System.IntPtr, UnityEngine.Color&) */
inline static auto& m80_get_backgroundColor_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[80]);
/* System.Void UnityEngine::Camera::set_backgroundColor_Injected(System.IntPtr, UnityEngine.Color&) */
inline static auto& m81_set_backgroundColor_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[81]);
/* UnityEngine.CameraClearFlags UnityEngine::Camera::get_clearFlags_Injected(System.IntPtr) */
inline static auto& m82_get_clearFlags_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[82]);
/* System.Void UnityEngine::Camera::set_clearFlags_Injected(System.IntPtr, UnityEngine.CameraClearFlags) */
inline static auto& m83_set_clearFlags_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[83]);
/* UnityEngine.DepthTextureMode UnityEngine::Camera::get_depthTextureMode_Injected(System.IntPtr) */
inline static auto& m84_get_depthTextureMode_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[84]);
/* System.Void UnityEngine::Camera::set_depthTextureMode_Injected(System.IntPtr, UnityEngine.DepthTextureMode) */
inline static auto& m85_set_depthTextureMode_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[85]);
/* System.Void UnityEngine::Camera::SetReplacementShader_Injected(System.IntPtr, System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m86_SetReplacementShader_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[86]);
/* System.Void UnityEngine::Camera::ResetReplacementShader_Injected(System.IntPtr) */
inline static auto& m87_ResetReplacementShader_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[87]);
/* System.Void UnityEngine::Camera::set_rect_Injected(System.IntPtr, UnityEngine.Rect&) */
inline static auto& m88_set_rect_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[88]);
/* System.Void UnityEngine::Camera::get_pixelRect_Injected(System.IntPtr, UnityEngine.Rect&) */
inline static auto& m89_get_pixelRect_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[89]);
/* System.Int32 UnityEngine::Camera::get_pixelWidth_Injected(System.IntPtr) */
inline static auto& m90_get_pixelWidth_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[90]);
/* System.Int32 UnityEngine::Camera::get_pixelHeight_Injected(System.IntPtr) */
inline static auto& m91_get_pixelHeight_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[91]);
/* System.IntPtr UnityEngine::Camera::get_targetTexture_Injected(System.IntPtr) */
inline static auto& m92_get_targetTexture_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[92]);
/* System.Void UnityEngine::Camera::set_targetTexture_Injected(System.IntPtr, System.IntPtr) */
inline static auto& m93_set_targetTexture_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[93]);
/* System.Int32 UnityEngine::Camera::get_targetDisplay_Injected(System.IntPtr) */
inline static auto& m94_get_targetDisplay_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[94]);
/* System.Void UnityEngine::Camera::get_worldToCameraMatrix_Injected(System.IntPtr, UnityEngine.Matrix4x4&) */
inline static auto& m95_get_worldToCameraMatrix_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[95]);
/* System.Void UnityEngine::Camera::set_worldToCameraMatrix_Injected(System.IntPtr, UnityEngine.Matrix4x4&) */
inline static auto& m96_set_worldToCameraMatrix_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[96]);
/* System.Void UnityEngine::Camera::get_projectionMatrix_Injected(System.IntPtr, UnityEngine.Matrix4x4&) */
inline static auto& m97_get_projectionMatrix_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[97]);
/* System.Void UnityEngine::Camera::set_projectionMatrix_Injected(System.IntPtr, UnityEngine.Matrix4x4&) */
inline static auto& m98_set_projectionMatrix_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[98]);
/* System.Void UnityEngine::Camera::CalculateObliqueMatrix_Injected(System.IntPtr, UnityEngine.Vector4&, UnityEngine.Matrix4x4&) */
inline static auto& m99_CalculateObliqueMatrix_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[99]);
/* System.Void UnityEngine::Camera::WorldToScreenPoint_Injected(System.IntPtr, UnityEngine.Vector3&, UnityEngine.Camera.MonoOrStereoscopicEye, UnityEngine.Vector3&) */
inline static auto& m100_WorldToScreenPoint_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[100]);
/* System.Void UnityEngine::Camera::WorldToViewportPoint_Injected(System.IntPtr, UnityEngine.Vector3&, UnityEngine.Camera.MonoOrStereoscopicEye, UnityEngine.Vector3&) */
inline static auto& m101_WorldToViewportPoint_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[101]);
/* System.Void UnityEngine::Camera::ScreenToWorldPoint_Injected(System.IntPtr, UnityEngine.Vector3&, UnityEngine.Camera.MonoOrStereoscopicEye, UnityEngine.Vector3&) */
inline static auto& m102_ScreenToWorldPoint_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[102]);
/* System.Void UnityEngine::Camera::ScreenToViewportPoint_Injected(System.IntPtr, UnityEngine.Vector3&, UnityEngine.Vector3&) */
inline static auto& m103_ScreenToViewportPoint_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[103]);
/* System.Void UnityEngine::Camera::ScreenPointToRay_Injected(System.IntPtr, UnityEngine.Vector2&, UnityEngine.Camera.MonoOrStereoscopicEye, UnityEngine.Ray&) */
inline static auto& m104_ScreenPointToRay_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[104]);
/* System.IntPtr UnityEngine::Camera::get_main_Injected() */
inline static auto& m105_get_main_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[105]);
/* System.IntPtr UnityEngine::Camera::get_currentInternal_Injected() */
inline static auto& m106_get_currentInternal_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[106]);
/* System.Int32 UnityEngine::Camera::GetAllCamerasImpl_Injected(UnityEngine.Camera[]) */
inline static auto& m107_GetAllCamerasImpl_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[107]);
/* System.Void UnityEngine::Camera::Render_Injected(System.IntPtr) */
inline static auto& m108_Render_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[108]);
/* System.Void UnityEngine::Camera::SetupCurrent_Injected(System.IntPtr) */
inline static auto& m109_SetupCurrent_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[109]);

};

}