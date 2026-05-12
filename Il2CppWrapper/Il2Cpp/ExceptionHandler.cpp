#include "ExceptionHandler.h"

Il2CppWrapper::Exceptions::Il2CppException::Il2CppException(Exception* exc)
{
    message = exc->getMessage();
    stack_trace = exc->GetStackTrace();
}

const char* Il2CppWrapper::Exceptions::Il2CppException::what() const noexcept
{
    return message.c_str();
}

const char* Il2CppWrapper::Exceptions::Il2CppException::GetStackTrace() const
{
    return stack_trace.c_str();
}
