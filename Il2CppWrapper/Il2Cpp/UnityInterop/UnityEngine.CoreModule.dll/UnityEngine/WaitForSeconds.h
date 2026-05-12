
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct WaitForSeconds {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 1> methods;
    inline static std::array<Il2CppWrapper::Field*, 1> fields;  
    /* System.Single UnityEngine::WaitForSeconds::m_Seconds */
inline static auto& f_m_Seconds = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
  
    /* System.Void UnityEngine::WaitForSeconds::.ctor(System.Single) */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);

};

}