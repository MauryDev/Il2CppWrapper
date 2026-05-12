
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct Version {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 30> methods;
    inline static std::array<Il2CppWrapper::Field*, 4> fields;  
    /* System.Int32 System::Version::_Major */
inline static auto& f__Major = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* System.Int32 System::Version::_Minor */
inline static auto& f__Minor = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* System.Int32 System::Version::_Build */
inline static auto& f__Build = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[2]);
/* System.Int32 System::Version::_Revision */
inline static auto& f__Revision = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[3]);
  
    /* System.Void System::Version::.ctor(System.Int32, System.Int32, System.Int32, System.Int32) */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void System::Version::.ctor(System.Int32, System.Int32, System.Int32) */
inline static auto& m1__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void System::Version::.ctor(System.Int32, System.Int32) */
inline static auto& m2__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Void System::Version::.ctor(System.String) */
inline static auto& m3__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void System::Version::.ctor() */
inline static auto& m4__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.Void System::Version::.ctor(System.Version) */
inline static auto& m5__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Object System::Version::Clone() */
inline static auto& m6_Clone = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.Int32 System::Version::get_Major() */
inline static auto& m7_get_Major = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.Int32 System::Version::get_Minor() */
inline static auto& m8_get_Minor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Int32 System::Version::get_Build() */
inline static auto& m9_get_Build = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.Int32 System::Version::get_Revision() */
inline static auto& m10_get_Revision = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Int32 System::Version::CompareTo(System.Object) */
inline static auto& m11_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[11]);
/* System.Int32 System::Version::CompareTo(System.Version) */
inline static auto& m12_CompareTo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[12]);
/* System.Boolean System::Version::Equals(System.Object) */
inline static auto& m13_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[13]);
/* System.Boolean System::Version::Equals(System.Version) */
inline static auto& m14_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[14]);
/* System.Int32 System::Version::GetHashCode() */
inline static auto& m15_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[15]);
/* System.String System::Version::ToString() */
inline static auto& m16_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[16]);
/* System.String System::Version::ToString(System.Int32) */
inline static auto& m17_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[17]);
/* System.Boolean System::Version::TryFormat(System.Span<System.Char>, System.Int32&) */
inline static auto& m18_TryFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* System.Boolean System::Version::TryFormat(System.Span<System.Char>, System.Int32, System.Int32&) */
inline static auto& m19_TryFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.Boolean System::Version::System.ISpanFormattable.TryFormat(System.Span<System.Char>, System.Int32&, System.ReadOnlySpan<System.Char>, System.IFormatProvider) */
inline static auto& m20_System_ISpanFormattable_TryFormat = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[20]);
/* System.Int32 System::Version::get_DefaultFormatFieldCount() */
inline static auto& m21_get_DefaultFormatFieldCount = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* System.Text.StringBuilder System::Version::ToCachedStringBuilder(System.Int32) */
inline static auto& m22_ToCachedStringBuilder = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* System.Version System::Version::Parse(System.String) */
inline static auto& m23_Parse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* System.Boolean System::Version::TryParse(System.String, System.Version&) */
inline static auto& m24_TryParse = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* System.Version System::Version::ParseVersion(System.ReadOnlySpan<System.Char>, System.Boolean) */
inline static auto& m25_ParseVersion = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* System.Boolean System::Version::TryParseComponent(System.ReadOnlySpan<System.Char>, System.String, System.Boolean, System.Int32&) */
inline static auto& m26_TryParseComponent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* System.Boolean System::Version::op_Equality(System.Version, System.Version) */
inline static auto& m27_op_Equality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);
/* System.Boolean System::Version::op_Inequality(System.Version, System.Version) */
inline static auto& m28_op_Inequality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[28]);
/* System.Boolean System::Version::op_LessThan(System.Version, System.Version) */
inline static auto& m29_op_LessThan = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);

};

}