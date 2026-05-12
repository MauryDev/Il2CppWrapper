
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::Collections::Generic {

struct List_1 {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 61> methods;
    inline static std::array<Il2CppWrapper::Field*, 5> fields;  
    /* T[] System.Collections.Generic::List`1::_items */
inline static auto& f__items = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* System.Int32 System.Collections.Generic::List`1::_size */
inline static auto& f__size = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* System.Int32 System.Collections.Generic::List`1::_version */
inline static auto& f__version = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[2]);
/* System.Object System.Collections.Generic::List`1::_syncRoot */
inline static auto& f__syncRoot = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[3]);
/* T[] System.Collections.Generic::List`1::s_emptyArray */
inline static auto& f_s_emptyArray = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[4]);
  
    /* System.Void System.Collections.Generic::List`1::.ctor() */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void System.Collections.Generic::List`1::.ctor(System.Int32) */
inline static auto& m1__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void System.Collections.Generic::List`1::.ctor(System.Collections.Generic.IEnumerable<T>) */
inline static auto& m2__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Int32 System.Collections.Generic::List`1::get_Capacity() */
inline static auto& m3_get_Capacity = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void System.Collections.Generic::List`1::set_Capacity(System.Int32) */
inline static auto& m4_set_Capacity = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Int32 System.Collections.Generic::List`1::get_Count() */
inline static auto& m5_get_Count = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Boolean System.Collections.Generic::List`1::System.Collections.IList.get_IsFixedSize() */
inline static auto& m6_System_Collections_IList_get_IsFixedSize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.Boolean System.Collections.Generic::List`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly() */
inline static auto& m7_System_Collections_Generic_ICollection_T__get_IsReadOnly = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);
/* System.Boolean System.Collections.Generic::List`1::System.Collections.IList.get_IsReadOnly() */
inline static auto& m8_System_Collections_IList_get_IsReadOnly = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[8]);
/* System.Boolean System.Collections.Generic::List`1::System.Collections.ICollection.get_IsSynchronized() */
inline static auto& m9_System_Collections_ICollection_get_IsSynchronized = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);
/* System.Object System.Collections.Generic::List`1::System.Collections.ICollection.get_SyncRoot() */
inline static auto& m10_System_Collections_ICollection_get_SyncRoot = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[10]);
/* T System.Collections.Generic::List`1::get_Item(System.Int32) */
inline static auto& m11_get_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[11]);
/* System.Void System.Collections.Generic::List`1::set_Item(System.Int32, T) */
inline static auto& m12_set_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[12]);
/* System.Boolean System.Collections.Generic::List`1::IsCompatibleObject(System.Object) */
inline static auto& m13_IsCompatibleObject = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.Object System.Collections.Generic::List`1::System.Collections.IList.get_Item(System.Int32) */
inline static auto& m14_System_Collections_IList_get_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[14]);
/* System.Void System.Collections.Generic::List`1::System.Collections.IList.set_Item(System.Int32, System.Object) */
inline static auto& m15_System_Collections_IList_set_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[15]);
/* System.Void System.Collections.Generic::List`1::Add(T) */
inline static auto& m16_Add = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[16]);
/* System.Void System.Collections.Generic::List`1::AddWithResize(T) */
inline static auto& m17_AddWithResize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.Int32 System.Collections.Generic::List`1::System.Collections.IList.Add(System.Object) */
inline static auto& m18_System_Collections_IList_Add = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[18]);
/* System.Void System.Collections.Generic::List`1::AddRange(System.Collections.Generic.IEnumerable<T>) */
inline static auto& m19_AddRange = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.Int32 System.Collections.Generic::List`1::BinarySearch(System.Int32, System.Int32, T, System.Collections.Generic.IComparer<T>) */
inline static auto& m20_BinarySearch = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.Int32 System.Collections.Generic::List`1::BinarySearch(T) */
inline static auto& m21_BinarySearch = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* System.Int32 System.Collections.Generic::List`1::BinarySearch(T, System.Collections.Generic.IComparer<T>) */
inline static auto& m22_BinarySearch = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* System.Void System.Collections.Generic::List`1::Clear() */
inline static auto& m23_Clear = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[23]);
/* System.Boolean System.Collections.Generic::List`1::Contains(T) */
inline static auto& m24_Contains = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[24]);
/* System.Boolean System.Collections.Generic::List`1::System.Collections.IList.Contains(System.Object) */
inline static auto& m25_System_Collections_IList_Contains = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[25]);
/* System.Void System.Collections.Generic::List`1::CopyTo(T[]) */
inline static auto& m26_CopyTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[26]);
/* System.Void System.Collections.Generic::List`1::System.Collections.ICollection.CopyTo(System.Array, System.Int32) */
inline static auto& m27_System_Collections_ICollection_CopyTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[27]);
/* System.Void System.Collections.Generic::List`1::CopyTo(T[], System.Int32) */
inline static auto& m28_CopyTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[28]);
/* System.Void System.Collections.Generic::List`1::EnsureCapacity(System.Int32) */
inline static auto& m29_EnsureCapacity = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[29]);
/* System.Boolean System.Collections.Generic::List`1::Exists(System.Predicate<T>) */
inline static auto& m30_Exists = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[30]);
/* T System.Collections.Generic::List`1::Find(System.Predicate<T>) */
inline static auto& m31_Find = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[31]);
/* System.Collections.Generic.List<T> System.Collections.Generic::List`1::FindAll(System.Predicate<T>) */
inline static auto& m32_FindAll = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[32]);
/* System.Int32 System.Collections.Generic::List`1::FindIndex(System.Predicate<T>) */
inline static auto& m33_FindIndex = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[33]);
/* System.Int32 System.Collections.Generic::List`1::FindIndex(System.Int32, System.Int32, System.Predicate<T>) */
inline static auto& m34_FindIndex = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[34]);
/* T System.Collections.Generic::List`1::FindLast(System.Predicate<T>) */
inline static auto& m35_FindLast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[35]);
/* System.Void System.Collections.Generic::List`1::ForEach(System.Action<T>) */
inline static auto& m36_ForEach = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[36]);
/* System.Collections.Generic.List.Enumerator<T> System.Collections.Generic::List`1::GetEnumerator() */
inline static auto& m37_GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[37]);
/* System.Collections.Generic.IEnumerator<T> System.Collections.Generic::List`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator() */
inline static auto& m38_System_Collections_Generic_IEnumerable_T__GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[38]);
/* System.Collections.IEnumerator System.Collections.Generic::List`1::System.Collections.IEnumerable.GetEnumerator() */
inline static auto& m39_System_Collections_IEnumerable_GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[39]);
/* System.Collections.Generic.List<T> System.Collections.Generic::List`1::GetRange(System.Int32, System.Int32) */
inline static auto& m40_GetRange = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[40]);
/* System.Int32 System.Collections.Generic::List`1::IndexOf(T) */
inline static auto& m41_IndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[41]);
/* System.Int32 System.Collections.Generic::List`1::System.Collections.IList.IndexOf(System.Object) */
inline static auto& m42_System_Collections_IList_IndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[42]);
/* System.Void System.Collections.Generic::List`1::Insert(System.Int32, T) */
inline static auto& m43_Insert = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[43]);
/* System.Void System.Collections.Generic::List`1::System.Collections.IList.Insert(System.Int32, System.Object) */
inline static auto& m44_System_Collections_IList_Insert = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[44]);
/* System.Void System.Collections.Generic::List`1::InsertRange(System.Int32, System.Collections.Generic.IEnumerable<T>) */
inline static auto& m45_InsertRange = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[45]);
/* System.Boolean System.Collections.Generic::List`1::Remove(T) */
inline static auto& m46_Remove = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[46]);
/* System.Void System.Collections.Generic::List`1::System.Collections.IList.Remove(System.Object) */
inline static auto& m47_System_Collections_IList_Remove = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[47]);
/* System.Int32 System.Collections.Generic::List`1::RemoveAll(System.Predicate<T>) */
inline static auto& m48_RemoveAll = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[48]);
/* System.Void System.Collections.Generic::List`1::RemoveAt(System.Int32) */
inline static auto& m49_RemoveAt = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[49]);
/* System.Void System.Collections.Generic::List`1::RemoveRange(System.Int32, System.Int32) */
inline static auto& m50_RemoveRange = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[50]);
/* System.Void System.Collections.Generic::List`1::Reverse() */
inline static auto& m51_Reverse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[51]);
/* System.Void System.Collections.Generic::List`1::Reverse(System.Int32, System.Int32) */
inline static auto& m52_Reverse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[52]);
/* System.Void System.Collections.Generic::List`1::Sort() */
inline static auto& m53_Sort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[53]);
/* System.Void System.Collections.Generic::List`1::Sort(System.Collections.Generic.IComparer<T>) */
inline static auto& m54_Sort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[54]);
/* System.Void System.Collections.Generic::List`1::Sort(System.Int32, System.Int32, System.Collections.Generic.IComparer<T>) */
inline static auto& m55_Sort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[55]);
/* System.Void System.Collections.Generic::List`1::Sort(System.Comparison<T>) */
inline static auto& m56_Sort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[56]);
/* T[] System.Collections.Generic::List`1::ToArray() */
inline static auto& m57_ToArray = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[57]);
/* System.Void System.Collections.Generic::List`1::TrimExcess() */
inline static auto& m58_TrimExcess = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[58]);
/* System.Void System.Collections.Generic::List`1::AddEnumerable(System.Collections.Generic.IEnumerable<T>) */
inline static auto& m59_AddEnumerable = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[59]);
/* System.Void System.Collections.Generic::List`1::.cctor() */
inline static auto& m60__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[60]);

};

}