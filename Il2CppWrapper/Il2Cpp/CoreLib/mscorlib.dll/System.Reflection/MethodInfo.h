
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::Reflection {

struct MethodInfo {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 15> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Void System.Reflection::MethodInfo::.ctor() */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Reflection.MemberTypes System.Reflection::MethodInfo::get_MemberType() */
inline static auto& m1_get_MemberType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[1]);
/* System.Reflection.ParameterInfo System.Reflection::MethodInfo::get_ReturnParameter() */
inline static auto& m2_get_ReturnParameter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[2]);
/* System.Type System.Reflection::MethodInfo::get_ReturnType() */
inline static auto& m3_get_ReturnType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* System.Type[] System.Reflection::MethodInfo::GetGenericArguments() */
inline static auto& m4_GetGenericArguments = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[4]);
/* System.Reflection.MethodInfo System.Reflection::MethodInfo::GetGenericMethodDefinition() */
inline static auto& m5_GetGenericMethodDefinition = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Reflection.MethodInfo System.Reflection::MethodInfo::MakeGenericMethod(System.Type[]) */
inline static auto& m6_MakeGenericMethod = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.Reflection.MethodInfo System.Reflection::MethodInfo::GetBaseDefinition() */
inline static auto& m7_GetBaseDefinition = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);
/* System.Delegate System.Reflection::MethodInfo::CreateDelegate(System.Type) */
inline static auto& m8_CreateDelegate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[8]);
/* System.Delegate System.Reflection::MethodInfo::CreateDelegate(System.Type, System.Object) */
inline static auto& m9_CreateDelegate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);
/* System.Boolean System.Reflection::MethodInfo::Equals(System.Object) */
inline static auto& m10_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[10]);
/* System.Int32 System.Reflection::MethodInfo::GetHashCode() */
inline static auto& m11_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[11]);
/* System.Boolean System.Reflection::MethodInfo::op_Equality(System.Reflection.MethodInfo, System.Reflection.MethodInfo) */
inline static auto& m12_op_Equality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);
/* System.Boolean System.Reflection::MethodInfo::op_Inequality(System.Reflection.MethodInfo, System.Reflection.MethodInfo) */
inline static auto& m13_op_Inequality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.Int32 System.Reflection::MethodInfo::get_GenericParameterCount() */
inline static auto& m14_get_GenericParameterCount = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[14]);

};

}