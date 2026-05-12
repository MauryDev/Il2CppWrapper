
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::Reflection {

struct PropertyInfo {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 21> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Void System.Reflection::PropertyInfo::.ctor() */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Reflection.MemberTypes System.Reflection::PropertyInfo::get_MemberType() */
inline static auto& m1_get_MemberType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[1]);
/* System.Type System.Reflection::PropertyInfo::get_PropertyType() */
inline static auto& m2_get_PropertyType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[2]);
/* System.Reflection.ParameterInfo[] System.Reflection::PropertyInfo::GetIndexParameters() */
inline static auto& m3_GetIndexParameters = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* System.Boolean System.Reflection::PropertyInfo::get_CanRead() */
inline static auto& m4_get_CanRead = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[4]);
/* System.Boolean System.Reflection::PropertyInfo::get_CanWrite() */
inline static auto& m5_get_CanWrite = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Reflection.MethodInfo System.Reflection::PropertyInfo::get_GetMethod() */
inline static auto& m6_get_GetMethod = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.Reflection.MethodInfo System.Reflection::PropertyInfo::GetGetMethod() */
inline static auto& m7_GetGetMethod = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);
/* System.Reflection.MethodInfo System.Reflection::PropertyInfo::GetGetMethod(System.Boolean) */
inline static auto& m8_GetGetMethod = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[8]);
/* System.Reflection.MethodInfo System.Reflection::PropertyInfo::GetSetMethod() */
inline static auto& m9_GetSetMethod = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);
/* System.Reflection.MethodInfo System.Reflection::PropertyInfo::GetSetMethod(System.Boolean) */
inline static auto& m10_GetSetMethod = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[10]);
/* System.Object System.Reflection::PropertyInfo::GetValue(System.Object) */
inline static auto& m11_GetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* System.Object System.Reflection::PropertyInfo::GetValue(System.Object, System.Object[]) */
inline static auto& m12_GetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[12]);
/* System.Object System.Reflection::PropertyInfo::GetValue(System.Object, System.Reflection.BindingFlags, System.Reflection.Binder, System.Object[], System.Globalization.CultureInfo) */
inline static auto& m13_GetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[13]);
/* System.Void System.Reflection::PropertyInfo::SetValue(System.Object, System.Object) */
inline static auto& m14_SetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* System.Void System.Reflection::PropertyInfo::SetValue(System.Object, System.Object, System.Object[]) */
inline static auto& m15_SetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[15]);
/* System.Void System.Reflection::PropertyInfo::SetValue(System.Object, System.Object, System.Reflection.BindingFlags, System.Reflection.Binder, System.Object[], System.Globalization.CultureInfo) */
inline static auto& m16_SetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[16]);
/* System.Boolean System.Reflection::PropertyInfo::Equals(System.Object) */
inline static auto& m17_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[17]);
/* System.Int32 System.Reflection::PropertyInfo::GetHashCode() */
inline static auto& m18_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[18]);
/* System.Boolean System.Reflection::PropertyInfo::op_Equality(System.Reflection.PropertyInfo, System.Reflection.PropertyInfo) */
inline static auto& m19_op_Equality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[19]);
/* System.Boolean System.Reflection::PropertyInfo::op_Inequality(System.Reflection.PropertyInfo, System.Reflection.PropertyInfo) */
inline static auto& m20_op_Inequality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[20]);

};

}