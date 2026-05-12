
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::IO {

struct File {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 6> methods;
    inline static std::array<Il2CppWrapper::Field*, 0> fields;  
      
    /* System.IO.StreamReader System.IO::File::OpenText(System.String) */
inline static auto& m0_OpenText = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.Void System.IO::File::Delete(System.String) */
inline static auto& m1_Delete = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* System.Boolean System.IO::File::Exists(System.String) */
inline static auto& m2_Exists = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* System.IO.FileStream System.IO::File::Open(System.String, System.IO.FileMode) */
inline static auto& m3_Open = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* System.IO.FileStream System.IO::File::Open(System.String, System.IO.FileMode, System.IO.FileAccess, System.IO.FileShare) */
inline static auto& m4_Open = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.IO.FileStream System.IO::File::OpenRead(System.String) */
inline static auto& m5_OpenRead = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);

};

}