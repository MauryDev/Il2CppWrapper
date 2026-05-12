
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::IO {

struct Directory {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 8> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.IO.DirectoryInfo System.IO::Directory::CreateDirectory(System.String) */
inline static auto& m0_CreateDirectory = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.Boolean System.IO::Directory::Exists(System.String) */
inline static auto& m1_Exists = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* System.String[] System.IO::Directory::GetFiles(System.String, System.String) */
inline static auto& m2_GetFiles = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* System.String[] System.IO::Directory::GetFiles(System.String, System.String, System.IO.EnumerationOptions) */
inline static auto& m3_GetFiles = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* System.Collections.Generic.IEnumerable<System.String> System.IO::Directory::InternalEnumeratePaths(System.String, System.String, System.IO.SearchTarget, System.IO.EnumerationOptions) */
inline static auto& m4_InternalEnumeratePaths = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.String System.IO::Directory::InternalGetDirectoryRoot(System.String) */
inline static auto& m5_InternalGetDirectoryRoot = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.String System.IO::Directory::GetCurrentDirectory() */
inline static auto& m6_GetCurrentDirectory = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.String System.IO::Directory::InsecureGetCurrentDirectory() */
inline static auto& m7_InsecureGetCurrentDirectory = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);

};

}