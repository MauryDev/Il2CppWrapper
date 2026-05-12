
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Texture {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 35> methods;
    inline static std::array<Il2CppWrapper::Field*, 1> fields;  
    /* System.Int32 UnityEngine::Texture::GenerateAllMips */
inline static auto& f_GenerateAllMips = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
  
    /* System.Void UnityEngine::Texture::.ctor() */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Int32 UnityEngine::Texture::GetDataWidth() */
inline static auto& m1_GetDataWidth = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Int32 UnityEngine::Texture::GetDataHeight() */
inline static auto& m2_GetDataHeight = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Int32 UnityEngine::Texture::get_width() */
inline static auto& m3_get_width = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* System.Void UnityEngine::Texture::set_width(System.Int32) */
inline static auto& m4_set_width = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[4]);
/* System.Int32 UnityEngine::Texture::get_height() */
inline static auto& m5_get_height = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Void UnityEngine::Texture::set_height(System.Int32) */
inline static auto& m6_set_height = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.Boolean UnityEngine::Texture::get_isReadable() */
inline static auto& m7_get_isReadable = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);
/* UnityEngine.TextureWrapMode UnityEngine::Texture::get_wrapMode() */
inline static auto& m8_get_wrapMode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Void UnityEngine::Texture::set_wrapMode(UnityEngine.TextureWrapMode) */
inline static auto& m9_set_wrapMode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* UnityEngine.FilterMode UnityEngine::Texture::get_filterMode() */
inline static auto& m10_get_filterMode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Void UnityEngine::Texture::set_filterMode(UnityEngine.FilterMode) */
inline static auto& m11_set_filterMode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* System.Int32 UnityEngine::Texture::get_anisoLevel() */
inline static auto& m12_get_anisoLevel = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.Void UnityEngine::Texture::set_anisoLevel(System.Int32) */
inline static auto& m13_set_anisoLevel = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* UnityEngine.Vector2 UnityEngine::Texture::get_texelSize() */
inline static auto& m14_get_texelSize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* System.Int32 UnityEngine::Texture::Internal_GetActiveTextureColorSpace() */
inline static auto& m15_Internal_GetActiveTextureColorSpace = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* UnityEngine.ColorSpace UnityEngine::Texture::get_activeTextureColorSpace() */
inline static auto& m16_get_activeTextureColorSpace = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* UnityEngine.TextureColorSpace UnityEngine::Texture::GetTextureColorSpace(System.Boolean) */
inline static auto& m17_GetTextureColorSpace = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* UnityEngine.TextureColorSpace UnityEngine::Texture::GetTextureColorSpace(UnityEngine.Experimental.Rendering.GraphicsFormat) */
inline static auto& m18_GetTextureColorSpace = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* System.Boolean UnityEngine::Texture::ValidateFormat(UnityEngine.TextureFormat) */
inline static auto& m19_ValidateFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.Boolean UnityEngine::Texture::ValidateFormat(UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.Experimental.Rendering.GraphicsFormatUsage) */
inline static auto& m20_ValidateFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* UnityEngine.UnityException UnityEngine::Texture::CreateNonReadableException(UnityEngine.Texture) */
inline static auto& m21_CreateNonReadableException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* UnityEngine.UnityException UnityEngine::Texture::CreateNativeArrayLengthOverflowException() */
inline static auto& m22_CreateNativeArrayLengthOverflowException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* System.Void UnityEngine::Texture::.cctor() */
inline static auto& m23__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* System.Int32 UnityEngine::Texture::GetDataWidth_Injected(System.IntPtr) */
inline static auto& m24_GetDataWidth_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* System.Int32 UnityEngine::Texture::GetDataHeight_Injected(System.IntPtr) */
inline static auto& m25_GetDataHeight_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* System.Boolean UnityEngine::Texture::get_isReadable_Injected(System.IntPtr) */
inline static auto& m26_get_isReadable_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* UnityEngine.TextureWrapMode UnityEngine::Texture::get_wrapMode_Injected(System.IntPtr) */
inline static auto& m27_get_wrapMode_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);
/* System.Void UnityEngine::Texture::set_wrapMode_Injected(System.IntPtr, UnityEngine.TextureWrapMode) */
inline static auto& m28_set_wrapMode_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[28]);
/* UnityEngine.FilterMode UnityEngine::Texture::get_filterMode_Injected(System.IntPtr) */
inline static auto& m29_get_filterMode_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);
/* System.Void UnityEngine::Texture::set_filterMode_Injected(System.IntPtr, UnityEngine.FilterMode) */
inline static auto& m30_set_filterMode_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[30]);
/* System.Int32 UnityEngine::Texture::get_anisoLevel_Injected(System.IntPtr) */
inline static auto& m31_get_anisoLevel_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[31]);
/* System.Void UnityEngine::Texture::set_anisoLevel_Injected(System.IntPtr, System.Int32) */
inline static auto& m32_set_anisoLevel_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[32]);
/* System.Void UnityEngine::Texture::get_texelSize_Injected(System.IntPtr, UnityEngine.Vector2&) */
inline static auto& m33_get_texelSize_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[33]);
/* System.Int32 UnityEngine::Texture::Internal_GetActiveTextureColorSpace_Injected(System.IntPtr) */
inline static auto& m34_Internal_GetActiveTextureColorSpace_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[34]);

};

}