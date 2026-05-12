
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::Collections::Generic {

struct Dictionary_2 {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 54> methods;
    inline static std::array<Il2CppWrapper::Field*, 10> fields;  
    /* System.Int32[] System.Collections.Generic::Dictionary`2::_buckets */
inline static auto& f__buckets = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* System.Collections.Generic.Dictionary.Entry<TKey,TValue>[] System.Collections.Generic::Dictionary`2::_entries */
inline static auto& f__entries = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* System.Int32 System.Collections.Generic::Dictionary`2::_count */
inline static auto& f__count = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[2]);
/* System.Int32 System.Collections.Generic::Dictionary`2::_freeList */
inline static auto& f__freeList = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[3]);
/* System.Int32 System.Collections.Generic::Dictionary`2::_freeCount */
inline static auto& f__freeCount = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[4]);
/* System.Int32 System.Collections.Generic::Dictionary`2::_version */
inline static auto& f__version = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[5]);
/* System.Collections.Generic.IEqualityComparer<TKey> System.Collections.Generic::Dictionary`2::_comparer */
inline static auto& f__comparer = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[6]);
/* System.Collections.Generic.Dictionary.KeyCollection<TKey,TValue> System.Collections.Generic::Dictionary`2::_keys */
inline static auto& f__keys = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[7]);
/* System.Collections.Generic.Dictionary.ValueCollection<TKey,TValue> System.Collections.Generic::Dictionary`2::_values */
inline static auto& f__values = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[8]);
/* System.Object System.Collections.Generic::Dictionary`2::_syncRoot */
inline static auto& f__syncRoot = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[9]);
  
    /* System.Void System.Collections.Generic::Dictionary`2::.ctor() */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void System.Collections.Generic::Dictionary`2::.ctor(System.Int32) */
inline static auto& m1__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void System.Collections.Generic::Dictionary`2::.ctor(System.Collections.Generic.IEqualityComparer<TKey>) */
inline static auto& m2__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void System.Collections.Generic::Dictionary`2::.ctor(System.Int32, System.Collections.Generic.IEqualityComparer<TKey>) */
inline static auto& m3__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void System.Collections.Generic::Dictionary`2::.ctor(System.Collections.Generic.IDictionary<TKey,TValue>) */
inline static auto& m4__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Void System.Collections.Generic::Dictionary`2::.ctor(System.Collections.Generic.IDictionary<TKey,TValue>, System.Collections.Generic.IEqualityComparer<TKey>) */
inline static auto& m5__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Void System.Collections.Generic::Dictionary`2::.ctor(System.Runtime.Serialization.SerializationInfo, System.Runtime.Serialization.StreamingContext) */
inline static auto& m6__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.Int32 System.Collections.Generic::Dictionary`2::get_Count() */
inline static auto& m7_get_Count = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[7]);
/* System.Collections.Generic.Dictionary.KeyCollection<TKey,TValue> System.Collections.Generic::Dictionary`2::get_Keys() */
inline static auto& m8_get_Keys = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Collections.Generic.ICollection<TKey> System.Collections.Generic::Dictionary`2::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys() */
inline static auto& m9_System_Collections_Generic_IDictionary_TKey_TValue__get_Keys = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);
/* System.Collections.Generic.IEnumerable<TKey> System.Collections.Generic::Dictionary`2::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys() */
inline static auto& m10_System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[10]);
/* System.Collections.Generic.Dictionary.ValueCollection<TKey,TValue> System.Collections.Generic::Dictionary`2::get_Values() */
inline static auto& m11_get_Values = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* System.Collections.Generic.ICollection<TValue> System.Collections.Generic::Dictionary`2::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values() */
inline static auto& m12_System_Collections_Generic_IDictionary_TKey_TValue__get_Values = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[12]);
/* System.Collections.Generic.IEnumerable<TValue> System.Collections.Generic::Dictionary`2::System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values() */
inline static auto& m13_System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[13]);
/* TValue System.Collections.Generic::Dictionary`2::get_Item(TKey) */
inline static auto& m14_get_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[14]);
/* System.Void System.Collections.Generic::Dictionary`2::set_Item(TKey, TValue) */
inline static auto& m15_set_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[15]);
/* System.Void System.Collections.Generic::Dictionary`2::Add(TKey, TValue) */
inline static auto& m16_Add = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[16]);
/* System.Void System.Collections.Generic::Dictionary`2::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair<TKey,TValue>) */
inline static auto& m17_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[17]);
/* System.Boolean System.Collections.Generic::Dictionary`2::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair<TKey,TValue>) */
inline static auto& m18_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[18]);
/* System.Boolean System.Collections.Generic::Dictionary`2::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair<TKey,TValue>) */
inline static auto& m19_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[19]);
/* System.Void System.Collections.Generic::Dictionary`2::Clear() */
inline static auto& m20_Clear = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[20]);
/* System.Boolean System.Collections.Generic::Dictionary`2::ContainsKey(TKey) */
inline static auto& m21_ContainsKey = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[21]);
/* System.Boolean System.Collections.Generic::Dictionary`2::ContainsValue(TValue) */
inline static auto& m22_ContainsValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* System.Void System.Collections.Generic::Dictionary`2::CopyTo(System.Collections.Generic.KeyValuePair<TKey,TValue>[], System.Int32) */
inline static auto& m23_CopyTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[23]);
/* System.Collections.Generic.Dictionary.Enumerator<TKey,TValue> System.Collections.Generic::Dictionary`2::GetEnumerator() */
inline static auto& m24_GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[24]);
/* System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<TKey,TValue>> System.Collections.Generic::Dictionary`2::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator() */
inline static auto& m25_System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[25]);
/* System.Void System.Collections.Generic::Dictionary`2::GetObjectData(System.Runtime.Serialization.SerializationInfo, System.Runtime.Serialization.StreamingContext) */
inline static auto& m26_GetObjectData = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[26]);
/* System.Int32 System.Collections.Generic::Dictionary`2::FindEntry(TKey) */
inline static auto& m27_FindEntry = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[27]);
/* System.Int32 System.Collections.Generic::Dictionary`2::Initialize(System.Int32) */
inline static auto& m28_Initialize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[28]);
/* System.Boolean System.Collections.Generic::Dictionary`2::TryInsert(TKey, TValue, System.Collections.Generic.InsertionBehavior) */
inline static auto& m29_TryInsert = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[29]);
/* System.Void System.Collections.Generic::Dictionary`2::OnDeserialization(System.Object) */
inline static auto& m30_OnDeserialization = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[30]);
/* System.Void System.Collections.Generic::Dictionary`2::Resize() */
inline static auto& m31_Resize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[31]);
/* System.Void System.Collections.Generic::Dictionary`2::Resize(System.Int32, System.Boolean) */
inline static auto& m32_Resize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[32]);
/* System.Boolean System.Collections.Generic::Dictionary`2::Remove(TKey) */
inline static auto& m33_Remove = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[33]);
/* System.Boolean System.Collections.Generic::Dictionary`2::Remove(TKey, TValue&) */
inline static auto& m34_Remove = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[34]);
/* System.Boolean System.Collections.Generic::Dictionary`2::TryGetValue(TKey, TValue&) */
inline static auto& m35_TryGetValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[35]);
/* System.Boolean System.Collections.Generic::Dictionary`2::TryAdd(TKey, TValue) */
inline static auto& m36_TryAdd = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[36]);
/* System.Boolean System.Collections.Generic::Dictionary`2::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly() */
inline static auto& m37_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[37]);
/* System.Void System.Collections.Generic::Dictionary`2::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair<TKey,TValue>[], System.Int32) */
inline static auto& m38_System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[38]);
/* System.Void System.Collections.Generic::Dictionary`2::System.Collections.ICollection.CopyTo(System.Array, System.Int32) */
inline static auto& m39_System_Collections_ICollection_CopyTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[39]);
/* System.Collections.IEnumerator System.Collections.Generic::Dictionary`2::System.Collections.IEnumerable.GetEnumerator() */
inline static auto& m40_System_Collections_IEnumerable_GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[40]);
/* System.Int32 System.Collections.Generic::Dictionary`2::EnsureCapacity(System.Int32) */
inline static auto& m41_EnsureCapacity = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[41]);
/* System.Boolean System.Collections.Generic::Dictionary`2::System.Collections.ICollection.get_IsSynchronized() */
inline static auto& m42_System_Collections_ICollection_get_IsSynchronized = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[42]);
/* System.Object System.Collections.Generic::Dictionary`2::System.Collections.ICollection.get_SyncRoot() */
inline static auto& m43_System_Collections_ICollection_get_SyncRoot = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[43]);
/* System.Boolean System.Collections.Generic::Dictionary`2::System.Collections.IDictionary.get_IsReadOnly() */
inline static auto& m44_System_Collections_IDictionary_get_IsReadOnly = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[44]);
/* System.Collections.ICollection System.Collections.Generic::Dictionary`2::System.Collections.IDictionary.get_Keys() */
inline static auto& m45_System_Collections_IDictionary_get_Keys = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[45]);
/* System.Collections.ICollection System.Collections.Generic::Dictionary`2::System.Collections.IDictionary.get_Values() */
inline static auto& m46_System_Collections_IDictionary_get_Values = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[46]);
/* System.Object System.Collections.Generic::Dictionary`2::System.Collections.IDictionary.get_Item(System.Object) */
inline static auto& m47_System_Collections_IDictionary_get_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[47]);
/* System.Void System.Collections.Generic::Dictionary`2::System.Collections.IDictionary.set_Item(System.Object, System.Object) */
inline static auto& m48_System_Collections_IDictionary_set_Item = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[48]);
/* System.Boolean System.Collections.Generic::Dictionary`2::IsCompatibleKey(System.Object) */
inline static auto& m49_IsCompatibleKey = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[49]);
/* System.Void System.Collections.Generic::Dictionary`2::System.Collections.IDictionary.Add(System.Object, System.Object) */
inline static auto& m50_System_Collections_IDictionary_Add = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[50]);
/* System.Boolean System.Collections.Generic::Dictionary`2::System.Collections.IDictionary.Contains(System.Object) */
inline static auto& m51_System_Collections_IDictionary_Contains = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[51]);
/* System.Collections.IDictionaryEnumerator System.Collections.Generic::Dictionary`2::System.Collections.IDictionary.GetEnumerator() */
inline static auto& m52_System_Collections_IDictionary_GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[52]);
/* System.Void System.Collections.Generic::Dictionary`2::System.Collections.IDictionary.Remove(System.Object) */
inline static auto& m53_System_Collections_IDictionary_Remove = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[53]);

};

}