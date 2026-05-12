
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::Collections::Generic {

struct LinkedList_1 {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 33> methods;
    inline static std::array<Il2CppWrapper::Field*, 8> fields;  
    /* System.Collections.Generic.LinkedListNode<T> System.Collections.Generic::LinkedList`1::head */
inline static auto& f_head = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* System.Int32 System.Collections.Generic::LinkedList`1::count */
inline static auto& f_count = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* System.Int32 System.Collections.Generic::LinkedList`1::version */
inline static auto& f_version = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[2]);
/* System.Object System.Collections.Generic::LinkedList`1::_syncRoot */
inline static auto& f__syncRoot = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[3]);
/* System.Runtime.Serialization.SerializationInfo System.Collections.Generic::LinkedList`1::_siInfo */
inline static auto& f__siInfo = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[4]);
/* System.String System.Collections.Generic::LinkedList`1::VersionName */
inline static auto& f_VersionName = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[5]);
/* System.String System.Collections.Generic::LinkedList`1::CountName */
inline static auto& f_CountName = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[6]);
/* System.String System.Collections.Generic::LinkedList`1::ValuesName */
inline static auto& f_ValuesName = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[7]);
  
    /* System.Void System.Collections.Generic::LinkedList`1::.ctor() */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void System.Collections.Generic::LinkedList`1::.ctor(System.Runtime.Serialization.SerializationInfo, System.Runtime.Serialization.StreamingContext) */
inline static auto& m1__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Int32 System.Collections.Generic::LinkedList`1::get_Count() */
inline static auto& m2_get_Count = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[2]);
/* System.Collections.Generic.LinkedListNode<T> System.Collections.Generic::LinkedList`1::get_First() */
inline static auto& m3_get_First = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Collections.Generic.LinkedListNode<T> System.Collections.Generic::LinkedList`1::get_Last() */
inline static auto& m4_get_Last = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Boolean System.Collections.Generic::LinkedList`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly() */
inline static auto& m5_System_Collections_Generic_ICollection_T__get_IsReadOnly = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Void System.Collections.Generic::LinkedList`1::System.Collections.Generic.ICollection<T>.Add(T) */
inline static auto& m6_System_Collections_Generic_ICollection_T__Add = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.Collections.Generic.LinkedListNode<T> System.Collections.Generic::LinkedList`1::AddBefore(System.Collections.Generic.LinkedListNode<T>, T) */
inline static auto& m7_AddBefore = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.Collections.Generic.LinkedListNode<T> System.Collections.Generic::LinkedList`1::AddFirst(T) */
inline static auto& m8_AddFirst = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Void System.Collections.Generic::LinkedList`1::AddFirst(System.Collections.Generic.LinkedListNode<T>) */
inline static auto& m9_AddFirst = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.Collections.Generic.LinkedListNode<T> System.Collections.Generic::LinkedList`1::AddLast(T) */
inline static auto& m10_AddLast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Void System.Collections.Generic::LinkedList`1::AddLast(System.Collections.Generic.LinkedListNode<T>) */
inline static auto& m11_AddLast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* System.Void System.Collections.Generic::LinkedList`1::Clear() */
inline static auto& m12_Clear = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[12]);
/* System.Boolean System.Collections.Generic::LinkedList`1::Contains(T) */
inline static auto& m13_Contains = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[13]);
/* System.Void System.Collections.Generic::LinkedList`1::CopyTo(T[], System.Int32) */
inline static auto& m14_CopyTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[14]);
/* System.Collections.Generic.LinkedListNode<T> System.Collections.Generic::LinkedList`1::Find(T) */
inline static auto& m15_Find = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* System.Collections.Generic.LinkedList.Enumerator<T> System.Collections.Generic::LinkedList`1::GetEnumerator() */
inline static auto& m16_GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[16]);
/* System.Collections.Generic.IEnumerator<T> System.Collections.Generic::LinkedList`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator() */
inline static auto& m17_System_Collections_Generic_IEnumerable_T__GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[17]);
/* System.Boolean System.Collections.Generic::LinkedList`1::Remove(T) */
inline static auto& m18_Remove = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[18]);
/* System.Void System.Collections.Generic::LinkedList`1::Remove(System.Collections.Generic.LinkedListNode<T>) */
inline static auto& m19_Remove = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.Void System.Collections.Generic::LinkedList`1::RemoveFirst() */
inline static auto& m20_RemoveFirst = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.Void System.Collections.Generic::LinkedList`1::RemoveLast() */
inline static auto& m21_RemoveLast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* System.Void System.Collections.Generic::LinkedList`1::GetObjectData(System.Runtime.Serialization.SerializationInfo, System.Runtime.Serialization.StreamingContext) */
inline static auto& m22_GetObjectData = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[22]);
/* System.Void System.Collections.Generic::LinkedList`1::OnDeserialization(System.Object) */
inline static auto& m23_OnDeserialization = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[23]);
/* System.Void System.Collections.Generic::LinkedList`1::InternalInsertNodeBefore(System.Collections.Generic.LinkedListNode<T>, System.Collections.Generic.LinkedListNode<T>) */
inline static auto& m24_InternalInsertNodeBefore = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[24]);
/* System.Void System.Collections.Generic::LinkedList`1::InternalInsertNodeToEmptyList(System.Collections.Generic.LinkedListNode<T>) */
inline static auto& m25_InternalInsertNodeToEmptyList = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[25]);
/* System.Void System.Collections.Generic::LinkedList`1::InternalRemoveNode(System.Collections.Generic.LinkedListNode<T>) */
inline static auto& m26_InternalRemoveNode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[26]);
/* System.Void System.Collections.Generic::LinkedList`1::ValidateNewNode(System.Collections.Generic.LinkedListNode<T>) */
inline static auto& m27_ValidateNewNode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[27]);
/* System.Void System.Collections.Generic::LinkedList`1::ValidateNode(System.Collections.Generic.LinkedListNode<T>) */
inline static auto& m28_ValidateNode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[28]);
/* System.Boolean System.Collections.Generic::LinkedList`1::System.Collections.ICollection.get_IsSynchronized() */
inline static auto& m29_System_Collections_ICollection_get_IsSynchronized = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[29]);
/* System.Object System.Collections.Generic::LinkedList`1::System.Collections.ICollection.get_SyncRoot() */
inline static auto& m30_System_Collections_ICollection_get_SyncRoot = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[30]);
/* System.Void System.Collections.Generic::LinkedList`1::System.Collections.ICollection.CopyTo(System.Array, System.Int32) */
inline static auto& m31_System_Collections_ICollection_CopyTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[31]);
/* System.Collections.IEnumerator System.Collections.Generic::LinkedList`1::System.Collections.IEnumerable.GetEnumerator() */
inline static auto& m32_System_Collections_IEnumerable_GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[32]);

};

}