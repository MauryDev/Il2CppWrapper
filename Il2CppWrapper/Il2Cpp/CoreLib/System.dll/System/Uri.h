
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System {

struct Uri {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 126> methods;
    inline static std::array<Il2CppWrapper::Field*, 36> fields;  
    /* System.String System::Uri::UriSchemeFile */
inline static auto& f_UriSchemeFile = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[0]);
/* System.String System::Uri::UriSchemeFtp */
inline static auto& f_UriSchemeFtp = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[1]);
/* System.String System::Uri::UriSchemeGopher */
inline static auto& f_UriSchemeGopher = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[2]);
/* System.String System::Uri::UriSchemeHttp */
inline static auto& f_UriSchemeHttp = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[3]);
/* System.String System::Uri::UriSchemeHttps */
inline static auto& f_UriSchemeHttps = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[4]);
/* System.String System::Uri::UriSchemeWs */
inline static auto& f_UriSchemeWs = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[5]);
/* System.String System::Uri::UriSchemeWss */
inline static auto& f_UriSchemeWss = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[6]);
/* System.String System::Uri::UriSchemeMailto */
inline static auto& f_UriSchemeMailto = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[7]);
/* System.String System::Uri::UriSchemeNews */
inline static auto& f_UriSchemeNews = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[8]);
/* System.String System::Uri::UriSchemeNntp */
inline static auto& f_UriSchemeNntp = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[9]);
/* System.String System::Uri::UriSchemeNetTcp */
inline static auto& f_UriSchemeNetTcp = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[10]);
/* System.String System::Uri::UriSchemeNetPipe */
inline static auto& f_UriSchemeNetPipe = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[11]);
/* System.String System::Uri::SchemeDelimiter */
inline static auto& f_SchemeDelimiter = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[12]);
/* System.Int32 System::Uri::c_Max16BitUtf8SequenceLength */
inline static auto& f_c_Max16BitUtf8SequenceLength = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[13]);
/* System.Int32 System::Uri::c_MaxUriBufferSize */
inline static auto& f_c_MaxUriBufferSize = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[14]);
/* System.Int32 System::Uri::c_MaxUriSchemeName */
inline static auto& f_c_MaxUriSchemeName = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[15]);
/* System.String System::Uri::m_String */
inline static auto& f_m_String = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[16]);
/* System.String System::Uri::m_originalUnicodeString */
inline static auto& f_m_originalUnicodeString = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[17]);
/* System.UriParser System::Uri::m_Syntax */
inline static auto& f_m_Syntax = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[18]);
/* System.String System::Uri::m_DnsSafeHost */
inline static auto& f_m_DnsSafeHost = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[19]);
/* System.Uri.Flags System::Uri::m_Flags */
inline static auto& f_m_Flags = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[20]);
/* System.Uri.UriInfo System::Uri::m_Info */
inline static auto& f_m_Info = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[21]);
/* System.Boolean System::Uri::m_iriParsing */
inline static auto& f_m_iriParsing = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[22]);
/* System.Boolean System::Uri::s_ConfigInitialized */
inline static auto& f_s_ConfigInitialized = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[23]);
/* System.Boolean System::Uri::s_ConfigInitializing */
inline static auto& f_s_ConfigInitializing = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[24]);
/* System.UriIdnScope System::Uri::s_IdnScope */
inline static auto& f_s_IdnScope = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[25]);
/* System.Boolean System::Uri::s_IriParsing */
inline static auto& f_s_IriParsing = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[26]);
/* System.Boolean System::Uri::useDotNetRelativeOrAbsolute */
inline static auto& f_useDotNetRelativeOrAbsolute = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[27]);
/* System.UriKind System::Uri::DotNetRelativeOrAbsolute */
inline static auto& f_DotNetRelativeOrAbsolute = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[28]);
/* System.Boolean System::Uri::IsWindowsFileSystem */
inline static auto& f_IsWindowsFileSystem = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[29]);
/* System.Object System::Uri::s_initLock */
inline static auto& f_s_initLock = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[30]);
/* System.UriFormat System::Uri::V1ToStringUnescape */
inline static auto& f_V1ToStringUnescape = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[31]);
/* System.Char System::Uri::c_DummyChar */
inline static auto& f_c_DummyChar = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[32]);
/* System.Char System::Uri::c_EOL */
inline static auto& f_c_EOL = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[33]);
/* System.Char[] System::Uri::HexLowerChars */
inline static auto& f_HexLowerChars = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[34]);
/* System.Char[] System::Uri::_WSchars */
inline static auto& f__WSchars = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<true>*&>(fields[35]);
  
    /* System.Boolean System::Uri::get_IsImplicitFile() */
