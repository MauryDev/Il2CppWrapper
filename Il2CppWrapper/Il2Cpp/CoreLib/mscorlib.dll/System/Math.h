
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct Math {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 59> methods;
    inline static std::array<Il2CppWrapper::Field*, 2> fields;  
    /* System.Double System::Math::doubleRoundLimit */
inline static auto& f_doubleRoundLimit = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.Double[] System::Math::roundPower10Double */
inline static auto& f_roundPower10Double = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
  
    /* System.Int32 System::Math::Abs(System.Int32) */
inline static auto& m0_Abs = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.Int64 System::Math::Abs(System.Int64) */
inline static auto& m1_Abs = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* System.Decimal System::Math::Abs(System.Decimal) */
inline static auto& m2_Abs = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* System.Void System::Math::ThrowAbsOverflow() */
inline static auto& m3_ThrowAbsOverflow = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* System.Int32 System::Math::DivRem(System.Int32, System.Int32, System.Int32&) */
inline static auto& m4_DivRem = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.Int32 System::Math::Clamp(System.Int32, System.Int32, System.Int32) */
inline static auto& m5_Clamp = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.Single System::Math::Clamp(System.Single, System.Single, System.Single) */
inline static auto& m6_Clamp = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.Double System::Math::IEEERemainder(System.Double, System.Double) */
inline static auto& m7_IEEERemainder = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Double System::Math::Log(System.Double, System.Double) */
inline static auto& m8_Log = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);
/* System.Byte System::Math::Max(System.Byte, System.Byte) */
inline static auto& m9_Max = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* System.Decimal System::Math::Max(System.Decimal, System.Decimal) */
inline static auto& m10_Max = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);
/* System.Double System::Math::Max(System.Double, System.Double) */
inline static auto& m11_Max = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* System.Int16 System::Math::Max(System.Int16, System.Int16) */
inline static auto& m12_Max = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);
/* System.Int32 System::Math::Max(System.Int32, System.Int32) */
inline static auto& m13_Max = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.Int64 System::Math::Max(System.Int64, System.Int64) */
inline static auto& m14_Max = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);
/* System.SByte System::Math::Max(System.SByte, System.SByte) */
inline static auto& m15_Max = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[15]);
/* System.Single System::Math::Max(System.Single, System.Single) */
inline static auto& m16_Max = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[16]);
/* System.UInt16 System::Math::Max(System.UInt16, System.UInt16) */
inline static auto& m17_Max = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[17]);
/* System.UInt32 System::Math::Max(System.UInt32, System.UInt32) */
inline static auto& m18_Max = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[18]);
/* System.UInt64 System::Math::Max(System.UInt64, System.UInt64) */
inline static auto& m19_Max = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[19]);
/* System.Byte System::Math::Min(System.Byte, System.Byte) */
inline static auto& m20_Min = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[20]);
/* System.Decimal System::Math::Min(System.Decimal, System.Decimal) */
inline static auto& m21_Min = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[21]);
/* System.Double System::Math::Min(System.Double, System.Double) */
inline static auto& m22_Min = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[22]);
/* System.Int16 System::Math::Min(System.Int16, System.Int16) */
inline static auto& m23_Min = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* System.Int32 System::Math::Min(System.Int32, System.Int32) */
inline static auto& m24_Min = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* System.Int64 System::Math::Min(System.Int64, System.Int64) */
inline static auto& m25_Min = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* System.SByte System::Math::Min(System.SByte, System.SByte) */
inline static auto& m26_Min = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* System.Single System::Math::Min(System.Single, System.Single) */
inline static auto& m27_Min = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);
/* System.UInt16 System::Math::Min(System.UInt16, System.UInt16) */
inline static auto& m28_Min = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[28]);
/* System.UInt32 System::Math::Min(System.UInt32, System.UInt32) */
inline static auto& m29_Min = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);
/* System.UInt64 System::Math::Min(System.UInt64, System.UInt64) */
inline static auto& m30_Min = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[30]);
/* System.Decimal System::Math::Round(System.Decimal) */
inline static auto& m31_Round = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[31]);
/* System.Double System::Math::Round(System.Double) */
inline static auto& m32_Round = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[32]);
/* System.Double System::Math::Round(System.Double, System.Int32) */
inline static auto& m33_Round = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[33]);
/* System.Double System::Math::Round(System.Double, System.MidpointRounding) */
inline static auto& m34_Round = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[34]);
/* System.Double System::Math::Round(System.Double, System.Int32, System.MidpointRounding) */
inline static auto& m35_Round = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[35]);
/* System.Int32 System::Math::Sign(System.Double) */
inline static auto& m36_Sign = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[36]);
/* System.Int32 System::Math::Sign(System.Int64) */
inline static auto& m37_Sign = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[37]);
/* System.Int32 System::Math::Sign(System.Single) */
inline static auto& m38_Sign = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[38]);
/* System.Decimal System::Math::Truncate(System.Decimal) */
inline static auto& m39_Truncate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[39]);
/* System.Double System::Math::Truncate(System.Double) */
inline static auto& m40_Truncate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[40]);
/* System.Void System::Math::ThrowMinMaxException(T, T) */
inline static auto& m41_ThrowMinMaxException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[41]);
/* System.Double System::Math::Abs(System.Double) */
inline static auto& m42_Abs = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[42]);
/* System.Single System::Math::Abs(System.Single) */
inline static auto& m43_Abs = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[43]);
/* System.Double System::Math::Acos(System.Double) */
inline static auto& m44_Acos = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[44]);
/* System.Double System::Math::Asin(System.Double) */
inline static auto& m45_Asin = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[45]);
/* System.Double System::Math::Atan(System.Double) */
inline static auto& m46_Atan = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[46]);
/* System.Double System::Math::Atan2(System.Double, System.Double) */
inline static auto& m47_Atan2 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[47]);
/* System.Double System::Math::Ceiling(System.Double) */
inline static auto& m48_Ceiling = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[48]);
/* System.Double System::Math::Cos(System.Double) */
inline static auto& m49_Cos = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[49]);
/* System.Double System::Math::Floor(System.Double) */
inline static auto& m50_Floor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[50]);
/* System.Double System::Math::Log(System.Double) */
inline static auto& m51_Log = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[51]);
/* System.Double System::Math::Log10(System.Double) */
inline static auto& m52_Log10 = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[52]);
/* System.Double System::Math::Pow(System.Double, System.Double) */
inline static auto& m53_Pow = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[53]);
/* System.Double System::Math::Sin(System.Double) */
inline static auto& m54_Sin = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[54]);
/* System.Double System::Math::Sqrt(System.Double) */
inline static auto& m55_Sqrt = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[55]);
/* System.Double System::Math::Tan(System.Double) */
inline static auto& m56_Tan = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[56]);
/* System.Double System::Math::ModF(System.Double, System.Double*) */
inline static auto& m57_ModF = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[57]);
/* System.Void System::Math::.cctor() */
inline static auto& m58__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[58]);

};

}