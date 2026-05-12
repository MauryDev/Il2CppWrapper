
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct Delegate {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 31> methods;
    inline static std::array<Il2CppWrapper::Field*, 13> fields;  
    /* System.IntPtr System::Delegate::method_ptr */
inline static auto& f_method_ptr = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* System.IntPtr System::Delegate::invoke_impl */
inline static auto& f_invoke_impl = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* System.Object System::Delegate::m_target */
inline static auto& f_m_target = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[2]);
/* System.IntPtr System::Delegate::method */
inline static auto& f_method = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[3]);
/* System.IntPtr System::Delegate::delegate_trampoline */
inline static auto& f_delegate_trampoline = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[4]);
/* System.IntPtr System::Delegate::extra_arg */
inline static auto& f_extra_arg = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[5]);
/* System.IntPtr System::Delegate::method_code */
inline static auto& f_method_code = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[6]);
/* System.IntPtr System::Delegate::interp_method */
inline static auto& f_interp_method = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[7]);
/* System.IntPtr System::Delegate::interp_invoke_impl */
inline static auto& f_interp_invoke_impl = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[8]);
/* System.Reflection.MethodInfo System::Delegate::method_info */
inline static auto& f_method_info = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[9]);
/* System.Reflection.MethodInfo System::Delegate::original_method_info */
inline static auto& f_original_method_info = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[10]);
/* System.DelegateData System::Delegate::data */
inline static auto& f_data = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[11]);
/* System.Boolean System::Delegate::method_is_virtual */
inline static auto& f_method_is_virtual = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[12]);
  
    /* System.Reflection.MethodInfo System::Delegate::get_Method() */
inline static auto& m0_get_Method = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Reflection.MethodInfo System::Delegate::GetVirtualMethod_internal() */
inline static auto& m1_GetVirtualMethod_internal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Object System::Delegate::get_Target() */
inline static auto& m2_get_Target = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Delegate System::Delegate::CreateDelegate_internal(System.Type, System.Object, System.Reflection.MethodInfo, System.Boolean) */
inline static auto& m3_CreateDelegate_internal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* System.Boolean System::Delegate::arg_type_match(System.Type, System.Type) */
inline static auto& m4_arg_type_match = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.Boolean System::Delegate::arg_type_match_this(System.Type, System.Type, System.Boolean) */
inline static auto& m5_arg_type_match_this = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.Boolean System::Delegate::return_type_match(System.Type, System.Type) */
inline static auto& m6_return_type_match = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.Delegate System::Delegate::CreateDelegate(System.Type, System.Object, System.Reflection.MethodInfo, System.Boolean, System.Boolean) */
inline static auto& m7_CreateDelegate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Delegate System::Delegate::CreateDelegate(System.Type, System.Object, System.Reflection.MethodInfo) */
inline static auto& m8_CreateDelegate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);
/* System.Delegate System::Delegate::CreateDelegate(System.Type, System.Reflection.MethodInfo, System.Boolean) */
inline static auto& m9_CreateDelegate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* System.Delegate System::Delegate::CreateDelegate(System.Type, System.Reflection.MethodInfo) */
inline static auto& m10_CreateDelegate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);
/* System.Delegate System::Delegate::CreateDelegate(System.Type, System.Object, System.String) */
inline static auto& m11_CreateDelegate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* System.Reflection.MethodInfo System::Delegate::GetCandidateMethod(System.Type, System.Type, System.String, System.Reflection.BindingFlags, System.Boolean, System.Boolean) */
inline static auto& m12_GetCandidateMethod = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);
/* System.Delegate System::Delegate::CreateDelegate(System.Type, System.Type, System.String, System.Boolean, System.Boolean) */
inline static auto& m13_CreateDelegate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.Delegate System::Delegate::CreateDelegate(System.Type, System.Type, System.String) */
inline static auto& m14_CreateDelegate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);
/* System.Delegate System::Delegate::CreateDelegate(System.Type, System.Object, System.String, System.Boolean, System.Boolean) */
inline static auto& m15_CreateDelegate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[15]);
/* System.Delegate System::Delegate::CreateDelegate(System.Type, System.Object, System.String, System.Boolean) */
inline static auto& m16_CreateDelegate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[16]);
/* System.Object System::Delegate::Clone() */
inline static auto& m17_Clone = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[17]);
/* System.Boolean System::Delegate::Equals(System.Object) */
inline static auto& m18_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[18]);
/* System.Int32 System::Delegate::GetHashCode() */
inline static auto& m19_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[19]);
/* System.Reflection.MethodInfo System::Delegate::GetMethodImpl() */
inline static auto& m20_GetMethodImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[20]);
/* System.Void System::Delegate::GetObjectData(System.Runtime.Serialization.SerializationInfo, System.Runtime.Serialization.StreamingContext) */
inline static auto& m21_GetObjectData = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[21]);
/* System.Delegate[] System::Delegate::GetInvocationList() */
inline static auto& m22_GetInvocationList = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[22]);
/* System.Delegate System::Delegate::Combine(System.Delegate, System.Delegate) */
inline static auto& m23_Combine = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* System.Delegate System::Delegate::Combine(System.Delegate[]) */
inline static auto& m24_Combine = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* System.Delegate System::Delegate::CombineImpl(System.Delegate) */
inline static auto& m25_CombineImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[25]);
/* System.Delegate System::Delegate::Remove(System.Delegate, System.Delegate) */
inline static auto& m26_Remove = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* System.Delegate System::Delegate::RemoveImpl(System.Delegate) */
inline static auto& m27_RemoveImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[27]);
/* System.Boolean System::Delegate::op_Equality(System.Delegate, System.Delegate) */
inline static auto& m28_op_Equality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[28]);
/* System.Boolean System::Delegate::op_Inequality(System.Delegate, System.Delegate) */
inline static auto& m29_op_Inequality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);
/* System.MulticastDelegate System::Delegate::AllocDelegateLike_internal(System.Delegate) */
inline static auto& m30_AllocDelegateLike_internal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[30]);

};

}