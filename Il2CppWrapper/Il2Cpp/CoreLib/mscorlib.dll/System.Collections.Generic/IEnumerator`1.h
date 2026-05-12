
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::Collections::Generic {

struct IEnumerator_1 {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 1> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* T System.Collections.Generic::IEnumerator`1::get_Current() */
inline static auto& m0_get_Current = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[0]);

};

}