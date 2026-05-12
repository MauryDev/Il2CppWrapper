
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct Predicate_1 {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 2> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Void System::Predicate`1::.ctor(System.Object, System.IntPtr) */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Boolean System::Predicate`1::Invoke(T) */
inline static auto& m1_Invoke = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[1]);

};

}