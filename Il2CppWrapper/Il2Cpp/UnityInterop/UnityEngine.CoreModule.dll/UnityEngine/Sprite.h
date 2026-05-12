
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Sprite {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 49> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Void UnityEngine::Sprite::.ctor() */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Int32 UnityEngine::Sprite::GetPackingRotation() */
inline static auto& m1_GetPackingRotation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Int32 UnityEngine::Sprite::GetPacked() */
inline static auto& m2_GetPacked = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* UnityEngine.Vector2 UnityEngine::Sprite::GetTextureRectOffset() */
inline static auto& m3_GetTextureRectOffset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* UnityEngine.Vector4 UnityEngine::Sprite::GetInnerUVs() */
inline static auto& m4_GetInnerUVs = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* UnityEngine.Vector4 UnityEngine::Sprite::GetOuterUVs() */
inline static auto& m5_GetOuterUVs = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* UnityEngine.Vector4 UnityEngine::Sprite::GetPadding() */
inline static auto& m6_GetPadding = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* UnityEngine.Sprite UnityEngine::Sprite::CreateSprite(UnityEngine.Texture2D, UnityEngine.Rect, UnityEngine.Vector2, System.Single, System.UInt32, UnityEngine.SpriteMeshType, UnityEngine.Vector4, System.Boolean, UnityEngine.SecondarySpriteTexture[]) */
inline static auto& m7_CreateSprite = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* UnityEngine.Bounds UnityEngine::Sprite::get_bounds() */
inline static auto& m8_get_bounds = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* UnityEngine.Rect UnityEngine::Sprite::get_rect() */
inline static auto& m9_get_rect = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* UnityEngine.Vector4 UnityEngine::Sprite::get_border() */
inline static auto& m10_get_border = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* UnityEngine.Texture2D UnityEngine::Sprite::get_texture() */
inline static auto& m11_get_texture = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* System.Int32 UnityEngine::Sprite::GetSecondaryTextureCount() */
inline static auto& m12_GetSecondaryTextureCount = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.Int32 UnityEngine::Sprite::GetSecondaryTextures(UnityEngine.SecondarySpriteTexture[]) */
inline static auto& m13_GetSecondaryTextures = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* System.Single UnityEngine::Sprite::get_pixelsPerUnit() */
inline static auto& m14_get_pixelsPerUnit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* UnityEngine.Texture2D UnityEngine::Sprite::get_associatedAlphaSplitTexture() */
inline static auto& m15_get_associatedAlphaSplitTexture = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* UnityEngine.Vector2 UnityEngine::Sprite::get_pivot() */
inline static auto& m16_get_pivot = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* System.Boolean UnityEngine::Sprite::get_packed() */
inline static auto& m17_get_packed = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* UnityEngine.SpritePackingRotation UnityEngine::Sprite::get_packingRotation() */
inline static auto& m18_get_packingRotation = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* UnityEngine.Vector2 UnityEngine::Sprite::get_textureRectOffset() */
inline static auto& m19_get_textureRectOffset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* UnityEngine.Vector2[] UnityEngine::Sprite::get_vertices() */
inline static auto& m20_get_vertices = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.UInt16[] UnityEngine::Sprite::get_triangles() */
inline static auto& m21_get_triangles = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* UnityEngine.Vector2[] UnityEngine::Sprite::get_uv() */
inline static auto& m22_get_uv = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* UnityEngine.Sprite UnityEngine::Sprite::Create(UnityEngine.Texture2D, UnityEngine.Rect, UnityEngine.Vector2, System.Single, System.UInt32, UnityEngine.SpriteMeshType, UnityEngine.Vector4, System.Boolean) */
inline static auto& m23_Create = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* UnityEngine.Sprite UnityEngine::Sprite::Create(UnityEngine.Texture2D, UnityEngine.Rect, UnityEngine.Vector2, System.Single, System.UInt32, UnityEngine.SpriteMeshType, UnityEngine.Vector4, System.Boolean, UnityEngine.SecondarySpriteTexture[]) */
inline static auto& m24_Create = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* UnityEngine.Sprite UnityEngine::Sprite::Create(UnityEngine.Texture2D, UnityEngine.Rect, UnityEngine.Vector2, System.Single, System.UInt32, UnityEngine.SpriteMeshType, UnityEngine.Vector4) */
inline static auto& m25_Create = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* UnityEngine.Sprite UnityEngine::Sprite::Create(UnityEngine.Texture2D, UnityEngine.Rect, UnityEngine.Vector2, System.Single, System.UInt32, UnityEngine.SpriteMeshType) */
inline static auto& m26_Create = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* UnityEngine.Sprite UnityEngine::Sprite::Create(UnityEngine.Texture2D, UnityEngine.Rect, UnityEngine.Vector2, System.Single, System.UInt32) */
inline static auto& m27_Create = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);
/* UnityEngine.Sprite UnityEngine::Sprite::Create(UnityEngine.Texture2D, UnityEngine.Rect, UnityEngine.Vector2, System.Single) */
inline static auto& m28_Create = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[28]);
/* UnityEngine.Sprite UnityEngine::Sprite::Create(UnityEngine.Texture2D, UnityEngine.Rect, UnityEngine.Vector2) */
inline static auto& m29_Create = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);
/* System.Int32 UnityEngine::Sprite::GetPackingRotation_Injected(System.IntPtr) */
inline static auto& m30_GetPackingRotation_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[30]);
/* System.Int32 UnityEngine::Sprite::GetPacked_Injected(System.IntPtr) */
inline static auto& m31_GetPacked_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[31]);
/* System.Void UnityEngine::Sprite::GetTextureRectOffset_Injected(System.IntPtr, UnityEngine.Vector2&) */
inline static auto& m32_GetTextureRectOffset_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[32]);
/* System.Void UnityEngine::Sprite::GetInnerUVs_Injected(System.IntPtr, UnityEngine.Vector4&) */
inline static auto& m33_GetInnerUVs_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[33]);
/* System.Void UnityEngine::Sprite::GetOuterUVs_Injected(System.IntPtr, UnityEngine.Vector4&) */
inline static auto& m34_GetOuterUVs_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[34]);
/* System.Void UnityEngine::Sprite::GetPadding_Injected(System.IntPtr, UnityEngine.Vector4&) */
inline static auto& m35_GetPadding_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[35]);
/* System.IntPtr UnityEngine::Sprite::CreateSprite_Injected(System.IntPtr, UnityEngine.Rect&, UnityEngine.Vector2&, System.Single, System.UInt32, UnityEngine.SpriteMeshType, UnityEngine.Vector4&, System.Boolean, UnityEngine.SecondarySpriteTexture[]) */
inline static auto& m36_CreateSprite_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[36]);
/* System.Void UnityEngine::Sprite::get_bounds_Injected(System.IntPtr, UnityEngine.Bounds&) */
inline static auto& m37_get_bounds_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[37]);
/* System.Void UnityEngine::Sprite::get_rect_Injected(System.IntPtr, UnityEngine.Rect&) */
inline static auto& m38_get_rect_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[38]);
/* System.Void UnityEngine::Sprite::get_border_Injected(System.IntPtr, UnityEngine.Vector4&) */
inline static auto& m39_get_border_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[39]);
/* System.IntPtr UnityEngine::Sprite::get_texture_Injected(System.IntPtr) */
inline static auto& m40_get_texture_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[40]);
/* System.Int32 UnityEngine::Sprite::GetSecondaryTextureCount_Injected(System.IntPtr) */
inline static auto& m41_GetSecondaryTextureCount_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[41]);
/* System.Int32 UnityEngine::Sprite::GetSecondaryTextures_Injected(System.IntPtr, UnityEngine.SecondarySpriteTexture[]) */
inline static auto& m42_GetSecondaryTextures_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[42]);
/* System.Single UnityEngine::Sprite::get_pixelsPerUnit_Injected(System.IntPtr) */
inline static auto& m43_get_pixelsPerUnit_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[43]);
/* System.IntPtr UnityEngine::Sprite::get_associatedAlphaSplitTexture_Injected(System.IntPtr) */
inline static auto& m44_get_associatedAlphaSplitTexture_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[44]);
/* System.Void UnityEngine::Sprite::get_pivot_Injected(System.IntPtr, UnityEngine.Vector2&) */
inline static auto& m45_get_pivot_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[45]);
/* UnityEngine.Vector2[] UnityEngine::Sprite::get_vertices_Injected(System.IntPtr) */
inline static auto& m46_get_vertices_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[46]);
/* System.UInt16[] UnityEngine::Sprite::get_triangles_Injected(System.IntPtr) */
inline static auto& m47_get_triangles_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[47]);
/* UnityEngine.Vector2[] UnityEngine::Sprite::get_uv_Injected(System.IntPtr) */
inline static auto& m48_get_uv_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[48]);

};

}