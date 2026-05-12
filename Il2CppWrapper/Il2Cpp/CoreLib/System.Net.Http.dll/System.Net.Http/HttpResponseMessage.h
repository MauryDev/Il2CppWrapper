
#pragma once
#include <Il2Cpp/Il2CppWrapper.h>
#include <array>
#include <Il2Cpp/metadata/MethodGen.h>
#include <Il2Cpp/metadata/FieldGen.h>

namespace Il2CppWrapper::CoreInterop::System::Net::Http {

struct HttpResponseMessage {
    inline static Il2CppWrapper::Class* klass;
    inline static std::array<Il2CppWrapper::Method*, 2> methods;
    inline static std::array<Il2CppWrapper::Field*, 2> fields;  
    /* System.Net.HttpStatusCode System.Net.Http::HttpResponseMessage::statusCode */
inline static auto& f_statusCode = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[0]);
/* System.Net.Http.HttpContent System.Net.Http::HttpResponseMessage::<Content>k__BackingField */
inline static auto& f__Content_k__BackingField = reinterpret_cast<Il2CppWrapper::Metadata::FieldGen<false>*&>(fields[1]);
  
    /* System.Net.Http.HttpContent System.Net.Http::HttpResponseMessage::get_Content() */
inline static auto& m0_get_Content = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[0]);
/* System.Boolean System.Net.Http::HttpResponseMessage::get_IsSuccessStatusCode() */
inline static auto& m1_get_IsSuccessStatusCode = reinterpret_cast<Il2CppWrapper::Metadata::MethodGen<false, false>*&>(methods[1]);

};

}