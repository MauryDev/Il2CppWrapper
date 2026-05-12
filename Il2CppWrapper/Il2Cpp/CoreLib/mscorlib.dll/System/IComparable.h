
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct IComparable {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 1> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Int32 System::IComparable::CompareTo(System.Object) */
inline static auto& m0_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[0]);

};

}