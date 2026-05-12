
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::Collections {

struct IEnumerator {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 3> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Boolean System.Collections::IEnumerator::MoveNext() */
inline static auto& m0_MoveNext = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[0]);
/* System.Object System.Collections::IEnumerator::get_Current() */
inline static auto& m1_get_Current = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[1]);
/* System.Void System.Collections::IEnumerator::Reset() */
inline static auto& m2_Reset = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[2]);

};

}