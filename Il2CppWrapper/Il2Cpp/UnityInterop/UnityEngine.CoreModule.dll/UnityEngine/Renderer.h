
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Renderer {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 48> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* UnityEngine.Bounds UnityEngine::Renderer::get_bounds() */
inline static auto& m0_get_bounds = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void UnityEngine::Renderer::set_localBounds(UnityEngine.Bounds) */
inline static auto& m1_set_localBounds = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* UnityEngine.Material UnityEngine::Renderer::GetMaterial() */
inline static auto& m2_GetMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* UnityEngine.Material UnityEngine::Renderer::GetSharedMaterial() */
inline static auto& m3_GetSharedMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void UnityEngine::Renderer::SetMaterial(UnityEngine.Material) */
inline static auto& m4_SetMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* UnityEngine.Material[] UnityEngine::Renderer::GetMaterialArray() */
inline static auto& m5_GetMaterialArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Void UnityEngine::Renderer::SetMaterialArray(UnityEngine.Material[], System.Int32) */
inline static auto& m6_SetMaterialArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.Void UnityEngine::Renderer::SetMaterialArray(UnityEngine.Material[]) */
inline static auto& m7_SetMaterialArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.Boolean UnityEngine::Renderer::get_enabled() */
inline static auto& m8_get_enabled = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Void UnityEngine::Renderer::set_enabled(System.Boolean) */
inline static auto& m9_set_enabled = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.Boolean UnityEngine::Renderer::get_isVisible() */
inline static auto& m10_get_isVisible = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Void UnityEngine::Renderer::set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode) */
inline static auto& m11_set_shadowCastingMode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* System.Void UnityEngine::Renderer::set_receiveShadows(System.Boolean) */
inline static auto& m12_set_receiveShadows = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.Int32 UnityEngine::Renderer::get_sortingLayerID() */
inline static auto& m13_get_sortingLayerID = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* System.Void UnityEngine::Renderer::set_sortingLayerID(System.Int32) */
inline static auto& m14_set_sortingLayerID = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* System.Int32 UnityEngine::Renderer::get_sortingOrder() */
inline static auto& m15_get_sortingOrder = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* System.Void UnityEngine::Renderer::set_sortingOrder(System.Int32) */
inline static auto& m16_set_sortingOrder = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* System.Int32 UnityEngine::Renderer::get_sortingGroupID() */
inline static auto& m17_get_sortingGroupID = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.Int32 UnityEngine::Renderer::get_sortingGroupOrder() */
inline static auto& m18_get_sortingGroupOrder = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* UnityEngine.Material[] UnityEngine::Renderer::GetSharedMaterialArray() */
inline static auto& m19_GetSharedMaterialArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* UnityEngine.Material[] UnityEngine::Renderer::get_materials() */
inline static auto& m20_get_materials = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.Void UnityEngine::Renderer::set_materials(UnityEngine.Material[]) */
inline static auto& m21_set_materials = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* UnityEngine.Material UnityEngine::Renderer::get_material() */
inline static auto& m22_get_material = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* System.Void UnityEngine::Renderer::set_material(UnityEngine.Material) */
inline static auto& m23_set_material = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[23]);
/* UnityEngine.Material UnityEngine::Renderer::get_sharedMaterial() */
inline static auto& m24_get_sharedMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[24]);
/* System.Void UnityEngine::Renderer::set_sharedMaterial(UnityEngine.Material) */
inline static auto& m25_set_sharedMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[25]);
/* UnityEngine.Material[] UnityEngine::Renderer::get_sharedMaterials() */
inline static auto& m26_get_sharedMaterials = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[26]);
/* System.Void UnityEngine::Renderer::set_sharedMaterials(UnityEngine.Material[]) */
inline static auto& m27_set_sharedMaterials = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[27]);
/* System.Void UnityEngine::Renderer::.ctor() */
inline static auto& m28__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[28]);
/* System.Void UnityEngine::Renderer::get_bounds_Injected(System.IntPtr, UnityEngine.Bounds&) */
inline static auto& m29_get_bounds_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);
/* System.Void UnityEngine::Renderer::set_localBounds_Injected(System.IntPtr, UnityEngine.Bounds&) */
inline static auto& m30_set_localBounds_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[30]);
/* System.IntPtr UnityEngine::Renderer::GetMaterial_Injected(System.IntPtr) */
inline static auto& m31_GetMaterial_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[31]);
/* System.IntPtr UnityEngine::Renderer::GetSharedMaterial_Injected(System.IntPtr) */
inline static auto& m32_GetSharedMaterial_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[32]);
/* System.Void UnityEngine::Renderer::SetMaterial_Injected(System.IntPtr, System.IntPtr) */
inline static auto& m33_SetMaterial_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[33]);
/* UnityEngine.Material[] UnityEngine::Renderer::GetMaterialArray_Injected(System.IntPtr) */
inline static auto& m34_GetMaterialArray_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[34]);
/* System.Void UnityEngine::Renderer::SetMaterialArray_Injected(System.IntPtr, UnityEngine.Material[], System.Int32) */
inline static auto& m35_SetMaterialArray_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[35]);
/* System.Boolean UnityEngine::Renderer::get_enabled_Injected(System.IntPtr) */
inline static auto& m36_get_enabled_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[36]);
/* System.Void UnityEngine::Renderer::set_enabled_Injected(System.IntPtr, System.Boolean) */
inline static auto& m37_set_enabled_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[37]);
/* System.Boolean UnityEngine::Renderer::get_isVisible_Injected(System.IntPtr) */
inline static auto& m38_get_isVisible_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[38]);
/* System.Void UnityEngine::Renderer::set_shadowCastingMode_Injected(System.IntPtr, UnityEngine.Rendering.ShadowCastingMode) */
inline static auto& m39_set_shadowCastingMode_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[39]);
/* System.Void UnityEngine::Renderer::set_receiveShadows_Injected(System.IntPtr, System.Boolean) */
inline static auto& m40_set_receiveShadows_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[40]);
/* System.Int32 UnityEngine::Renderer::get_sortingLayerID_Injected(System.IntPtr) */
inline static auto& m41_get_sortingLayerID_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[41]);
/* System.Void UnityEngine::Renderer::set_sortingLayerID_Injected(System.IntPtr, System.Int32) */
inline static auto& m42_set_sortingLayerID_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[42]);
/* System.Int32 UnityEngine::Renderer::get_sortingOrder_Injected(System.IntPtr) */
inline static auto& m43_get_sortingOrder_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[43]);
/* System.Void UnityEngine::Renderer::set_sortingOrder_Injected(System.IntPtr, System.Int32) */
inline static auto& m44_set_sortingOrder_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[44]);
/* System.Int32 UnityEngine::Renderer::get_sortingGroupID_Injected(System.IntPtr) */
inline static auto& m45_get_sortingGroupID_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[45]);
/* System.Int32 UnityEngine::Renderer::get_sortingGroupOrder_Injected(System.IntPtr) */
inline static auto& m46_get_sortingGroupOrder_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[46]);
/* UnityEngine.Material[] UnityEngine::Renderer::GetSharedMaterialArray_Injected(System.IntPtr) */
inline static auto& m47_GetSharedMaterialArray_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[47]);

};

}