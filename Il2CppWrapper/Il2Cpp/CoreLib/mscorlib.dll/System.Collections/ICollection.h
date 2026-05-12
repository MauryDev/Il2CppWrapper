
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::Collections {

struct ICollection {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 4> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Void System.Collections::ICollection::CopyTo(System.Array, System.Int32) */
inline static auto& m0_CopyTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[0]);
/* System.Int32 System.Collections::ICollection::get_Count() */
inline static auto& m1_get_Count = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[1]);
/* System.Object System.Collections::ICollection::get_SyncRoot() */
inline static auto& m2_get_SyncRoot = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[2]);
/* System.Boolean System.Collections::ICollection::get_IsSynchronized() */
inline static auto& m3_get_IsSynchronized = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);

};

}