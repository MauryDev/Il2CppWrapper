
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct Object {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 12> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Boolean System::Object::Equals(System.Object) */
inline static auto& m0_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[0]);
/* System.Boolean System::Object::Equals(System.Object, System.Object) */
inline static auto& m1_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* System.Void System::Object::.ctor() */
inline static auto& m2__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void System::Object::Finalize() */
inline static auto& m3_Finalize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* System.Int32 System::Object::GetHashCode() */
inline static auto& m4_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[4]);
/* System.Type System::Object::GetType() */
inline static auto& m5_GetType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Object System::Object::MemberwiseClone() */
inline static auto& m6_MemberwiseClone = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.String System::Object::ToString() */
inline static auto& m7_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);
/* System.Boolean System::Object::ReferenceEquals(System.Object, System.Object) */
inline static auto& m8_ReferenceEquals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);
/* System.Int32 System::Object::InternalGetHashCode(System.Object) */
inline static auto& m9_InternalGetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* System.Void System::Object::FieldGetter(System.String, System.String, System.Object&) */
inline static auto& m10_FieldGetter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Void System::Object::FieldSetter(System.String, System.String, System.Object) */
inline static auto& m11_FieldSetter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);

};

}