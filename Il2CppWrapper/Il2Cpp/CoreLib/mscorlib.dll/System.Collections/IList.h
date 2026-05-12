
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::Collections {

struct IList {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 11> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Object System.Collections::IList::get_Item(System.Int32) */
inline static auto& m0_get_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[0]);
/* System.Void System.Collections::IList::set_Item(System.Int32, System.Object) */
inline static auto& m1_set_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[1]);
/* System.Int32 System.Collections::IList::Add(System.Object) */
inline static auto& m2_Add = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[2]);
/* System.Boolean System.Collections::IList::Contains(System.Object) */
inline static auto& m3_Contains = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* System.Void System.Collections::IList::Clear() */
inline static auto& m4_Clear = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[4]);
/* System.Boolean System.Collections::IList::get_IsReadOnly() */
inline static auto& m5_get_IsReadOnly = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Boolean System.Collections::IList::get_IsFixedSize() */
inline static auto& m6_get_IsFixedSize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.Int32 System.Collections::IList::IndexOf(System.Object) */
inline static auto& m7_IndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);
/* System.Void System.Collections::IList::Insert(System.Int32, System.Object) */
inline static auto& m8_Insert = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[8]);
/* System.Void System.Collections::IList::Remove(System.Object) */
inline static auto& m9_Remove = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);
/* System.Void System.Collections::IList::RemoveAt(System.Int32) */
inline static auto& m10_RemoveAt = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[10]);

};

}