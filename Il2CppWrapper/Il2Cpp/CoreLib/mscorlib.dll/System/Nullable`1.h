
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct Nullable_1 {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 11> methods;
    inline static std::array<Il2CppWrapper::Field*, 2> fields;  
    /* System.Boolean System::Nullable`1::hasValue */
inline static auto& f_hasValue = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* T System::Nullable`1::value */
inline static auto& f_value = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
  
    /* System.Void System::Nullable`1::.ctor(T) */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Boolean System::Nullable`1::get_HasValue() */
inline static auto& m1_get_HasValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* T System::Nullable`1::get_Value() */
inline static auto& m2_get_Value = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* T System::Nullable`1::GetValueOrDefault() */
inline static auto& m3_GetValueOrDefault = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* T System::Nullable`1::GetValueOrDefault(T) */
inline static auto& m4_GetValueOrDefault = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Boolean System::Nullable`1::Equals(System.Object) */
inline static auto& m5_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Int32 System::Nullable`1::GetHashCode() */
inline static auto& m6_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.String System::Nullable`1::ToString() */
inline static auto& m7_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);
/* System.Object System::Nullable`1::Box(System.Nullable<T>) */
inline static auto& m8_Box = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);
/* System.Nullable<T> System::Nullable`1::Unbox(System.Object) */
inline static auto& m9_Unbox = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* System.Nullable<T> System::Nullable`1::UnboxExact(System.Object) */
inline static auto& m10_UnboxExact = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);

};

}