
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::Collections::Generic {

struct IDictionary_2 {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 8> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* TValue System.Collections.Generic::IDictionary`2::get_Item(TKey) */
inline static auto& m0_get_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[0]);
/* System.Void System.Collections.Generic::IDictionary`2::set_Item(TKey, TValue) */
inline static auto& m1_set_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[1]);
/* System.Collections.Generic.ICollection<TKey> System.Collections.Generic::IDictionary`2::get_Keys() */
inline static auto& m2_get_Keys = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[2]);
/* System.Collections.Generic.ICollection<TValue> System.Collections.Generic::IDictionary`2::get_Values() */
inline static auto& m3_get_Values = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* System.Boolean System.Collections.Generic::IDictionary`2::ContainsKey(TKey) */
inline static auto& m4_ContainsKey = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[4]);
/* System.Void System.Collections.Generic::IDictionary`2::Add(TKey, TValue) */
inline static auto& m5_Add = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Boolean System.Collections.Generic::IDictionary`2::Remove(TKey) */
inline static auto& m6_Remove = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.Boolean System.Collections.Generic::IDictionary`2::TryGetValue(TKey, TValue&) */
inline static auto& m7_TryGetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);

};

}