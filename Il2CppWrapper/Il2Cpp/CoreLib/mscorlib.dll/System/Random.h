
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct Random {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 11> methods;
    inline static std::array<Il2CppWrapper::Field*, 5> fields;  
    /* System.Int32 System::Random::_inext */
inline static auto& f__inext = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* System.Int32 System::Random::_inextp */
inline static auto& f__inextp = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
/* System.Int32[] System::Random::_seedArray */
inline static auto& f__seedArray = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[2]);
/* System.Random System::Random::t_threadRandom */
inline static auto& f_t_threadRandom = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[3]);
/* System.Random System::Random::s_globalRandom */
inline static auto& f_s_globalRandom = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[4]);
  
    /* System.Void System::Random::.ctor() */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void System::Random::.ctor(System.Int32) */
inline static auto& m1__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Double System::Random::Sample() */
inline static auto& m2_Sample = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[2]);
/* System.Int32 System::Random::InternalSample() */
inline static auto& m3_InternalSample = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Int32 System::Random::GenerateSeed() */
inline static auto& m4_GenerateSeed = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.Int32 System::Random::GenerateGlobalSeed() */
inline static auto& m5_GenerateGlobalSeed = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.Int32 System::Random::Next() */
inline static auto& m6_Next = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[6]);
/* System.Double System::Random::GetSampleForLargeRange() */
inline static auto& m7_GetSampleForLargeRange = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[7]);
/* System.Int32 System::Random::Next(System.Int32, System.Int32) */
inline static auto& m8_Next = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[8]);
/* System.Int32 System::Random::Next(System.Int32) */
inline static auto& m9_Next = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[9]);
/* System.Void System::Random::.cctor() */
inline static auto& m10__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);

};

}