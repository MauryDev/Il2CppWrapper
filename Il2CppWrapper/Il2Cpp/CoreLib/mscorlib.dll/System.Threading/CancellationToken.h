
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::Threading {

struct CancellationToken {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 16> methods;
    inline static std::array<Il2CppWrapper::Field*, 2> fields;  
    /* System.Threading.CancellationTokenSource System.Threading::CancellationToken::_source */
inline static auto& f__source = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* System.Action<System.Object> System.Threading::CancellationToken::s_actionToActionObjShunt */
inline static auto& f_s_actionToActionObjShunt = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
  
    /* System.Threading.CancellationToken System.Threading::CancellationToken::get_None() */
inline static auto& m0_get_None = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.Boolean System.Threading::CancellationToken::get_IsCancellationRequested() */
inline static auto& m1_get_IsCancellationRequested = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Boolean System.Threading::CancellationToken::get_CanBeCanceled() */
inline static auto& m2_get_CanBeCanceled = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void System.Threading::CancellationToken::.ctor(System.Threading.CancellationTokenSource) */
inline static auto& m3__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void System.Threading::CancellationToken::.ctor(System.Boolean) */
inline static auto& m4__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Threading.CancellationTokenRegistration System.Threading::CancellationToken::Register(System.Action) */
inline static auto& m5_Register = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Threading.CancellationTokenRegistration System.Threading::CancellationToken::InternalRegisterWithoutEC(System.Action<System.Object>, System.Object) */
inline static auto& m6_InternalRegisterWithoutEC = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.Threading.CancellationTokenRegistration System.Threading::CancellationToken::Register(System.Action<System.Object>, System.Object, System.Boolean, System.Boolean) */
inline static auto& m7_Register = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.Boolean System.Threading::CancellationToken::Equals(System.Threading.CancellationToken) */
inline static auto& m8_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Boolean System.Threading::CancellationToken::Equals(System.Object) */
inline static auto& m9_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);
/* System.Int32 System.Threading::CancellationToken::GetHashCode() */
inline static auto& m10_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[10]);
/* System.Boolean System.Threading::CancellationToken::op_Equality(System.Threading.CancellationToken, System.Threading.CancellationToken) */
inline static auto& m11_op_Equality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* System.Boolean System.Threading::CancellationToken::op_Inequality(System.Threading.CancellationToken, System.Threading.CancellationToken) */
inline static auto& m12_op_Inequality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);
/* System.Void System.Threading::CancellationToken::ThrowIfCancellationRequested() */
inline static auto& m13_ThrowIfCancellationRequested = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* System.Void System.Threading::CancellationToken::ThrowOperationCanceledException() */
inline static auto& m14_ThrowOperationCanceledException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* System.Void System.Threading::CancellationToken::.cctor() */
inline static auto& m15__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[15]);

};

}