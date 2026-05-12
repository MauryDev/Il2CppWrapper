
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct Coroutine {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 3> methods;
    inline static std::array<Il2CppWrapper::Field*, 1> fields;  
    /* System.IntPtr UnityEngine::Coroutine::m_Ptr */
inline static auto& f_m_Ptr = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
  
    /* System.Void UnityEngine::Coroutine::.ctor() */
inline static auto& m0__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Void UnityEngine::Coroutine::Finalize() */
inline static auto& m1_Finalize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[1]);
/* System.Void UnityEngine::Coroutine::ReleaseCoroutine(System.IntPtr) */
inline static auto& m2_ReleaseCoroutine = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);

};

}