
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::Collections::Generic {

struct IList_1 {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 5> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* T System.Collections.Generic::IList`1::get_Item(System.Int32) */
inline static auto& m0_get_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[0]);
/* System.Void System.Collections.Generic::IList`1::set_Item(System.Int32, T) */
inline static auto& m1_set_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[1]);
/* System.Int32 System.Collections.Generic::IList`1::IndexOf(T) */
inline static auto& m2_IndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[2]);
/* System.Void System.Collections.Generic::IList`1::Insert(System.Int32, T) */
inline static auto& m3_Insert = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* System.Void System.Collections.Generic::IList`1::RemoveAt(System.Int32) */
inline static auto& m4_RemoveAt = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[4]);

};

}