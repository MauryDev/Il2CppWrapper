
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Material {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 96> methods;
    inline static std::array<Il2CppWrapper::Field*, 2> fields;  
    /* System.Int32 UnityEngine::Material::k_ColorId */
inline static auto& f_k_ColorId = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.Int32 UnityEngine::Material::k_MainTexId */
inline static auto& f_k_MainTexId = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
  
    /* System.Void UnityEngine::Material::CreateWithShader(UnityEngine.Material, UnityEngine.Shader) */
inline static auto& m0_CreateWithShader = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.Void UnityEngine::Material::CreateWithMaterial(UnityEngine.Material, UnityEngine.Material) */
inline static auto& m1_CreateWithMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* System.Void UnityEngine::Material::.ctor(UnityEngine.Shader) */
inline static auto& m2__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void UnityEngine::Material::.ctor(UnityEngine.Material) */
inline static auto& m3__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void UnityEngine::Material::.ctor(System.String) */
inline static auto& m4__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* UnityEngine.Shader UnityEngine::Material::get_shader() */
inline static auto& m5_get_shader = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Void UnityEngine::Material::set_shader(UnityEngine.Shader) */
inline static auto& m6_set_shader = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* UnityEngine.Color UnityEngine::Material::get_color() */
inline static auto& m7_get_color = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.Void UnityEngine::Material::set_color(UnityEngine.Color) */
inline static auto& m8_set_color = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* UnityEngine.Texture UnityEngine::Material::get_mainTexture() */
inline static auto& m9_get_mainTexture = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.Void UnityEngine::Material::set_mainTexture(UnityEngine.Texture) */
inline static auto& m10_set_mainTexture = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* UnityEngine.Vector2 UnityEngine::Material::get_mainTextureOffset() */
inline static auto& m11_get_mainTextureOffset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* System.Void UnityEngine::Material::set_mainTextureOffset(UnityEngine.Vector2) */
inline static auto& m12_set_mainTextureOffset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.Void UnityEngine::Material::set_mainTextureScale(UnityEngine.Vector2) */
inline static auto& m13_set_mainTextureScale = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* System.Int32 UnityEngine::Material::GetFirstPropertyNameIdByAttribute(UnityEngine.Rendering.ShaderPropertyFlags) */
inline static auto& m14_GetFirstPropertyNameIdByAttribute = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* System.Boolean UnityEngine::Material::HasProperty(System.Int32) */
inline static auto& m15_HasProperty = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* System.Boolean UnityEngine::Material::HasProperty(System.String) */
inline static auto& m16_HasProperty = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* System.Boolean UnityEngine::Material::HasFloatImpl(System.Int32) */
inline static auto& m17_HasFloatImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.Boolean UnityEngine::Material::HasFloat(System.Int32) */
inline static auto& m18_HasFloat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* System.Void UnityEngine::Material::EnableKeyword(System.String) */
inline static auto& m19_EnableKeyword = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.Void UnityEngine::Material::DisableKeyword(System.String) */
inline static auto& m20_DisableKeyword = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.String UnityEngine::Material::GetTagImpl(System.String, System.Boolean, System.String) */
inline static auto& m21_GetTagImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* System.String UnityEngine::Material::GetTag(System.String, System.Boolean) */
inline static auto& m22_GetTag = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* System.Boolean UnityEngine::Material::SetPass(System.Int32) */
inline static auto& m23_SetPass = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[23]);
/* System.Void UnityEngine::Material::CopyPropertiesFromMaterial(UnityEngine.Material) */
inline static auto& m24_CopyPropertiesFromMaterial = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[24]);
/* System.String[] UnityEngine::Material::GetShaderKeywords() */
inline static auto& m25_GetShaderKeywords = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[25]);
/* System.Void UnityEngine::Material::SetShaderKeywords(System.String[]) */
inline static auto& m26_SetShaderKeywords = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[26]);
/* System.String[] UnityEngine::Material::get_shaderKeywords() */
inline static auto& m27_get_shaderKeywords = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[27]);
/* System.Void UnityEngine::Material::set_shaderKeywords(System.String[]) */
inline static auto& m28_set_shaderKeywords = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[28]);
/* System.Int32 UnityEngine::Material::ComputeCRC() */
inline static auto& m29_ComputeCRC = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[29]);
/* System.Void UnityEngine::Material::SetFloatImpl(System.Int32, System.Single) */
inline static auto& m30_SetFloatImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[30]);
/* System.Void UnityEngine::Material::SetColorImpl(System.Int32, UnityEngine.Color) */
inline static auto& m31_SetColorImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[31]);
/* System.Void UnityEngine::Material::SetMatrixImpl(System.Int32, UnityEngine.Matrix4x4) */
inline static auto& m32_SetMatrixImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[32]);
/* System.Void UnityEngine::Material::SetTextureImpl(System.Int32, UnityEngine.Texture) */
inline static auto& m33_SetTextureImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[33]);
/* System.Single UnityEngine::Material::GetFloatImpl(System.Int32) */
inline static auto& m34_GetFloatImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[34]);
/* UnityEngine.Color UnityEngine::Material::GetColorImpl(System.Int32) */
inline static auto& m35_GetColorImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[35]);
/* UnityEngine.Texture UnityEngine::Material::GetTextureImpl(System.Int32) */
inline static auto& m36_GetTextureImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[36]);
/* System.Void UnityEngine::Material::SetVectorArrayImpl(System.Int32, UnityEngine.Vector4[], System.Int32) */
inline static auto& m37_SetVectorArrayImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[37]);
/* UnityEngine.Vector4 UnityEngine::Material::GetTextureScaleAndOffsetImpl(System.Int32) */
inline static auto& m38_GetTextureScaleAndOffsetImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[38]);
/* System.Void UnityEngine::Material::SetTextureOffsetImpl(System.Int32, UnityEngine.Vector2) */
inline static auto& m39_SetTextureOffsetImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[39]);
/* System.Void UnityEngine::Material::SetTextureScaleImpl(System.Int32, UnityEngine.Vector2) */
inline static auto& m40_SetTextureScaleImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[40]);
/* System.Void UnityEngine::Material::SetVectorArray(System.Int32, UnityEngine.Vector4[], System.Int32) */
inline static auto& m41_SetVectorArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[41]);
/* System.Void UnityEngine::Material::SetInt(System.String, System.Int32) */
inline static auto& m42_SetInt = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[42]);
/* System.Void UnityEngine::Material::SetFloat(System.String, System.Single) */
inline static auto& m43_SetFloat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[43]);
/* System.Void UnityEngine::Material::SetFloat(System.Int32, System.Single) */
inline static auto& m44_SetFloat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[44]);
/* System.Void UnityEngine::Material::SetColor(System.String, UnityEngine.Color) */
inline static auto& m45_SetColor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[45]);
/* System.Void UnityEngine::Material::SetColor(System.Int32, UnityEngine.Color) */
inline static auto& m46_SetColor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[46]);
/* System.Void UnityEngine::Material::SetVector(System.String, UnityEngine.Vector4) */
inline static auto& m47_SetVector = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[47]);
/* System.Void UnityEngine::Material::SetVector(System.Int32, UnityEngine.Vector4) */
inline static auto& m48_SetVector = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[48]);
/* System.Void UnityEngine::Material::SetMatrix(System.String, UnityEngine.Matrix4x4) */
inline static auto& m49_SetMatrix = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[49]);
/* System.Void UnityEngine::Material::SetMatrix(System.Int32, UnityEngine.Matrix4x4) */
inline static auto& m50_SetMatrix = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[50]);
/* System.Void UnityEngine::Material::SetTexture(System.String, UnityEngine.Texture) */
inline static auto& m51_SetTexture = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[51]);
/* System.Void UnityEngine::Material::SetTexture(System.Int32, UnityEngine.Texture) */
inline static auto& m52_SetTexture = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[52]);
/* System.Void UnityEngine::Material::SetVectorArray(System.String, UnityEngine.Vector4[]) */
inline static auto& m53_SetVectorArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[53]);
/* System.Int32 UnityEngine::Material::GetInt(System.String) */
inline static auto& m54_GetInt = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[54]);
/* System.Single UnityEngine::Material::GetFloat(System.String) */
inline static auto& m55_GetFloat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[55]);
/* System.Single UnityEngine::Material::GetFloat(System.Int32) */
inline static auto& m56_GetFloat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[56]);
/* UnityEngine.Color UnityEngine::Material::GetColor(System.String) */
inline static auto& m57_GetColor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[57]);
/* UnityEngine.Color UnityEngine::Material::GetColor(System.Int32) */
inline static auto& m58_GetColor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[58]);
/* UnityEngine.Vector4 UnityEngine::Material::GetVector(System.String) */
inline static auto& m59_GetVector = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[59]);
/* UnityEngine.Vector4 UnityEngine::Material::GetVector(System.Int32) */
inline static auto& m60_GetVector = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[60]);
/* UnityEngine.Texture UnityEngine::Material::GetTexture(System.Int32) */
inline static auto& m61_GetTexture = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[61]);
/* System.Void UnityEngine::Material::SetTextureOffset(System.String, UnityEngine.Vector2) */
inline static auto& m62_SetTextureOffset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[62]);
/* System.Void UnityEngine::Material::SetTextureOffset(System.Int32, UnityEngine.Vector2) */
inline static auto& m63_SetTextureOffset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[63]);
/* System.Void UnityEngine::Material::SetTextureScale(System.String, UnityEngine.Vector2) */
inline static auto& m64_SetTextureScale = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[64]);
/* System.Void UnityEngine::Material::SetTextureScale(System.Int32, UnityEngine.Vector2) */
inline static auto& m65_SetTextureScale = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[65]);
/* UnityEngine.Vector2 UnityEngine::Material::GetTextureOffset(System.String) */
inline static auto& m66_GetTextureOffset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[66]);
/* UnityEngine.Vector2 UnityEngine::Material::GetTextureOffset(System.Int32) */
inline static auto& m67_GetTextureOffset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[67]);
/* UnityEngine.Vector2 UnityEngine::Material::GetTextureScale(System.Int32) */
inline static auto& m68_GetTextureScale = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[68]);
/* System.Void UnityEngine::Material::.cctor() */
inline static auto& m69__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[69]);
/* System.Void UnityEngine::Material::CreateWithShader_Injected(UnityEngine.Material, System.IntPtr) */
inline static auto& m70_CreateWithShader_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[70]);
/* System.Void UnityEngine::Material::CreateWithMaterial_Injected(UnityEngine.Material, System.IntPtr) */
inline static auto& m71_CreateWithMaterial_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[71]);
/* System.IntPtr UnityEngine::Material::get_shader_Injected(System.IntPtr) */
inline static auto& m72_get_shader_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[72]);
/* System.Void UnityEngine::Material::set_shader_Injected(System.IntPtr, System.IntPtr) */
inline static auto& m73_set_shader_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[73]);
/* System.Int32 UnityEngine::Material::GetFirstPropertyNameIdByAttribute_Injected(System.IntPtr, UnityEngine.Rendering.ShaderPropertyFlags) */
inline static auto& m74_GetFirstPropertyNameIdByAttribute_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[74]);
/* System.Boolean UnityEngine::Material::HasProperty_Injected(System.IntPtr, System.Int32) */
inline static auto& m75_HasProperty_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[75]);
/* System.Boolean UnityEngine::Material::HasFloatImpl_Injected(System.IntPtr, System.Int32) */
inline static auto& m76_HasFloatImpl_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[76]);
/* System.Void UnityEngine::Material::EnableKeyword_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m77_EnableKeyword_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[77]);
/* System.Void UnityEngine::Material::DisableKeyword_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m78_DisableKeyword_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[78]);
/* System.Void UnityEngine::Material::GetTagImpl_Injected(System.IntPtr, UnityEngine.Bindings.ManagedSpanWrapper&, System.Boolean, UnityEngine.Bindings.ManagedSpanWrapper&, UnityEngine.Bindings.ManagedSpanWrapper&) */
inline static auto& m79_GetTagImpl_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[79]);
/* System.Boolean UnityEngine::Material::SetPass_Injected(System.IntPtr, System.Int32) */
inline static auto& m80_SetPass_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[80]);
/* System.Void UnityEngine::Material::CopyPropertiesFromMaterial_Injected(System.IntPtr, System.IntPtr) */
inline static auto& m81_CopyPropertiesFromMaterial_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[81]);
/* System.String[] UnityEngine::Material::GetShaderKeywords_Injected(System.IntPtr) */
inline static auto& m82_GetShaderKeywords_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[82]);
/* System.Void UnityEngine::Material::SetShaderKeywords_Injected(System.IntPtr, System.String[]) */
inline static auto& m83_SetShaderKeywords_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[83]);
/* System.Int32 UnityEngine::Material::ComputeCRC_Injected(System.IntPtr) */
inline static auto& m84_ComputeCRC_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[84]);
/* System.Void UnityEngine::Material::SetFloatImpl_Injected(System.IntPtr, System.Int32, System.Single) */
inline static auto& m85_SetFloatImpl_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[85]);
/* System.Void UnityEngine::Material::SetColorImpl_Injected(System.IntPtr, System.Int32, UnityEngine.Color&) */
inline static auto& m86_SetColorImpl_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[86]);
/* System.Void UnityEngine::Material::SetMatrixImpl_Injected(System.IntPtr, System.Int32, UnityEngine.Matrix4x4&) */
inline static auto& m87_SetMatrixImpl_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[87]);
/* System.Void UnityEngine::Material::SetTextureImpl_Injected(System.IntPtr, System.Int32, System.IntPtr) */
inline static auto& m88_SetTextureImpl_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[88]);
/* System.Single UnityEngine::Material::GetFloatImpl_Injected(System.IntPtr, System.Int32) */
inline static auto& m89_GetFloatImpl_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[89]);
/* System.Void UnityEngine::Material::GetColorImpl_Injected(System.IntPtr, System.Int32, UnityEngine.Color&) */
inline static auto& m90_GetColorImpl_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[90]);
/* System.IntPtr UnityEngine::Material::GetTextureImpl_Injected(System.IntPtr, System.Int32) */
inline static auto& m91_GetTextureImpl_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[91]);
/* System.Void UnityEngine::Material::SetVectorArrayImpl_Injected(System.IntPtr, System.Int32, UnityEngine.Bindings.ManagedSpanWrapper&, System.Int32) */
inline static auto& m92_SetVectorArrayImpl_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[92]);
/* System.Void UnityEngine::Material::GetTextureScaleAndOffsetImpl_Injected(System.IntPtr, System.Int32, UnityEngine.Vector4&) */
inline static auto& m93_GetTextureScaleAndOffsetImpl_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[93]);
/* System.Void UnityEngine::Material::SetTextureOffsetImpl_Injected(System.IntPtr, System.Int32, UnityEngine.Vector2&) */
inline static auto& m94_SetTextureOffsetImpl_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[94]);
/* System.Void UnityEngine::Material::SetTextureScaleImpl_Injected(System.IntPtr, System.Int32, UnityEngine.Vector2&) */
inline static auto& m95_SetTextureScaleImpl_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[95]);

};

}