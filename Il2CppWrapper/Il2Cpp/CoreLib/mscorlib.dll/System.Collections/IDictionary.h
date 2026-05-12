
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::Collections {

struct IDictionary {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 10> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Object System.Collections::IDictionary::get_Item(System.Object) */
inline static auto& m0_get_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[0]);
/* System.Void System.Collections::IDictionary::set_Item(System.Object, System.Object) */
inline static auto& m1_set_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[1]);
/* System.Collections.ICollection System.Collections::IDictionary::get_Keys() */
inline static auto& m2_get_Keys = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[2]);
/* System.Collections.ICollection System.Collections::IDictionary::get_Values() */
inline static auto& m3_get_Values = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* System.Boolean System.Collections::IDictionary::Contains(System.Object) */
inline static auto& m4_Contains = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[4]);
/* System.Void System.Collections::IDictionary::Add(System.Object, System.Object) */
inline static auto& m5_Add = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Void System.Collections::IDictionary::Clear() */
inline static auto& m6_Clear = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.Boolean System.Collections::IDictionary::get_IsReadOnly() */
inline static auto& m7_get_IsReadOnly = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);
/* System.Collections.IDictionaryEnumerator System.Collections::IDictionary::GetEnumerator() */
inline static auto& m8_GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[8]);
/* System.Void System.Collections::IDictionary::Remove(System.Object) */
inline static auto& m9_Remove = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);

};

}