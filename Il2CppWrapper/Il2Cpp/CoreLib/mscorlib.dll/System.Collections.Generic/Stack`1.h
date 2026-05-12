
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::Collections::Generic {

struct Stack_1 {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 17> methods;
    inline static std::array<Il2CppWrapper::Field*, 4> fields;  
    /* T[] System.Collections.Generic::Stack`1::_array */
inline static auto& f__array = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* System.Int32 System.Collections.Generic::Stack`1::_size */
inline static auto& f__size = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* System.Int32 System.Collections.Generic::Stack`1::_version */
inline static auto& f__version = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[2]);
/* System.Object System.Collections.Generic::Stack`1::_syncRoot */
inline static auto& f__syncRoot = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[3]);
  
    /* System.Void System.Collections.Generic::Stack`1::.ctor() */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void System.Collections.Generic::Stack`1::.ctor(System.Int32) */
inline static auto& m1__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Int32 System.Collections.Generic::Stack`1::get_Count() */
inline static auto& m2_get_Count = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[2]);
/* System.Boolean System.Collections.Generic::Stack`1::System.Collections.ICollection.get_IsSynchronized() */
inline static auto& m3_System_Collections_ICollection_get_IsSynchronized = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* System.Object System.Collections.Generic::Stack`1::System.Collections.ICollection.get_SyncRoot() */
inline static auto& m4_System_Collections_ICollection_get_SyncRoot = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[4]);
/* System.Void System.Collections.Generic::Stack`1::Clear() */
inline static auto& m5_Clear = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Boolean System.Collections.Generic::Stack`1::Contains(T) */
inline static auto& m6_Contains = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.Void System.Collections.Generic::Stack`1::System.Collections.ICollection.CopyTo(System.Array, System.Int32) */
inline static auto& m7_System_Collections_ICollection_CopyTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);
/* System.Collections.Generic.Stack.Enumerator<T> System.Collections.Generic::Stack`1::GetEnumerator() */
inline static auto& m8_GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Collections.Generic.IEnumerator<T> System.Collections.Generic::Stack`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator() */
inline static auto& m9_System_Collections_Generic_IEnumerable_T__GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);
/* System.Collections.IEnumerator System.Collections.Generic::Stack`1::System.Collections.IEnumerable.GetEnumerator() */
inline static auto& m10_System_Collections_IEnumerable_GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[10]);
/* T System.Collections.Generic::Stack`1::Peek() */
inline static auto& m11_Peek = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* T System.Collections.Generic::Stack`1::Pop() */
inline static auto& m12_Pop = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.Boolean System.Collections.Generic::Stack`1::TryPop(T&) */
inline static auto& m13_TryPop = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* System.Void System.Collections.Generic::Stack`1::Push(T) */
inline static auto& m14_Push = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* System.Void System.Collections.Generic::Stack`1::PushWithResize(T) */
inline static auto& m15_PushWithResize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* System.Void System.Collections.Generic::Stack`1::ThrowForEmptyStack() */
inline static auto& m16_ThrowForEmptyStack = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);

};

}