inline static auto& m0_get_IsImplicitFile = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Boolean System::Uri::get_IsUncOrDosPath() */
inline static auto& m1_get_IsUncOrDosPath = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);
/* System.Boolean System::Uri::get_IsDosPath() */
inline static auto& m2_get_IsDosPath = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[2]);
/* System.Boolean System::Uri::get_IsUncPath() */
inline static auto& m3_get_IsUncPath = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[3]);
/* System.Uri.Flags System::Uri::get_HostType() */
inline static auto& m4_get_HostType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[4]);
/* System.UriParser System::Uri::get_Syntax() */
inline static auto& m5_get_Syntax = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[5]);
/* System.Boolean System::Uri::get_IsNotAbsoluteUri() */
inline static auto& m6_get_IsNotAbsoluteUri = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[6]);
/* System.Boolean System::Uri::IriParsingStatic(System.UriParser) */
inline static auto& m7_IriParsingStatic = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[7]);
/* System.Boolean System::Uri::get_AllowIdn() */
inline static auto& m8_get_AllowIdn = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[8]);
/* System.Boolean System::Uri::AllowIdnStatic(System.UriParser, System.Uri.Flags) */
inline static auto& m9_AllowIdnStatic = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[9]);
/* System.Boolean System::Uri::IsIntranet(System.String) */
inline static auto& m10_IsIntranet = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[10]);
/* System.Boolean System::Uri::get_UserDrivenParsing() */
inline static auto& m11_get_UserDrivenParsing = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[11]);
/* System.Void System::Uri::SetUserDrivenParsing() */
inline static auto& m12_SetUserDrivenParsing = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[12]);
/* System.UInt16 System::Uri::get_SecuredPathIndex() */
inline static auto& m13_get_SecuredPathIndex = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[13]);
/* System.Boolean System::Uri::NotAny(System.Uri.Flags) */
inline static auto& m14_NotAny = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[14]);
/* System.Boolean System::Uri::InFact(System.Uri.Flags) */
inline static auto& m15_InFact = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[15]);
/* System.Boolean System::Uri::StaticNotAny(System.Uri.Flags, System.Uri.Flags) */
inline static auto& m16_StaticNotAny = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[16]);
/* System.Boolean System::Uri::StaticInFact(System.Uri.Flags, System.Uri.Flags) */
inline static auto& m17_StaticInFact = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[17]);
/* System.Uri.UriInfo System::Uri::EnsureUriInfo() */
inline static auto& m18_EnsureUriInfo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[18]);
/* System.Void System::Uri::EnsureParseRemaining() */
inline static auto& m19_EnsureParseRemaining = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[19]);
/* System.Void System::Uri::EnsureHostString(System.Boolean) */
inline static auto& m20_EnsureHostString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[20]);
/* System.Void System::Uri::.ctor(System.String) */
inline static auto& m21__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[21]);
/* System.Void System::Uri::.ctor(System.String, System.UriKind) */
inline static auto& m22__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[22]);
/* System.Void System::Uri::.ctor(System.Uri, System.String) */
inline static auto& m23__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[23]);
/* System.Void System::Uri::CreateUri(System.Uri, System.String, System.Boolean) */
inline static auto& m24_CreateUri = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[24]);
/* System.Void System::Uri::.ctor(System.Uri, System.Uri) */
inline static auto& m25__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[25]);
/* System.ParsingError System::Uri::GetCombinedString(System.Uri, System.String, System.Boolean, System.String&) */
inline static auto& m26_GetCombinedString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[26]);
/* System.UriFormatException System::Uri::GetException(System.ParsingError) */
inline static auto& m27_GetException = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[27]);
/* System.Void System::Uri::.ctor(System.Runtime.Serialization.SerializationInfo, System.Runtime.Serialization.StreamingContext) */
inline static auto& m28__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[28]);
/* System.Void System::Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo, System.Runtime.Serialization.StreamingContext) */
inline static auto& m29_System_Runtime_Serialization_ISerializable_GetObjectData = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[29]);
/* System.Void System::Uri::GetObjectData(System.Runtime.Serialization.SerializationInfo, System.Runtime.Serialization.StreamingContext) */
inline static auto& m30_GetObjectData = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[30]);
/* System.String System::Uri::get_AbsolutePath() */
inline static auto& m31_get_AbsolutePath = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[31]);
/* System.String System::Uri::get_PrivateAbsolutePath() */
inline static auto& m32_get_PrivateAbsolutePath = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[32]);
/* System.String System::Uri::get_AbsoluteUri() */
inline static auto& m33_get_AbsoluteUri = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[33]);
/* System.String System::Uri::get_LocalPath() */
inline static auto& m34_get_LocalPath = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[34]);
/* System.String System::Uri::get_Authority() */
inline static auto& m35_get_Authority = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[35]);
/* System.UriHostNameType System::Uri::get_HostNameType() */
inline static auto& m36_get_HostNameType = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[36]);
/* System.Boolean System::Uri::get_IsDefaultPort() */
inline static auto& m37_get_IsDefaultPort = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[37]);
/* System.Boolean System::Uri::get_IsFile() */
inline static auto& m38_get_IsFile = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[38]);
/* System.Boolean System::Uri::get_IsLoopback() */
inline static auto& m39_get_IsLoopback = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[39]);
/* System.String System::Uri::get_PathAndQuery() */
inline static auto& m40_get_PathAndQuery = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[40]);
/* System.String[] System::Uri::get_Segments() */
inline static auto& m41_get_Segments = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[41]);
/* System.Boolean System::Uri::get_IsUnc() */
inline static auto& m42_get_IsUnc = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[42]);
/* System.String System::Uri::get_Host() */
inline static auto& m43_get_Host = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[43]);
/* System.Boolean System::Uri::StaticIsFile(System.UriParser) */
inline static auto& m44_StaticIsFile = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[44]);
/* System.Object System::Uri::get_InitializeLock() */
inline static auto& m45_get_InitializeLock = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[45]);
/* System.Void System::Uri::InitializeUriConfig() */
inline static auto& m46_InitializeUriConfig = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[46]);
/* System.String System::Uri::GetLocalPath() */
inline static auto& m47_GetLocalPath = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[47]);
/* System.Int32 System::Uri::get_Port() */
inline static auto& m48_get_Port = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[48]);
/* System.String System::Uri::get_Query() */
inline static auto& m49_get_Query = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[49]);
/* System.String System::Uri::get_Fragment() */
inline static auto& m50_get_Fragment = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[50]);
/* System.String System::Uri::get_Scheme() */
inline static auto& m51_get_Scheme = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[51]);
/* System.Boolean System::Uri::get_OriginalStringSwitched() */
inline static auto& m52_get_OriginalStringSwitched = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[52]);
/* System.String System::Uri::get_OriginalString() */
inline static auto& m53_get_OriginalString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[53]);
/* System.String System::Uri::get_DnsSafeHost() */
inline static auto& m54_get_DnsSafeHost = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[54]);
/* System.Boolean System::Uri::get_IsAbsoluteUri() */
inline static auto& m55_get_IsAbsoluteUri = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[55]);
/* System.Boolean System::Uri::get_UserEscaped() */
inline static auto& m56_get_UserEscaped = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[56]);
/* System.String System::Uri::get_UserInfo() */
inline static auto& m57_get_UserInfo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[57]);
/* System.Boolean System::Uri::IsGenDelim(System.Char) */
inline static auto& m58_IsGenDelim = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[58]);
/* System.Boolean System::Uri::CheckSchemeName(System.String) */
inline static auto& m59_CheckSchemeName = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[59]);
/* System.Boolean System::Uri::IsHexDigit(System.Char) */
inline static auto& m60_IsHexDigit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[60]);
/* System.Int32 System::Uri::FromHex(System.Char) */
inline static auto& m61_FromHex = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[61]);
/* System.Int32 System::Uri::GetHashCode() */
inline static auto& m62_GetHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[62]);
/* System.String System::Uri::ToString() */
inline static auto& m63_ToString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[63]);
/* System.Boolean System::Uri::op_Equality(System.Uri, System.Uri) */
inline static auto& m64_op_Equality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[64]);
/* System.Boolean System::Uri::op_Inequality(System.Uri, System.Uri) */
inline static auto& m65_op_Inequality = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[65]);
/* System.Boolean System::Uri::Equals(System.Object) */
inline static auto& m66_Equals = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, true>*&>(methods[66]);
/* System.Boolean System::Uri::CheckForColonInFirstPathSegment(System.String) */
inline static auto& m67_CheckForColonInFirstPathSegment = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[67]);
/* System.String System::Uri::InternalEscapeString(System.String) */
inline static auto& m68_InternalEscapeString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[68]);
/* System.ParsingError System::Uri::ParseScheme(System.String, System.Uri.Flags&, System.UriParser&) */
inline static auto& m69_ParseScheme = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[69]);
/* System.UriFormatException System::Uri::ParseMinimal() */
inline static auto& m70_ParseMinimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[70]);
/* System.ParsingError System::Uri::PrivateParseMinimal() */
inline static auto& m71_PrivateParseMinimal = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[71]);
/* System.Void System::Uri::PrivateParseMinimalIri(System.String, System.UInt16) */
inline static auto& m72_PrivateParseMinimalIri = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[72]);
/* System.Void System::Uri::CreateUriInfo(System.Uri.Flags) */
inline static auto& m73_CreateUriInfo = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[73]);
/* System.Void System::Uri::CreateHostString() */
inline static auto& m74_CreateHostString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[74]);
/* System.String System::Uri::CreateHostStringHelper(System.String, System.UInt16, System.UInt16, System.Uri.Flags&, System.String&) */
inline static auto& m75_CreateHostStringHelper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[75]);
/* System.Void System::Uri::GetHostViaCustomSyntax() */
inline static auto& m76_GetHostViaCustomSyntax = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[76]);
/* System.String System::Uri::GetParts(System.UriComponents, System.UriFormat) */
inline static auto& m77_GetParts = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[77]);
/* System.String System::Uri::GetEscapedParts(System.UriComponents) */
inline static auto& m78_GetEscapedParts = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[78]);
/* System.String System::Uri::GetUnescapedParts(System.UriComponents, System.UriFormat) */
inline static auto& m79_GetUnescapedParts = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[79]);
/* System.String System::Uri::ReCreateParts(System.UriComponents, System.UInt16, System.UriFormat) */
inline static auto& m80_ReCreateParts = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[80]);
/* System.String System::Uri::GetUriPartsFromUserString(System.UriComponents) */
inline static auto& m81_GetUriPartsFromUserString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[81]);
/* System.Void System::Uri::ParseRemaining() */
inline static auto& m82_ParseRemaining = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[82]);
/* System.UInt16 System::Uri::ParseSchemeCheckImplicitFile(System.Char*, System.UInt16, System.ParsingError&, System.Uri.Flags&, System.UriParser&) */
inline static auto& m83_ParseSchemeCheckImplicitFile = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[83]);
/* System.Boolean System::Uri::CheckKnownSchemes(System.Int64*, System.UInt16, System.UriParser&) */
inline static auto& m84_CheckKnownSchemes = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[84]);
/* System.ParsingError System::Uri::CheckSchemeSyntax(System.Char*, System.UInt16, System.UriParser&) */
inline static auto& m85_CheckSchemeSyntax = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[85]);
/* System.UInt16 System::Uri::CheckAuthorityHelper(System.Char*, System.UInt16, System.UInt16, System.ParsingError&, System.Uri.Flags&, System.UriParser, System.String&) */
inline static auto& m86_CheckAuthorityHelper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[86]);
/* System.Void System::Uri::CheckAuthorityHelperHandleDnsIri(System.Char*, System.UInt16, System.Int32, System.Int32, System.Boolean, System.Boolean, System.UriParser, System.String, System.Uri.Flags&, System.Boolean&, System.String&, System.ParsingError&) */
inline static auto& m87_CheckAuthorityHelperHandleDnsIri = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[87]);
/* System.Void System::Uri::CheckAuthorityHelperHandleAnyHostIri(System.Char*, System.Int32, System.Int32, System.Boolean, System.Boolean, System.UriParser, System.Uri.Flags&, System.String&, System.ParsingError&) */
inline static auto& m88_CheckAuthorityHelperHandleAnyHostIri = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[88]);
/* System.Void System::Uri::FindEndOfComponent(System.String, System.UInt16&, System.UInt16, System.Char) */
inline static auto& m89_FindEndOfComponent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[89]);
/* System.Void System::Uri::FindEndOfComponent(System.Char*, System.UInt16&, System.UInt16, System.Char) */
inline static auto& m90_FindEndOfComponent = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[90]);
/* System.Uri.Check System::Uri::CheckCanonical(System.Char*, System.UInt16&, System.UInt16, System.Char) */
inline static auto& m91_CheckCanonical = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[91]);
/* System.Char[] System::Uri::GetCanonicalPath(System.Char[], System.Int32&, System.UriFormat) */
inline static auto& m92_GetCanonicalPath = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[92]);
/* System.Void System::Uri::UnescapeOnly(System.Char*, System.Int32, System.Int32&, System.Char, System.Char, System.Char) */
inline static auto& m93_UnescapeOnly = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[93]);
/* System.Char[] System::Uri::Compress(System.Char[], System.UInt16, System.Int32&, System.UriParser) */
inline static auto& m94_Compress = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[94]);
/* System.Int32 System::Uri::CalculateCaseInsensitiveHashCode(System.String) */
inline static auto& m95_CalculateCaseInsensitiveHashCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[95]);
/* System.String System::Uri::CombineUri(System.Uri, System.String, System.UriFormat) */
inline static auto& m96_CombineUri = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[96]);
/* System.Boolean System::Uri::get_HasAuthority() */
inline static auto& m97_get_HasAuthority = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[97]);
/* System.Boolean System::Uri::IsLWS(System.Char) */
inline static auto& m98_IsLWS = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[98]);
/* System.Boolean System::Uri::IsAsciiLetter(System.Char) */
inline static auto& m99_IsAsciiLetter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[99]);
/* System.Boolean System::Uri::IsAsciiLetterOrDigit(System.Char) */
inline static auto& m100_IsAsciiLetterOrDigit = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[100]);
/* System.Boolean System::Uri::IsBidiControlCharacter(System.Char) */
inline static auto& m101_IsBidiControlCharacter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[101]);
/* System.String System::Uri::StripBidiControlCharacter(System.Char*, System.Int32, System.Int32) */
inline static auto& m102_StripBidiControlCharacter = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[102]);
/* System.Void System::Uri::CreateThis(System.String, System.Boolean, System.UriKind) */
inline static auto& m103_CreateThis = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[103]);
/* System.Void System::Uri::InitializeUri(System.ParsingError, System.UriKind, System.UriFormatException&) */
inline static auto& m104_InitializeUri = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[104]);
/* System.Boolean System::Uri::CheckForConfigLoad(System.String) */
inline static auto& m105_CheckForConfigLoad = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[105]);
/* System.Boolean System::Uri::CheckForUnicode(System.String) */
inline static auto& m106_CheckForUnicode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[106]);
/* System.Boolean System::Uri::CheckForEscapedUnreserved(System.String) */
inline static auto& m107_CheckForEscapedUnreserved = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[107]);
/* System.Boolean System::Uri::TryCreate(System.String, System.UriKind, System.Uri&) */
inline static auto& m108_TryCreate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[108]);
/* System.Boolean System::Uri::TryCreate(System.Uri, System.String, System.Uri&) */
inline static auto& m109_TryCreate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[109]);
/* System.Boolean System::Uri::TryCreate(System.Uri, System.Uri, System.Uri&) */
inline static auto& m110_TryCreate = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[110]);
/* System.String System::Uri::GetComponents(System.UriComponents, System.UriFormat) */
inline static auto& m111_GetComponents = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[111]);
/* System.Boolean System::Uri::IsWellFormedOriginalString() */
inline static auto& m112_IsWellFormedOriginalString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[112]);
/* System.Boolean System::Uri::IsWellFormedUriString(System.String, System.UriKind) */
inline static auto& m113_IsWellFormedUriString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[113]);
/* System.Boolean System::Uri::InternalIsWellFormedOriginalString() */
inline static auto& m114_InternalIsWellFormedOriginalString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[114]);
/* System.String System::Uri::UnescapeDataString(System.String) */
inline static auto& m115_UnescapeDataString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[115]);
/* System.String System::Uri::EscapeUnescapeIri(System.String, System.Int32, System.Int32, System.UriComponents) */
inline static auto& m116_EscapeUnescapeIri = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[116]);
/* System.Void System::Uri::.ctor(System.Uri.Flags, System.UriParser, System.String) */
inline static auto& m117__ctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[117]);
/* System.Uri System::Uri::CreateHelper(System.String, System.Boolean, System.UriKind, System.UriFormatException&) */
inline static auto& m118_CreateHelper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[118]);
/* System.Uri System::Uri::ResolveHelper(System.Uri, System.Uri, System.String&, System.Boolean&, System.UriFormatException&) */
inline static auto& m119_ResolveHelper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[119]);
/* System.String System::Uri::GetRelativeSerializationString(System.UriFormat) */
inline static auto& m120_GetRelativeSerializationString = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[120]);
/* System.String System::Uri::GetComponentsHelper(System.UriComponents, System.UriFormat) */
inline static auto& m121_GetComponentsHelper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[121]);
/* System.Boolean System::Uri::IsBaseOf(System.Uri) */
inline static auto& m122_IsBaseOf = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[122]);
/* System.Boolean System::Uri::IsBaseOfHelper(System.Uri) */
inline static auto& m123_IsBaseOfHelper = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[123]);
/* System.Void System::Uri::CreateThisFromUri(System.Uri) */
inline static auto& m124_CreateThisFromUri = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[124]);
/* System.Void System::Uri::.cctor() */
inline static auto& m125__cctor = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<true, false>*&>(methods[125]);

};

}