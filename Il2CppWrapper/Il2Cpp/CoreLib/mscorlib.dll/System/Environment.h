
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct Environment {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 41> methods;
    inline static std::array<Il2CppWrapper::Field*, 3> fields;  
    /* System.String System::Environment::mono_corlib_version */
inline static auto& f_mono_corlib_version = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.String System::Environment::nl */
inline static auto& f_nl = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
/* System.OperatingSystem System::Environment::os */
inline static auto& f_os = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[2]);
  
    /* System.String System::Environment::GetResourceString(System.String) */
inline static auto& m0_GetResourceString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[0]);
/* System.String System::Environment::GetResourceString(System.String, System.Object[]) */
inline static auto& m1_GetResourceString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[1]);
/* System.String System::Environment::GetResourceStringEncodingName(System.Int32) */
inline static auto& m2_GetResourceStringEncodingName = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[2]);
/* System.String System::Environment::get_CurrentDirectory() */
inline static auto& m3_get_CurrentDirectory = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[3]);
/* System.Int32 System::Environment::get_CurrentManagedThreadId() */
inline static auto& m4_get_CurrentManagedThreadId = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[4]);
/* System.Boolean System::Environment::get_HasShutdownStarted() */
inline static auto& m5_get_HasShutdownStarted = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[5]);
/* System.String System::Environment::get_MachineName() */
inline static auto& m6_get_MachineName = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[6]);
/* System.String System::Environment::GetNewLine() */
inline static auto& m7_GetNewLine = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.String System::Environment::get_NewLine() */
inline static auto& m8_get_NewLine = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[8]);
/* System.PlatformID System::Environment::get_Platform() */
inline static auto& m9_get_Platform = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[9]);
/* System.String System::Environment::GetOSVersionString() */
inline static auto& m10_GetOSVersionString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[10]);
/* System.OperatingSystem System::Environment::get_OSVersion() */
inline static auto& m11_get_OSVersion = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[11]);
/* System.Version System::Environment::CreateVersionFromString(System.String) */
inline static auto& m12_CreateVersionFromString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[12]);
/* System.String System::Environment::get_StackTrace() */
inline static auto& m13_get_StackTrace = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[13]);
/* System.String System::Environment::get_SystemDirectory() */
inline static auto& m14_get_SystemDirectory = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[14]);
/* System.Int32 System::Environment::get_TickCount() */
inline static auto& m15_get_TickCount = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[15]);
/* System.String System::Environment::get_UserDomainName() */
inline static auto& m16_get_UserDomainName = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[16]);
/* System.String System::Environment::get_UserName() */
inline static auto& m17_get_UserName = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[17]);
/* System.Void System::Environment::Exit(System.Int32) */
inline static auto& m18_Exit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[18]);
/* System.String System::Environment::ExpandEnvironmentVariables(System.String) */
inline static auto& m19_ExpandEnvironmentVariables = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[19]);
/* System.String[] System::Environment::GetCommandLineArgs() */
inline static auto& m20_GetCommandLineArgs = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[20]);
/* System.String System::Environment::internalGetEnvironmentVariable_native(System.IntPtr) */
inline static auto& m21_internalGetEnvironmentVariable_native = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[21]);
/* System.String System::Environment::internalGetEnvironmentVariable(System.String) */
inline static auto& m22_internalGetEnvironmentVariable = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[22]);
/* System.String System::Environment::GetEnvironmentVariable(System.String) */
inline static auto& m23_GetEnvironmentVariable = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[23]);
/* System.Collections.Hashtable System::Environment::GetEnvironmentVariablesNoCase() */
inline static auto& m24_GetEnvironmentVariablesNoCase = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[24]);
/* System.Collections.IDictionary System::Environment::GetEnvironmentVariables() */
inline static auto& m25_GetEnvironmentVariables = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[25]);
/* System.String System::Environment::GetFolderPath(System.Environment.SpecialFolder) */
inline static auto& m26_GetFolderPath = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* System.String System::Environment::GetWindowsFolderPath(System.Int32) */
inline static auto& m27_GetWindowsFolderPath = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);
/* System.String System::Environment::GetFolderPath(System.Environment.SpecialFolder, System.Environment.SpecialFolderOption) */
inline static auto& m28_GetFolderPath = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[28]);
/* System.String System::Environment::ReadXdgUserDir(System.String, System.String, System.String, System.String) */
inline static auto& m29_ReadXdgUserDir = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[29]);
/* System.String System::Environment::UnixGetFolderPath(System.Environment.SpecialFolder, System.Environment.SpecialFolderOption) */
inline static auto& m30_UnixGetFolderPath = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[30]);
/* System.Void System::Environment::FailFast(System.String, System.Exception) */
inline static auto& m31_FailFast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[31]);
/* System.Void System::Environment::FailFast(System.String, System.Exception, System.String) */
inline static auto& m32_FailFast = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[32]);
/* System.Int32 System::Environment::get_ProcessorCount() */
inline static auto& m33_get_ProcessorCount = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[33]);
/* System.Boolean System::Environment::get_IsRunningOnWindows() */
inline static auto& m34_get_IsRunningOnWindows = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[34]);
/* System.String[] System::Environment::GetEnvironmentVariableNames() */
inline static auto& m35_GetEnvironmentVariableNames = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[35]);
/* System.String System::Environment::GetMachineConfigPath() */
inline static auto& m36_GetMachineConfigPath = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[36]);
/* System.String System::Environment::internalGetHome() */
inline static auto& m37_internalGetHome = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[37]);
/* System.Int32 System::Environment::GetPageSize() */
inline static auto& m38_GetPageSize = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[38]);
/* System.Boolean System::Environment::get_IsUnix() */
inline static auto& m39_get_IsUnix = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[39]);
/* System.String System::Environment::GetStackTrace(System.Exception, System.Boolean) */
inline static auto& m40_GetStackTrace = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[40]);

};

}