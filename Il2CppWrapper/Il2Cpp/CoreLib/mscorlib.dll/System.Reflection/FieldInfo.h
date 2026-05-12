
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::Reflection {

struct FieldInfo {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 27> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Void System.Reflection::FieldInfo::.ctor() */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Reflection.MemberTypes System.Reflection::FieldInfo::get_MemberType() */
inline static auto& m1_get_MemberType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[1]);
/* System.Reflection.FieldAttributes System.Reflection::FieldInfo::get_Attributes() */
inline static auto& m2_get_Attributes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[2]);
/* System.Type System.Reflection::FieldInfo::get_FieldType() */
inline static auto& m3_get_FieldType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* System.Boolean System.Reflection::FieldInfo::get_IsInitOnly() */
inline static auto& m4_get_IsInitOnly = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[4]);
/* System.Boolean System.Reflection::FieldInfo::get_IsLiteral() */
inline static auto& m5_get_IsLiteral = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Boolean System.Reflection::FieldInfo::get_IsNotSerialized() */
inline static auto& m6_get_IsNotSerialized = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.Boolean System.Reflection::FieldInfo::get_IsStatic() */
inline static auto& m7_get_IsStatic = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);
/* System.Boolean System.Reflection::FieldInfo::get_IsPrivate() */
inline static auto& m8_get_IsPrivate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[8]);
/* System.Boolean System.Reflection::FieldInfo::get_IsPublic() */
inline static auto& m9_get_IsPublic = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);
/* System.RuntimeFieldHandle System.Reflection::FieldInfo::get_FieldHandle() */
inline static auto& m10_get_FieldHandle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[10]);
/* System.Boolean System.Reflection::FieldInfo::Equals(System.Object) */
inline static auto& m11_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[11]);
/* System.Int32 System.Reflection::FieldInfo::GetHashCode() */
inline static auto& m12_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[12]);
/* System.Boolean System.Reflection::FieldInfo::op_Equality(System.Reflection.FieldInfo, System.Reflection.FieldInfo) */
inline static auto& m13_op_Equality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.Boolean System.Reflection::FieldInfo::op_Inequality(System.Reflection.FieldInfo, System.Reflection.FieldInfo) */
inline static auto& m14_op_Inequality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);
/* System.Object System.Reflection::FieldInfo::GetValue(System.Object) */
inline static auto& m15_GetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[15]);
/* System.Void System.Reflection::FieldInfo::SetValue(System.Object, System.Object) */
inline static auto& m16_SetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[16]);
/* System.Void System.Reflection::FieldInfo::SetValue(System.Object, System.Object, System.Reflection.BindingFlags, System.Reflection.Binder, System.Globalization.CultureInfo) */
inline static auto& m17_SetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[17]);
/* System.Void System.Reflection::FieldInfo::SetValueDirect(System.TypedReference, System.Object) */
inline static auto& m18_SetValueDirect = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[18]);
/* System.Object System.Reflection::FieldInfo::GetRawConstantValue() */
inline static auto& m19_GetRawConstantValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[19]);
/* System.Reflection.FieldInfo System.Reflection::FieldInfo::internal_from_handle_type(System.IntPtr, System.IntPtr) */
inline static auto& m20_internal_from_handle_type = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[20]);
/* System.Reflection.FieldInfo System.Reflection::FieldInfo::GetFieldFromHandle(System.RuntimeFieldHandle) */
inline static auto& m21_GetFieldFromHandle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[21]);
/* System.Reflection.FieldInfo System.Reflection::FieldInfo::GetFieldFromHandle(System.RuntimeFieldHandle, System.RuntimeTypeHandle) */
inline static auto& m22_GetFieldFromHandle = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[22]);
/* System.Int32 System.Reflection::FieldInfo::GetFieldOffset() */
inline static auto& m23_GetFieldOffset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[23]);
/* System.Runtime.InteropServices.MarshalAsAttribute System.Reflection::FieldInfo::get_marshal_info() */
inline static auto& m24_get_marshal_info = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[24]);
/* System.Object[] System.Reflection::FieldInfo::GetPseudoCustomAttributes() */
inline static auto& m25_GetPseudoCustomAttributes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[25]);
/* System.Reflection.CustomAttributeData[] System.Reflection::FieldInfo::GetPseudoCustomAttributesData() */
inline static auto& m26_GetPseudoCustomAttributesData = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[26]);

};

}