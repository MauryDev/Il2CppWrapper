
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Color {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 40> methods;
    inline static std::array<Il2CppWrapper::Field*, 4> fields;  
    /* System.Single UnityEngine::Color::r */
inline static auto& f_r = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* System.Single UnityEngine::Color::g */
inline static auto& f_g = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* System.Single UnityEngine::Color::b */
inline static auto& f_b = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[2]);
/* System.Single UnityEngine::Color::a */
inline static auto& f_a = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[3]);
  
    /* System.Void UnityEngine::Color::.ctor(System.Single, System.Single, System.Single, System.Single) */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void UnityEngine::Color::.ctor(System.Single, System.Single, System.Single) */
inline static auto& m1__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.String UnityEngine::Color::ToString() */
inline static auto& m2_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[2]);
/* System.String UnityEngine::Color::ToString(System.String, System.IFormatProvider) */
inline static auto& m3_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* System.Int32 UnityEngine::Color::GetHashCode() */
inline static auto& m4_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[4]);
/* System.Boolean UnityEngine::Color::Equals(System.Object) */
inline static auto& m5_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Boolean UnityEngine::Color::Equals(UnityEngine.Color) */
inline static auto& m6_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* UnityEngine.Color UnityEngine::Color::op_Addition(UnityEngine.Color, UnityEngine.Color) */
inline static auto& m7_op_Addition = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* UnityEngine.Color UnityEngine::Color::op_Subtraction(UnityEngine.Color, UnityEngine.Color) */
inline static auto& m8_op_Subtraction = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);
/* UnityEngine.Color UnityEngine::Color::op_Multiply(UnityEngine.Color, UnityEngine.Color) */
inline static auto& m9_op_Multiply = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* UnityEngine.Color UnityEngine::Color::op_Multiply(UnityEngine.Color, System.Single) */
inline static auto& m10_op_Multiply = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);
/* UnityEngine.Color UnityEngine::Color::op_Multiply(System.Single, UnityEngine.Color) */
inline static auto& m11_op_Multiply = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* UnityEngine.Color UnityEngine::Color::op_Division(UnityEngine.Color, System.Single) */
inline static auto& m12_op_Division = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);
/* System.Boolean UnityEngine::Color::op_Equality(UnityEngine.Color, UnityEngine.Color) */
inline static auto& m13_op_Equality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.Boolean UnityEngine::Color::op_Inequality(UnityEngine.Color, UnityEngine.Color) */
inline static auto& m14_op_Inequality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);
/* UnityEngine.Color UnityEngine::Color::Lerp(UnityEngine.Color, UnityEngine.Color, System.Single) */
inline static auto& m15_Lerp = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[15]);
/* UnityEngine.Color UnityEngine::Color::LerpUnclamped(UnityEngine.Color, UnityEngine.Color, System.Single) */
inline static auto& m16_LerpUnclamped = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[16]);
/* UnityEngine.Color UnityEngine::Color::RGBMultiplied(System.Single) */
inline static auto& m17_RGBMultiplied = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.Single UnityEngine::Color::get_grayscale() */
inline static auto& m18_get_grayscale = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* UnityEngine.Color UnityEngine::Color::get_linear() */
inline static auto& m19_get_linear = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.Single UnityEngine::Color::get_maxColorComponent() */
inline static auto& m20_get_maxColorComponent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* UnityEngine.Vector4 UnityEngine::Color::op_Implicit(UnityEngine.Color) */
inline static auto& m21_op_Implicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[21]);
/* UnityEngine.Color UnityEngine::Color::op_Implicit(UnityEngine.Vector4) */
inline static auto& m22_op_Implicit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[22]);
/* System.Single UnityEngine::Color::get_Item(System.Int32) */
inline static auto& m23_get_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[23]);
/* System.Void UnityEngine::Color::RGBToHSV(UnityEngine.Color, System.Single&, System.Single&, System.Single&) */
inline static auto& m24_RGBToHSV = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* System.Void UnityEngine::Color::RGBToHSVHelper(System.Single, System.Single, System.Single, System.Single, System.Single&, System.Single&, System.Single&) */
inline static auto& m25_RGBToHSVHelper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* UnityEngine.Color UnityEngine::Color::HSVToRGB(System.Single, System.Single, System.Single) */
inline static auto& m26_HSVToRGB = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* UnityEngine.Color UnityEngine::Color::HSVToRGB(System.Single, System.Single, System.Single, System.Boolean) */
inline static auto& m27_HSVToRGB = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);
/* UnityEngine.Color UnityEngine::Color::get_black() */
inline static auto& m28_get_black = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[28]);
/* UnityEngine.Color UnityEngine::Color::get_blue() */
inline static auto& m29_get_blue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);
/* UnityEngine.Color UnityEngine::Color::get_clear() */
inline static auto& m30_get_clear = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[30]);
/* UnityEngine.Color UnityEngine::Color::get_cyan() */
inline static auto& m31_get_cyan = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[31]);
/* UnityEngine.Color UnityEngine::Color::get_gray() */
inline static auto& m32_get_gray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[32]);
/* UnityEngine.Color UnityEngine::Color::get_grey() */
inline static auto& m33_get_grey = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[33]);
/* UnityEngine.Color UnityEngine::Color::get_gray5() */
inline static auto& m34_get_gray5 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[34]);
/* UnityEngine.Color UnityEngine::Color::get_green() */
inline static auto& m35_get_green = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[35]);
/* UnityEngine.Color UnityEngine::Color::get_magenta() */
inline static auto& m36_get_magenta = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[36]);
/* UnityEngine.Color UnityEngine::Color::get_red() */
inline static auto& m37_get_red = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[37]);
/* UnityEngine.Color UnityEngine::Color::get_white() */
inline static auto& m38_get_white = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[38]);
/* UnityEngine.Color UnityEngine::Color::get_yellow() */
inline static auto& m39_get_yellow = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[39]);

};

}