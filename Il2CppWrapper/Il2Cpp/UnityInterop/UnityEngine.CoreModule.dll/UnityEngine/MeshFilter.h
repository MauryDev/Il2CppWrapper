
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::UnityInterop::UnityEngine {

struct MeshFilter {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 8> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.Void UnityEngine::MeshFilter::DontStripMeshFilter() */
inline static auto& m0_DontStripMeshFilter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* UnityEngine.Mesh UnityEngine::MeshFilter::get_sharedMesh() */
inline static auto& m1_get_sharedMesh = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Void UnityEngine::MeshFilter::set_sharedMesh(UnityEngine.Mesh) */
inline static auto& m2_set_sharedMesh = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* UnityEngine.Mesh UnityEngine::MeshFilter::get_mesh() */
inline static auto& m3_get_mesh = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Void UnityEngine::MeshFilter::.ctor() */
inline static auto& m4__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.IntPtr UnityEngine::MeshFilter::get_sharedMesh_Injected(System.IntPtr) */
inline static auto& m5_get_sharedMesh_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.Void UnityEngine::MeshFilter::set_sharedMesh_Injected(System.IntPtr, System.IntPtr) */
inline static auto& m6_set_sharedMesh_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.IntPtr UnityEngine::MeshFilter::get_mesh_Injected(System.IntPtr) */
inline static auto& m7_get_mesh_Injected = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);

};

}