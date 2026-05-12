
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Texture2D {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 53> methods;
    inline static std::array<Il2CppWrapper::Field*, 2> fields;  
    /* System.Int32 UnityEngine::Texture2D::streamingMipmapsPriorityMin */
inline static auto& f_streamingMipmapsPriorityMin = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.Int32 UnityEngine::Texture2D::streamingMipmapsPriorityMax */
inline static auto& f_streamingMipmapsPriorityMax = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
  
    /* UnityEngine.TextureFormat UnityEngine::Texture2D::get_format() */
inline static auto& m0_get_format = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* UnityEngine.Texture2D UnityEngine::Texture2D::get_whiteTexture() */
inline static auto& m1_get_whiteTexture = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* System.Boolean UnityEngine::Texture2D::Internal_CreateEmptyImpl(UnityEngine.Texture2D) */
inline static auto& m2_Internal_CreateEmptyImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* System.Boolean UnityEngine::Texture2D::Internal_CreateImpl(UnityEngine.Texture2D, System.Int32, System.Int32, System.Int32, UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.TextureColorSpace, UnityEngine.Experimental.Rendering.TextureCreationFlags, System.IntPtr, System.Boolean, System.String) */
inline static auto& m3_Internal_CreateImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* System.Void UnityEngine::Texture2D::Internal_Create(UnityEngine.Texture2D, System.Int32, System.Int32, System.Int32, UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.TextureColorSpace, UnityEngine.Experimental.Rendering.TextureCreationFlags, System.IntPtr, System.Boolean, System.String) */
inline static auto& m4_Internal_Create = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.Boolean UnityEngine::Texture2D::get_isReadable() */
inline static auto& m5_get_isReadable = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Void UnityEngine::Texture2D::ApplyImpl(System.Boolean, System.Boolean) */
inline static auto& m6_ApplyImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.Boolean UnityEngine::Texture2D::ReinitializeImpl(System.Int32, System.Int32) */
inline static auto& m7_ReinitializeImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.Void UnityEngine::Texture2D::SetPixelImpl(System.Int32, System.Int32, System.Int32, System.Int32, UnityEngine.Color) */
inline static auto& m8_SetPixelImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* UnityEngine.Color UnityEngine::Texture2D::GetPixelImpl(System.Int32, System.Int32, System.Int32, System.Int32) */
inline static auto& m9_GetPixelImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* UnityEngine.Color UnityEngine::Texture2D::GetPixelBilinearImpl(System.Int32, System.Int32, System.Single, System.Single) */
inline static auto& m10_GetPixelBilinearImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Boolean UnityEngine::Texture2D::ReinitializeWithTextureFormatImpl(System.Int32, System.Int32, UnityEngine.TextureFormat, System.Boolean) */
inline static auto& m11_ReinitializeWithTextureFormatImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* System.Void UnityEngine::Texture2D::ReadPixelsImpl(UnityEngine.Rect, System.Int32, System.Int32, System.Boolean) */
inline static auto& m12_ReadPixelsImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.IntPtr UnityEngine::Texture2D::GetWritableImageData(System.Int32) */
inline static auto& m13_GetWritableImageData = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* System.UInt64 UnityEngine::Texture2D::GetImageDataSize() */
inline static auto& m14_GetImageDataSize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* System.Void UnityEngine::Texture2D::SetAllPixels32(UnityEngine.Color32[], System.Int32) */
inline static auto& m15_SetAllPixels32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* UnityEngine.Color[] UnityEngine::Texture2D::GetPixels(System.Int32, System.Int32, System.Int32, System.Int32, System.Int32) */
inline static auto& m16_GetPixels = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* UnityEngine.Color[] UnityEngine::Texture2D::GetPixels(System.Int32, System.Int32, System.Int32, System.Int32) */
inline static auto& m17_GetPixels = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* UnityEngine.Color32[] UnityEngine::Texture2D::GetPixels32(System.Int32) */
inline static auto& m18_GetPixels32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* UnityEngine.Color32[] UnityEngine::Texture2D::GetPixels32() */
inline static auto& m19_GetPixels32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.Boolean UnityEngine::Texture2D::ValidateFormat(UnityEngine.TextureFormat, System.Int32, System.Int32) */
inline static auto& m20_ValidateFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.Void UnityEngine::Texture2D::.ctor(System.Int32, System.Int32, UnityEngine.TextureFormat, System.Int32, System.Boolean, System.IntPtr, System.Boolean, UnityEngine.MipmapLimitDescriptor) */
inline static auto& m21__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* System.Void UnityEngine::Texture2D::.ctor(System.Int32, System.Int32, UnityEngine.TextureFormat, System.Int32, System.Boolean) */
inline static auto& m22__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* System.Void UnityEngine::Texture2D::.ctor(System.Int32, System.Int32, UnityEngine.TextureFormat, System.Boolean) */
inline static auto& m23__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[23]);
/* System.Void UnityEngine::Texture2D::.ctor(System.Int32, System.Int32) */
inline static auto& m24__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[24]);
/* System.Void UnityEngine::Texture2D::SetPixel(System.Int32, System.Int32, UnityEngine.Color) */
inline static auto& m25_SetPixel = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[25]);
/* UnityEngine.Color UnityEngine::Texture2D::GetPixel(System.Int32, System.Int32) */
inline static auto& m26_GetPixel = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[26]);
/* UnityEngine.Color UnityEngine::Texture2D::GetPixelBilinear(System.Single, System.Single) */
inline static auto& m27_GetPixelBilinear = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[27]);
/* Unity.Collections.NativeArray<T> UnityEngine::Texture2D::GetRawTextureData() */
inline static auto& m28_GetRawTextureData = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[28]);
/* System.Void UnityEngine::Texture2D::Apply(System.Boolean, System.Boolean) */
inline static auto& m29_Apply = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[29]);
/* System.Void UnityEngine::Texture2D::Apply() */
inline static auto& m30_Apply = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[30]);
/* System.Boolean UnityEngine::Texture2D::Reinitialize(System.Int32, System.Int32) */
inline static auto& m31_Reinitialize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[31]);
/* System.Boolean UnityEngine::Texture2D::Reinitialize(System.Int32, System.Int32, UnityEngine.TextureFormat, System.Boolean) */
inline static auto& m32_Reinitialize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[32]);
/* System.Void UnityEngine::Texture2D::ReadPixels(UnityEngine.Rect, System.Int32, System.Int32, System.Boolean) */
inline static auto& m33_ReadPixels = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[33]);
/* System.Void UnityEngine::Texture2D::ReadPixels(UnityEngine.Rect, System.Int32, System.Int32) */
inline static auto& m34_ReadPixels = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[34]);
/* System.Void UnityEngine::Texture2D::SetPixels32(UnityEngine.Color32[], System.Int32) */
inline static auto& m35_SetPixels32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[35]);
/* System.Void UnityEngine::Texture2D::SetPixels32(UnityEngine.Color32[]) */
inline static auto& m36_SetPixels32 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[36]);
/* UnityEngine.TextureFormat UnityEngine::Texture2D::get_format_Injected(System.IntPtr) */
inline static auto& m37_get_format_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[37]);
/* System.IntPtr UnityEngine::Texture2D::get_whiteTexture_Injected() */
inline static auto& m38_get_whiteTexture_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[38]);
/* System.Boolean UnityEngine::Texture2D::Internal_CreateImpl_Injected(UnityEngine.Texture2D, System.Int32, System.Int32, System.Int32, UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.TextureColorSpace, UnityEngine.Experimental.Rendering.TextureCreationFlags, System.IntPtr, System.Boolean, UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m39_Internal_CreateImpl_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[39]);
/* System.Boolean UnityEngine::Texture2D::get_isReadable_Injected(System.IntPtr) */
inline static auto& m40_get_isReadable_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[40]);
/* System.Void UnityEngine::Texture2D::ApplyImpl_Injected(System.IntPtr, System.Boolean, System.Boolean) */
inline static auto& m41_ApplyImpl_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[41]);
/* System.Boolean UnityEngine::Texture2D::ReinitializeImpl_Injected(System.IntPtr, System.Int32, System.Int32) */
inline static auto& m42_ReinitializeImpl_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[42]);
/* System.Void UnityEngine::Texture2D::SetPixelImpl_Injected(System.IntPtr, System.Int32, System.Int32, System.Int32, System.Int32, UnityEngine.Color&) */
inline static auto& m43_SetPixelImpl_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[43]);
/* System.Void UnityEngine::Texture2D::GetPixelImpl_Injected(System.IntPtr, System.Int32, System.Int32, System.Int32, System.Int32, UnityEngine.Color&) */
inline static auto& m44_GetPixelImpl_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[44]);
/* System.Void UnityEngine::Texture2D::GetPixelBilinearImpl_Injected(System.IntPtr, System.Int32, System.Int32, System.Single, System.Single, UnityEngine.Color&) */
inline static auto& m45_GetPixelBilinearImpl_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[45]);
/* System.Boolean UnityEngine::Texture2D::ReinitializeWithTextureFormatImpl_Injected(System.IntPtr, System.Int32, System.Int32, UnityEngine.TextureFormat, System.Boolean) */
inline static auto& m46_ReinitializeWithTextureFormatImpl_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[46]);
/* System.Void UnityEngine::Texture2D::ReadPixelsImpl_Injected(System.IntPtr, UnityEngine.Rect&, System.Int32, System.Int32, System.Boolean) */
inline static auto& m47_ReadPixelsImpl_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[47]);
/* System.IntPtr UnityEngine::Texture2D::GetWritableImageData_Injected(System.IntPtr, System.Int32) */
inline static auto& m48_GetWritableImageData_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[48]);
/* System.UInt64 UnityEngine::Texture2D::GetImageDataSize_Injected(System.IntPtr) */
inline static auto& m49_GetImageDataSize_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[49]);
/* System.Void UnityEngine::Texture2D::SetAllPixels32_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&, System.Int32) */
inline static auto& m50_SetAllPixels32_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[50]);
/* UnityEngine.Color[] UnityEngine::Texture2D::GetPixels_Injected(System.IntPtr, System.Int32, System.Int32, System.Int32, System.Int32, System.Int32) */
inline static auto& m51_GetPixels_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[51]);
/* UnityEngine.Color32[] UnityEngine::Texture2D::GetPixels32_Injected(System.IntPtr, System.Int32) */
inline static auto& m52_GetPixels32_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[52]);

};

}