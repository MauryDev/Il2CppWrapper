
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::Collections::Generic {

struct ICollection_1 {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 7> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Int32 System.Collections.Generic::ICollection`1::get_Count() */
inline static auto& m0_get_Count = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[0]);
/* System.Boolean System.Collections.Generic::ICollection`1::get_IsReadOnly() */
inline static auto& m1_get_IsReadOnly = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[1]);
/* System.Void System.Collections.Generic::ICollection`1::Add(T) */
inline static auto& m2_Add = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[2]);
/* System.Void System.Collections.Generic::ICollection`1::Clear() */
inline static auto& m3_Clear = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* System.Boolean System.Collections.Generic::ICollection`1::Contains(T) */
inline static auto& m4_Contains = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[4]);
/* System.Void System.Collections.Generic::ICollection`1::CopyTo(T[], System.Int32) */
inline static auto& m5_CopyTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Boolean System.Collections.Generic::ICollection`1::Remove(T) */
inline static auto& m6_Remove = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);

};

}