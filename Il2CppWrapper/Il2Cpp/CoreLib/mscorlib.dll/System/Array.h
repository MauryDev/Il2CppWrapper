
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct Array {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 155> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Array System::Array::CreateInstance(System.Type, System.Int64[]) */
inline static auto& m0_CreateInstance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.Collections.ObjectModel.ReadOnlyCollection<T> System::Array::AsReadOnly(T[]) */
inline static auto& m1_AsReadOnly = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* System.Void System::Array::Resize(T[]&, System.Int32) */
inline static auto& m2_Resize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* System.Int32 System::Array::System.Collections.ICollection.get_Count() */
inline static auto& m3_System_Collections_ICollection_get_Count = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[3]);
/* System.Boolean System::Array::System.Collections.IList.get_IsReadOnly() */
inline static auto& m4_System_Collections_IList_get_IsReadOnly = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[4]);
/* System.Object System::Array::System.Collections.IList.get_Item(System.Int32) */
inline static auto& m5_System_Collections_IList_get_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[5]);
/* System.Void System::Array::System.Collections.IList.set_Item(System.Int32, System.Object) */
inline static auto& m6_System_Collections_IList_set_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.Int32 System::Array::System.Collections.IList.Add(System.Object) */
inline static auto& m7_System_Collections_IList_Add = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);
/* System.Boolean System::Array::System.Collections.IList.Contains(System.Object) */
inline static auto& m8_System_Collections_IList_Contains = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[8]);
/* System.Void System::Array::System.Collections.IList.Clear() */
inline static auto& m9_System_Collections_IList_Clear = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);
/* System.Int32 System::Array::System.Collections.IList.IndexOf(System.Object) */
inline static auto& m10_System_Collections_IList_IndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[10]);
/* System.Void System::Array::System.Collections.IList.Insert(System.Int32, System.Object) */
inline static auto& m11_System_Collections_IList_Insert = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[11]);
/* System.Void System::Array::System.Collections.IList.Remove(System.Object) */
inline static auto& m12_System_Collections_IList_Remove = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[12]);
/* System.Void System::Array::System.Collections.IList.RemoveAt(System.Int32) */
inline static auto& m13_System_Collections_IList_RemoveAt = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[13]);
/* System.Void System::Array::CopyTo(System.Array, System.Int32) */
inline static auto& m14_CopyTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[14]);
/* System.Object System::Array::Clone() */
inline static auto& m15_Clone = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[15]);
/* System.Int32 System::Array::System.Collections.IStructuralComparable.CompareTo(System.Object, System.Collections.IComparer) */
inline static auto& m16_System_Collections_IStructuralComparable_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[16]);
/* System.Boolean System::Array::System.Collections.IStructuralEquatable.Equals(System.Object, System.Collections.IEqualityComparer) */
inline static auto& m17_System_Collections_IStructuralEquatable_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[17]);
/* System.Int32 System::Array::CombineHashCodes(System.Int32, System.Int32) */
inline static auto& m18_CombineHashCodes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[18]);
/* System.Int32 System::Array::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer) */
inline static auto& m19_System_Collections_IStructuralEquatable_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[19]);
/* System.Int32 System::Array::BinarySearch(System.Array, System.Object) */
inline static auto& m20_BinarySearch = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[20]);
/* TOutput[] System::Array::ConvertAll(TInput[], System.Converter<TInput,TOutput>) */
inline static auto& m21_ConvertAll = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[21]);
/* System.Void System::Array::Copy(System.Array, System.Array, System.Int64) */
inline static auto& m22_Copy = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[22]);
/* System.Void System::Array::Copy(System.Array, System.Int64, System.Array, System.Int64, System.Int64) */
inline static auto& m23_Copy = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* System.Void System::Array::CopyTo(System.Array, System.Int64) */
inline static auto& m24_CopyTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[24]);
/* System.Void System::Array::ForEach(T[], System.Action<T>) */
inline static auto& m25_ForEach = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* System.Int64 System::Array::get_LongLength() */
inline static auto& m26_get_LongLength = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[26]);
/* System.Int64 System::Array::GetLongLength(System.Int32) */
inline static auto& m27_GetLongLength = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[27]);
/* System.Object System::Array::GetValue(System.Int64) */
inline static auto& m28_GetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[28]);
/* System.Object System::Array::GetValue(System.Int64, System.Int64) */
inline static auto& m29_GetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[29]);
/* System.Object System::Array::GetValue(System.Int64, System.Int64, System.Int64) */
inline static auto& m30_GetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[30]);
/* System.Object System::Array::GetValue(System.Int64[]) */
inline static auto& m31_GetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[31]);
/* System.Boolean System::Array::get_IsFixedSize() */
inline static auto& m32_get_IsFixedSize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[32]);
/* System.Boolean System::Array::get_IsReadOnly() */
inline static auto& m33_get_IsReadOnly = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[33]);
/* System.Boolean System::Array::get_IsSynchronized() */
inline static auto& m34_get_IsSynchronized = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[34]);
/* System.Object System::Array::get_SyncRoot() */
inline static auto& m35_get_SyncRoot = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[35]);
/* System.Int32 System::Array::BinarySearch(System.Array, System.Int32, System.Int32, System.Object) */
inline static auto& m36_BinarySearch = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[36]);
/* System.Int32 System::Array::BinarySearch(System.Array, System.Object, System.Collections.IComparer) */
inline static auto& m37_BinarySearch = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[37]);
/* System.Int32 System::Array::BinarySearch(System.Array, System.Int32, System.Int32, System.Object, System.Collections.IComparer) */
inline static auto& m38_BinarySearch = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[38]);
/* System.Int32 System::Array::GetMedian(System.Int32, System.Int32) */
inline static auto& m39_GetMedian = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[39]);
/* System.Int32 System::Array::BinarySearch(T[], T) */
inline static auto& m40_BinarySearch = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[40]);
/* System.Int32 System::Array::BinarySearch(T[], T, System.Collections.Generic.IComparer<T>) */
inline static auto& m41_BinarySearch = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[41]);
/* System.Int32 System::Array::BinarySearch(T[], System.Int32, System.Int32, T) */
inline static auto& m42_BinarySearch = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[42]);
/* System.Int32 System::Array::BinarySearch(T[], System.Int32, System.Int32, T, System.Collections.Generic.IComparer<T>) */
inline static auto& m43_BinarySearch = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[43]);
/* System.Int32 System::Array::IndexOf(System.Array, System.Object) */
inline static auto& m44_IndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[44]);
/* System.Int32 System::Array::IndexOf(System.Array, System.Object, System.Int32) */
inline static auto& m45_IndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[45]);
/* System.Int32 System::Array::IndexOf(System.Array, System.Object, System.Int32, System.Int32) */
inline static auto& m46_IndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[46]);
/* System.Int32 System::Array::IndexOf(T[], T) */
inline static auto& m47_IndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[47]);
/* System.Int32 System::Array::IndexOf(T[], T, System.Int32) */
inline static auto& m48_IndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[48]);
/* System.Int32 System::Array::IndexOf(T[], T, System.Int32, System.Int32) */
inline static auto& m49_IndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[49]);
/* System.Int32 System::Array::LastIndexOf(System.Array, System.Object) */
inline static auto& m50_LastIndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[50]);
/* System.Int32 System::Array::LastIndexOf(System.Array, System.Object, System.Int32) */
inline static auto& m51_LastIndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[51]);
/* System.Int32 System::Array::LastIndexOf(System.Array, System.Object, System.Int32, System.Int32) */
inline static auto& m52_LastIndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[52]);
/* System.Int32 System::Array::LastIndexOf(T[], T) */
inline static auto& m53_LastIndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[53]);
/* System.Int32 System::Array::LastIndexOf(T[], T, System.Int32) */
inline static auto& m54_LastIndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[54]);
/* System.Int32 System::Array::LastIndexOf(T[], T, System.Int32, System.Int32) */
inline static auto& m55_LastIndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[55]);
/* System.Void System::Array::Reverse(System.Array) */
inline static auto& m56_Reverse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[56]);
/* System.Void System::Array::Reverse(System.Array, System.Int32, System.Int32) */
inline static auto& m57_Reverse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[57]);
/* System.Void System::Array::Reverse(T[]) */
inline static auto& m58_Reverse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[58]);
/* System.Void System::Array::Reverse(T[], System.Int32, System.Int32) */
inline static auto& m59_Reverse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[59]);
/* System.Void System::Array::SetValue(System.Object, System.Int64) */
inline static auto& m60_SetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[60]);
/* System.Void System::Array::SetValue(System.Object, System.Int64, System.Int64) */
inline static auto& m61_SetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[61]);
/* System.Void System::Array::SetValue(System.Object, System.Int64, System.Int64, System.Int64) */
inline static auto& m62_SetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[62]);
/* System.Void System::Array::SetValue(System.Object, System.Int64[]) */
inline static auto& m63_SetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[63]);
/* System.Void System::Array::Sort(System.Array) */
inline static auto& m64_Sort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[64]);
/* System.Void System::Array::Sort(System.Array, System.Int32, System.Int32) */
inline static auto& m65_Sort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[65]);
/* System.Void System::Array::Sort(System.Array, System.Collections.IComparer) */
inline static auto& m66_Sort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[66]);
/* System.Void System::Array::Sort(System.Array, System.Int32, System.Int32, System.Collections.IComparer) */
inline static auto& m67_Sort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[67]);
/* System.Void System::Array::Sort(System.Array, System.Array) */
inline static auto& m68_Sort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[68]);
/* System.Void System::Array::Sort(System.Array, System.Array, System.Collections.IComparer) */
inline static auto& m69_Sort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[69]);
/* System.Void System::Array::Sort(System.Array, System.Array, System.Int32, System.Int32) */
inline static auto& m70_Sort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[70]);
/* System.Void System::Array::Sort(System.Array, System.Array, System.Int32, System.Int32, System.Collections.IComparer) */
inline static auto& m71_Sort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[71]);
/* System.Void System::Array::Sort(T[]) */
inline static auto& m72_Sort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[72]);
/* System.Void System::Array::Sort(T[], System.Int32, System.Int32) */
inline static auto& m73_Sort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[73]);
/* System.Void System::Array::Sort(T[], System.Collections.Generic.IComparer<T>) */
inline static auto& m74_Sort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[74]);
/* System.Void System::Array::Sort(T[], System.Int32, System.Int32, System.Collections.Generic.IComparer<T>) */
inline static auto& m75_Sort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[75]);
/* System.Void System::Array::Sort(T[], System.Comparison<T>) */
inline static auto& m76_Sort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[76]);
/* System.Void System::Array::Sort(TKey[], TValue[]) */
inline static auto& m77_Sort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[77]);
/* System.Void System::Array::Sort(TKey[], TValue[], System.Int32, System.Int32) */
inline static auto& m78_Sort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[78]);
/* System.Void System::Array::Sort(TKey[], TValue[], System.Collections.Generic.IComparer<TKey>) */
inline static auto& m79_Sort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[79]);
/* System.Void System::Array::Sort(TKey[], TValue[], System.Int32, System.Int32, System.Collections.Generic.IComparer<TKey>) */
inline static auto& m80_Sort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[80]);
/* System.Boolean System::Array::Exists(T[], System.Predicate<T>) */
inline static auto& m81_Exists = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[81]);
/* System.Void System::Array::Fill(T[], T) */
inline static auto& m82_Fill = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[82]);
/* System.Void System::Array::Fill(T[], T, System.Int32, System.Int32) */
inline static auto& m83_Fill = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[83]);
/* T System::Array::Find(T[], System.Predicate<T>) */
inline static auto& m84_Find = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[84]);
/* T[] System::Array::FindAll(T[], System.Predicate<T>) */
inline static auto& m85_FindAll = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[85]);
/* System.Int32 System::Array::FindIndex(T[], System.Predicate<T>) */
inline static auto& m86_FindIndex = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[86]);
/* System.Int32 System::Array::FindIndex(T[], System.Int32, System.Predicate<T>) */
inline static auto& m87_FindIndex = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[87]);
/* System.Int32 System::Array::FindIndex(T[], System.Int32, System.Int32, System.Predicate<T>) */
inline static auto& m88_FindIndex = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[88]);
/* T System::Array::FindLast(T[], System.Predicate<T>) */
inline static auto& m89_FindLast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[89]);
/* System.Int32 System::Array::FindLastIndex(T[], System.Predicate<T>) */
inline static auto& m90_FindLastIndex = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[90]);
/* System.Int32 System::Array::FindLastIndex(T[], System.Int32, System.Predicate<T>) */
inline static auto& m91_FindLastIndex = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[91]);
/* System.Int32 System::Array::FindLastIndex(T[], System.Int32, System.Int32, System.Predicate<T>) */
inline static auto& m92_FindLastIndex = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[92]);
/* System.Boolean System::Array::TrueForAll(T[], System.Predicate<T>) */
inline static auto& m93_TrueForAll = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[93]);
/* System.Collections.IEnumerator System::Array::GetEnumerator() */
inline static auto& m94_GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[94]);
/* System.Void System::Array::.ctor() */
inline static auto& m95__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[95]);
/* System.Int32 System::Array::InternalArray__ICollection_get_Count() */
inline static auto& m96_InternalArray__ICollection_get_Count = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[96]);
/* System.Boolean System::Array::InternalArray__ICollection_get_IsReadOnly() */
inline static auto& m97_InternalArray__ICollection_get_IsReadOnly = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[97]);
/* System.Byte& System::Array::GetRawSzArrayData() */
inline static auto& m98_GetRawSzArrayData = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[98]);
/* System.Collections.Generic.IEnumerator<T> System::Array::InternalArray__IEnumerable_GetEnumerator() */
inline static auto& m99_InternalArray__IEnumerable_GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[99]);
/* System.Void System::Array::InternalArray__ICollection_Clear() */
inline static auto& m100_InternalArray__ICollection_Clear = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[100]);
/* System.Void System::Array::InternalArray__ICollection_Add(T) */
inline static auto& m101_InternalArray__ICollection_Add = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[101]);
/* System.Boolean System::Array::InternalArray__ICollection_Remove(T) */
inline static auto& m102_InternalArray__ICollection_Remove = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[102]);
/* System.Boolean System::Array::InternalArray__ICollection_Contains(T) */
inline static auto& m103_InternalArray__ICollection_Contains = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[103]);
/* System.Void System::Array::InternalArray__ICollection_CopyTo(T[], System.Int32) */
inline static auto& m104_InternalArray__ICollection_CopyTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[104]);
/* T System::Array::InternalArray__IReadOnlyList_get_Item(System.Int32) */
inline static auto& m105_InternalArray__IReadOnlyList_get_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[105]);
/* System.Int32 System::Array::InternalArray__IReadOnlyCollection_get_Count() */
inline static auto& m106_InternalArray__IReadOnlyCollection_get_Count = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[106]);
/* System.Void System::Array::InternalArray__Insert(System.Int32, T) */
inline static auto& m107_InternalArray__Insert = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[107]);
/* System.Void System::Array::InternalArray__RemoveAt(System.Int32) */
inline static auto& m108_InternalArray__RemoveAt = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[108]);
/* System.Int32 System::Array::InternalArray__IndexOf(T) */
inline static auto& m109_InternalArray__IndexOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[109]);
/* T System::Array::InternalArray__get_Item(System.Int32) */
inline static auto& m110_InternalArray__get_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[110]);
/* System.Void System::Array::InternalArray__set_Item(System.Int32, T) */
inline static auto& m111_InternalArray__set_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[111]);
/* System.Void System::Array::GetGenericValueImpl(System.Int32, T&) */
inline static auto& m112_GetGenericValueImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[112]);
/* System.Void System::Array::SetGenericValueImpl(System.Int32, T&) */
inline static auto& m113_SetGenericValueImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[113]);
/* System.Int32 System::Array::get_Length() */
inline static auto& m114_get_Length = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[114]);
/* System.Int32 System::Array::get_Rank() */
inline static auto& m115_get_Rank = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[115]);
/* System.Int32 System::Array::GetRank() */
inline static auto& m116_GetRank = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[116]);
/* System.Int32 System::Array::GetLength(System.Int32) */
inline static auto& m117_GetLength = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[117]);
/* System.Int32 System::Array::GetLowerBound(System.Int32) */
inline static auto& m118_GetLowerBound = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[118]);
/* System.Object System::Array::GetValue(System.Int32[]) */
inline static auto& m119_GetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[119]);
/* System.Void System::Array::SetValue(System.Object, System.Int32[]) */
inline static auto& m120_SetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[120]);
/* System.Object System::Array::GetValueImpl(System.Int32) */
inline static auto& m121_GetValueImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[121]);
/* System.Void System::Array::SetValueImpl(System.Object, System.Int32) */
inline static auto& m122_SetValueImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[122]);
/* System.Boolean System::Array::FastCopy(System.Array, System.Int32, System.Array, System.Int32, System.Int32) */
inline static auto& m123_FastCopy = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[123]);
/* System.Array System::Array::CreateInstanceImpl(System.Type, System.Int32[], System.Int32[]) */
inline static auto& m124_CreateInstanceImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[124]);
/* System.Int32 System::Array::GetUpperBound(System.Int32) */
inline static auto& m125_GetUpperBound = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[125]);
/* System.Object System::Array::GetValue(System.Int32) */
inline static auto& m126_GetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[126]);
/* System.Object System::Array::GetValue(System.Int32, System.Int32) */
inline static auto& m127_GetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[127]);
/* System.Object System::Array::GetValue(System.Int32, System.Int32, System.Int32) */
inline static auto& m128_GetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[128]);
/* System.Void System::Array::SetValue(System.Object, System.Int32) */
inline static auto& m129_SetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[129]);
/* System.Void System::Array::SetValue(System.Object, System.Int32, System.Int32) */
inline static auto& m130_SetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[130]);
/* System.Void System::Array::SetValue(System.Object, System.Int32, System.Int32, System.Int32) */
inline static auto& m131_SetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[131]);
/* System.Array System::Array::UnsafeCreateInstance(System.Type, System.Int32[], System.Int32[]) */
inline static auto& m132_UnsafeCreateInstance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[132]);
/* System.Array System::Array::UnsafeCreateInstance(System.Type, System.Int32, System.Int32) */
inline static auto& m133_UnsafeCreateInstance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[133]);
/* System.Array System::Array::UnsafeCreateInstance(System.Type, System.Int32[]) */
inline static auto& m134_UnsafeCreateInstance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[134]);
/* System.Array System::Array::CreateInstance(System.Type, System.Int32) */
inline static auto& m135_CreateInstance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[135]);
/* System.Array System::Array::CreateInstance(System.Type, System.Int32, System.Int32) */
inline static auto& m136_CreateInstance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[136]);
/* System.Array System::Array::CreateInstance(System.Type, System.Int32, System.Int32, System.Int32) */
inline static auto& m137_CreateInstance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[137]);
/* System.Array System::Array::CreateInstance(System.Type, System.Int32[]) */
inline static auto& m138_CreateInstance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[138]);
/* System.Array System::Array::CreateInstance(System.Type, System.Int32[], System.Int32[]) */
inline static auto& m139_CreateInstance = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[139]);
/* System.Void System::Array::Clear(System.Array, System.Int32, System.Int32) */
inline static auto& m140_Clear = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[140]);
/* System.Void System::Array::ClearInternal(System.Array, System.Int32, System.Int32) */
inline static auto& m141_ClearInternal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[141]);
/* System.Void System::Array::Copy(System.Array, System.Array, System.Int32) */
inline static auto& m142_Copy = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[142]);
/* System.Void System::Array::Copy(System.Array, System.Int32, System.Array, System.Int32, System.Int32) */
inline static auto& m143_Copy = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[143]);
/* System.ArrayTypeMismatchException System::Array::CreateArrayTypeMismatchException() */
inline static auto& m144_CreateArrayTypeMismatchException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[144]);
/* System.Boolean System::Array::CanAssignArrayElement(System.Type, System.Type) */
inline static auto& m145_CanAssignArrayElement = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[145]);
/* System.Void System::Array::ConstrainedCopy(System.Array, System.Int32, System.Array, System.Int32, System.Int32) */
inline static auto& m146_ConstrainedCopy = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[146]);
/* T[] System::Array::Empty() */
inline static auto& m147_Empty = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[147]);
/* System.Void System::Array::Initialize() */
inline static auto& m148_Initialize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[148]);
/* System.Int32 System::Array::IndexOfImpl(T[], T, System.Int32, System.Int32) */
inline static auto& m149_IndexOfImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[149]);
/* System.Int32 System::Array::LastIndexOfImpl(T[], T, System.Int32, System.Int32) */
inline static auto& m150_LastIndexOfImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[150]);
/* System.Void System::Array::SortImpl(System.Array, System.Array, System.Int32, System.Int32, System.Collections.IComparer) */
inline static auto& m151_SortImpl = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[151]);
/* T System::Array::UnsafeLoad(T[], System.Int32) */
inline static auto& m152_UnsafeLoad = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[152]);
/* System.Void System::Array::UnsafeStore(T[], System.Int32, T) */
inline static auto& m153_UnsafeStore = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[153]);
/* R System::Array::UnsafeMov(S) */
inline static auto& m154_UnsafeMov = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[154]);

};

}