
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct Activator {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 8> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Object System::Activator::CreateInstance(System.Type, System.Reflection.BindingFlags, System.Reflection.Binder, System.Object[], System.Globalization.CultureInfo) */
inline static auto& m0_CreateInstance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.Object System::Activator::CreateInstance(System.Type, System.Reflection.BindingFlags, System.Reflection.Binder, System.Object[], System.Globalization.CultureInfo, System.Object[]) */
inline static auto& m1_CreateInstance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* System.Object System::Activator::CreateInstance(System.Type, System.Object[]) */
inline static auto& m2_CreateInstance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* System.Object System::Activator::CreateInstance(System.Type, System.Object[], System.Object[]) */
inline static auto& m3_CreateInstance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* System.Object System::Activator::CreateInstance(System.Type) */
inline static auto& m4_CreateInstance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.Object System::Activator::CreateInstance(System.Type, System.Boolean) */
inline static auto& m5_CreateInstance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.Object System::Activator::CreateInstance(System.Type, System.Boolean, System.Boolean) */
inline static auto& m6_CreateInstance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* T System::Activator::CreateInstance() */
inline static auto& m7_CreateInstance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);

};

}