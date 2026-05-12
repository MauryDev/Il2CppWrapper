
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct Attribute {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 30> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Attribute[] System::Attribute::InternalGetCustomAttributes(System.Reflection.PropertyInfo, System.Type, System.Boolean) */
inline static auto& m0_InternalGetCustomAttributes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.Attribute[] System::Attribute::InternalGetCustomAttributes(System.Reflection.EventInfo, System.Type, System.Boolean) */
inline static auto& m1_InternalGetCustomAttributes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* System.Attribute[] System::Attribute::InternalParamGetCustomAttributes(System.Reflection.ParameterInfo, System.Type, System.Boolean) */
inline static auto& m2_InternalParamGetCustomAttributes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* System.Boolean System::Attribute::InternalIsDefined(System.Reflection.PropertyInfo, System.Type, System.Boolean) */
inline static auto& m3_InternalIsDefined = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* System.Boolean System::Attribute::InternalIsDefined(System.Reflection.EventInfo, System.Type, System.Boolean) */
inline static auto& m4_InternalIsDefined = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.Attribute[] System::Attribute::GetCustomAttributes(System.Reflection.MemberInfo, System.Type) */
inline static auto& m5_GetCustomAttributes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.Attribute[] System::Attribute::GetCustomAttributes(System.Reflection.MemberInfo, System.Type, System.Boolean) */
inline static auto& m6_GetCustomAttributes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.Attribute[] System::Attribute::GetCustomAttributes(System.Reflection.MemberInfo) */
inline static auto& m7_GetCustomAttributes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Attribute[] System::Attribute::GetCustomAttributes(System.Reflection.MemberInfo, System.Boolean) */
inline static auto& m8_GetCustomAttributes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);
/* System.Boolean System::Attribute::IsDefined(System.Reflection.MemberInfo, System.Type) */
inline static auto& m9_IsDefined = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* System.Boolean System::Attribute::IsDefined(System.Reflection.MemberInfo, System.Type, System.Boolean) */
inline static auto& m10_IsDefined = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);
/* System.Attribute System::Attribute::GetCustomAttribute(System.Reflection.MemberInfo, System.Type) */
inline static auto& m11_GetCustomAttribute = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* System.Attribute System::Attribute::GetCustomAttribute(System.Reflection.MemberInfo, System.Type, System.Boolean) */
inline static auto& m12_GetCustomAttribute = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);
/* System.Attribute[] System::Attribute::GetCustomAttributes(System.Reflection.ParameterInfo, System.Type, System.Boolean) */
inline static auto& m13_GetCustomAttributes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.Attribute[] System::Attribute::GetCustomAttributes(System.Reflection.ParameterInfo, System.Boolean) */
inline static auto& m14_GetCustomAttributes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);
/* System.Attribute[] System::Attribute::GetCustomAttributes(System.Reflection.Module, System.Boolean) */
inline static auto& m15_GetCustomAttributes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[15]);
/* System.Attribute[] System::Attribute::GetCustomAttributes(System.Reflection.Module, System.Type, System.Boolean) */
inline static auto& m16_GetCustomAttributes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[16]);
/* System.Attribute[] System::Attribute::GetCustomAttributes(System.Reflection.Assembly, System.Type) */
inline static auto& m17_GetCustomAttributes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[17]);
/* System.Attribute[] System::Attribute::GetCustomAttributes(System.Reflection.Assembly, System.Type, System.Boolean) */
inline static auto& m18_GetCustomAttributes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[18]);
/* System.Attribute[] System::Attribute::GetCustomAttributes(System.Reflection.Assembly) */
inline static auto& m19_GetCustomAttributes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[19]);
/* System.Attribute[] System::Attribute::GetCustomAttributes(System.Reflection.Assembly, System.Boolean) */
inline static auto& m20_GetCustomAttributes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[20]);
/* System.Attribute System::Attribute::GetCustomAttribute(System.Reflection.Assembly, System.Type) */
inline static auto& m21_GetCustomAttribute = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[21]);
/* System.Attribute System::Attribute::GetCustomAttribute(System.Reflection.Assembly, System.Type, System.Boolean) */
inline static auto& m22_GetCustomAttribute = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[22]);
/* System.Void System::Attribute::.ctor() */
inline static auto& m23__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[23]);
/* System.Boolean System::Attribute::Equals(System.Object) */
inline static auto& m24_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[24]);
/* System.Boolean System::Attribute::AreFieldValuesEqual(System.Object, System.Object) */
inline static auto& m25_AreFieldValuesEqual = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* System.Int32 System::Attribute::GetHashCode() */
inline static auto& m26_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[26]);
/* System.Object System::Attribute::get_TypeId() */
inline static auto& m27_get_TypeId = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[27]);
/* System.Boolean System::Attribute::Match(System.Object) */
inline static auto& m28_Match = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[28]);
/* System.Boolean System::Attribute::IsDefaultAttribute() */
inline static auto& m29_IsDefaultAttribute = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[29]);

};

}