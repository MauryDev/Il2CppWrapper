
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::Collections::Generic {

struct HashSet_1 {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 35> methods;
    inline static std::array<Il2CppWrapper::Field*, 15> fields;  
    /* System.Int32 System.Collections.Generic::HashSet`1::Lower31BitMask */
inline static auto& f_Lower31BitMask = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.Int32 System.Collections.Generic::HashSet`1::StackAllocThreshold */
inline static auto& f_StackAllocThreshold = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
/* System.Int32 System.Collections.Generic::HashSet`1::ShrinkThreshold */
inline static auto& f_ShrinkThreshold = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[2]);
/* System.String System.Collections.Generic::HashSet`1::CapacityName */
inline static auto& f_CapacityName = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[3]);
/* System.String System.Collections.Generic::HashSet`1::ElementsName */
inline static auto& f_ElementsName = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[4]);
/* System.String System.Collections.Generic::HashSet`1::ComparerName */
inline static auto& f_ComparerName = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[5]);
/* System.String System.Collections.Generic::HashSet`1::VersionName */
inline static auto& f_VersionName = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[6]);
/* System.Int32[] System.Collections.Generic::HashSet`1::_buckets */
inline static auto& f__buckets = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[7]);
/* System.Collections.Generic.HashSet.Slot<T>[] System.Collections.Generic::HashSet`1::_slots */
inline static auto& f__slots = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[8]);
/* System.Int32 System.Collections.Generic::HashSet`1::_count */
inline static auto& f__count = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[9]);
/* System.Int32 System.Collections.Generic::HashSet`1::_lastIndex */
inline static auto& f__lastIndex = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[10]);
/* System.Int32 System.Collections.Generic::HashSet`1::_freeList */
inline static auto& f__freeList = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[11]);
/* System.Collections.Generic.IEqualityComparer<T> System.Collections.Generic::HashSet`1::_comparer */
inline static auto& f__comparer = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[12]);
/* System.Int32 System.Collections.Generic::HashSet`1::_version */
inline static auto& f__version = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[13]);
/* System.Runtime.Serialization.SerializationInfo System.Collections.Generic::HashSet`1::_siInfo */
inline static auto& f__siInfo = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[14]);
  
    /* System.Void System.Collections.Generic::HashSet`1::.ctor() */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void System.Collections.Generic::HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer<T>) */
inline static auto& m1__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void System.Collections.Generic::HashSet`1::.ctor(System.Int32) */
inline static auto& m2__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void System.Collections.Generic::HashSet`1::.ctor(System.Collections.Generic.IEnumerable<T>) */
inline static auto& m3__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void System.Collections.Generic::HashSet`1::.ctor(System.Collections.Generic.IEnumerable<T>, System.Collections.Generic.IEqualityComparer<T>) */
inline static auto& m4__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Void System.Collections.Generic::HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo, System.Runtime.Serialization.StreamingContext) */
inline static auto& m5__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Void System.Collections.Generic::HashSet`1::CopyFrom(System.Collections.Generic.HashSet<T>) */
inline static auto& m6_CopyFrom = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.Void System.Collections.Generic::HashSet`1::.ctor(System.Int32, System.Collections.Generic.IEqualityComparer<T>) */
inline static auto& m7__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.Void System.Collections.Generic::HashSet`1::System.Collections.Generic.ICollection<T>.Add(T) */
inline static auto& m8_System_Collections_Generic_ICollection_T__Add = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[8]);
/* System.Void System.Collections.Generic::HashSet`1::Clear() */
inline static auto& m9_Clear = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);
/* System.Boolean System.Collections.Generic::HashSet`1::Contains(T) */
inline static auto& m10_Contains = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[10]);
/* System.Void System.Collections.Generic::HashSet`1::CopyTo(T[], System.Int32) */
inline static auto& m11_CopyTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[11]);
/* System.Boolean System.Collections.Generic::HashSet`1::Remove(T) */
inline static auto& m12_Remove = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[12]);
/* System.Int32 System.Collections.Generic::HashSet`1::get_Count() */
inline static auto& m13_get_Count = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[13]);
/* System.Boolean System.Collections.Generic::HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly() */
inline static auto& m14_System_Collections_Generic_ICollection_T__get_IsReadOnly = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[14]);
/* System.Collections.Generic.HashSet.Enumerator<T> System.Collections.Generic::HashSet`1::GetEnumerator() */
inline static auto& m15_GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* System.Collections.Generic.IEnumerator<T> System.Collections.Generic::HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator() */
inline static auto& m16_System_Collections_Generic_IEnumerable_T__GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[16]);
/* System.Collections.IEnumerator System.Collections.Generic::HashSet`1::System.Collections.IEnumerable.GetEnumerator() */
inline static auto& m17_System_Collections_IEnumerable_GetEnumerator = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[17]);
/* System.Void System.Collections.Generic::HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo, System.Runtime.Serialization.StreamingContext) */
inline static auto& m18_GetObjectData = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[18]);
/* System.Void System.Collections.Generic::HashSet`1::OnDeserialization(System.Object) */
inline static auto& m19_OnDeserialization = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[19]);
/* System.Boolean System.Collections.Generic::HashSet`1::Add(T) */
inline static auto& m20_Add = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[20]);
/* System.Void System.Collections.Generic::HashSet`1::UnionWith(System.Collections.Generic.IEnumerable<T>) */
inline static auto& m21_UnionWith = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[21]);
/* System.Void System.Collections.Generic::HashSet`1::ExceptWith(System.Collections.Generic.IEnumerable<T>) */
inline static auto& m22_ExceptWith = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[22]);
/* System.Void System.Collections.Generic::HashSet`1::CopyTo(T[]) */
inline static auto& m23_CopyTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[23]);
/* System.Void System.Collections.Generic::HashSet`1::CopyTo(T[], System.Int32, System.Int32) */
inline static auto& m24_CopyTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[24]);
/* System.Int32 System.Collections.Generic::HashSet`1::RemoveWhere(System.Predicate<T>) */
inline static auto& m25_RemoveWhere = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[25]);
/* System.Collections.Generic.IEqualityComparer<T> System.Collections.Generic::HashSet`1::get_Comparer() */
inline static auto& m26_get_Comparer = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[26]);
/* System.Void System.Collections.Generic::HashSet`1::TrimExcess() */
inline static auto& m27_TrimExcess = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[27]);
/* System.Int32 System.Collections.Generic::HashSet`1::Initialize(System.Int32) */
inline static auto& m28_Initialize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[28]);
/* System.Void System.Collections.Generic::HashSet`1::IncreaseCapacity() */
inline static auto& m29_IncreaseCapacity = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[29]);
/* System.Void System.Collections.Generic::HashSet`1::SetCapacity(System.Int32) */
inline static auto& m30_SetCapacity = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[30]);
/* System.Boolean System.Collections.Generic::HashSet`1::AddIfNotPresent(T) */
inline static auto& m31_AddIfNotPresent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[31]);
/* System.Void System.Collections.Generic::HashSet`1::AddValue(System.Int32, System.Int32, T) */
inline static auto& m32_AddValue = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[32]);
/* System.Boolean System.Collections.Generic::HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet<T>, System.Collections.Generic.HashSet<T>) */
inline static auto& m33_AreEqualityComparersEqual = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[33]);
/* System.Int32 System.Collections.Generic::HashSet`1::InternalGetHashCode(T) */
inline static auto& m34_InternalGetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[34]);

};

}