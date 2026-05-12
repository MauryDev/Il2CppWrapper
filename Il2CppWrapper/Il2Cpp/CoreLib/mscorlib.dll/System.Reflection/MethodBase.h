
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::Reflection {

struct MethodBase {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 31> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Void System.Reflection::MethodBase::.ctor() */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Reflection.ParameterInfo[] System.Reflection::MethodBase::GetParameters() */
inline static auto& m1_GetParameters = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[1]);
/* System.Reflection.MethodAttributes System.Reflection::MethodBase::get_Attributes() */
inline static auto& m2_get_Attributes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[2]);
/* System.Reflection.MethodImplAttributes System.Reflection::MethodBase::GetMethodImplementationFlags() */
inline static auto& m3_GetMethodImplementationFlags = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* System.Reflection.CallingConventions System.Reflection::MethodBase::get_CallingConvention() */
inline static auto& m4_get_CallingConvention = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[4]);
/* System.Boolean System.Reflection::MethodBase::get_IsAbstract() */
inline static auto& m5_get_IsAbstract = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Boolean System.Reflection::MethodBase::get_IsConstructor() */
inline static auto& m6_get_IsConstructor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.Boolean System.Reflection::MethodBase::get_IsSpecialName() */
inline static auto& m7_get_IsSpecialName = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);
/* System.Boolean System.Reflection::MethodBase::get_IsStatic() */
inline static auto& m8_get_IsStatic = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[8]);
/* System.Boolean System.Reflection::MethodBase::get_IsVirtual() */
inline static auto& m9_get_IsVirtual = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);
/* System.Boolean System.Reflection::MethodBase::get_IsPublic() */
inline static auto& m10_get_IsPublic = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[10]);
/* System.Boolean System.Reflection::MethodBase::get_IsGenericMethod() */
inline static auto& m11_get_IsGenericMethod = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[11]);
/* System.Boolean System.Reflection::MethodBase::get_IsGenericMethodDefinition() */
inline static auto& m12_get_IsGenericMethodDefinition = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[12]);
/* System.Type[] System.Reflection::MethodBase::GetGenericArguments() */
inline static auto& m13_GetGenericArguments = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[13]);
/* System.Boolean System.Reflection::MethodBase::get_ContainsGenericParameters() */
inline static auto& m14_get_ContainsGenericParameters = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[14]);
/* System.Object System.Reflection::MethodBase::Invoke(System.Object, System.Object[]) */
inline static auto& m15_Invoke = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[15]);
/* System.Object System.Reflection::MethodBase::Invoke(System.Object, System.Reflection.BindingFlags, System.Reflection.Binder, System.Object[], System.Globalization.CultureInfo) */
inline static auto& m16_Invoke = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[16]);
/* System.RuntimeMethodHandle System.Reflection::MethodBase::get_MethodHandle() */
inline static auto& m17_get_MethodHandle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[17]);
/* System.Boolean System.Reflection::MethodBase::get_IsSecurityCritical() */
inline static auto& m18_get_IsSecurityCritical = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[18]);
/* System.Boolean System.Reflection::MethodBase::Equals(System.Object) */
inline static auto& m19_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[19]);
/* System.Int32 System.Reflection::MethodBase::GetHashCode() */
inline static auto& m20_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[20]);
/* System.Boolean System.Reflection::MethodBase::op_Equality(System.Reflection.MethodBase, System.Reflection.MethodBase) */
inline static auto& m21_op_Equality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[21]);
/* System.Boolean System.Reflection::MethodBase::op_Inequality(System.Reflection.MethodBase, System.Reflection.MethodBase) */
inline static auto& m22_op_Inequality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[22]);
/* System.Reflection.ParameterInfo[] System.Reflection::MethodBase::GetParametersInternal() */
inline static auto& m23_GetParametersInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[23]);
/* System.Int32 System.Reflection::MethodBase::GetParametersCount() */
inline static auto& m24_GetParametersCount = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[24]);
/* System.String System.Reflection::MethodBase::FormatNameAndSig(System.Boolean) */
inline static auto& m25_FormatNameAndSig = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[25]);
/* System.Type[] System.Reflection::MethodBase::GetParameterTypes() */
inline static auto& m26_GetParameterTypes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[26]);
/* System.Reflection.ParameterInfo[] System.Reflection::MethodBase::GetParametersNoCopy() */
inline static auto& m27_GetParametersNoCopy = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[27]);
/* System.Reflection.MethodBase System.Reflection::MethodBase::GetMethodFromHandle(System.RuntimeMethodHandle) */
inline static auto& m28_GetMethodFromHandle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[28]);
/* System.String System.Reflection::MethodBase::ConstructParameters(System.Type[], System.Reflection.CallingConventions, System.Boolean) */
inline static auto& m29_ConstructParameters = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);
/* System.Reflection.MethodBase System.Reflection::MethodBase::GetCurrentMethod() */
inline static auto& m30_GetCurrentMethod = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[30]);

};

}