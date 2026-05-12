#pragma once
#include "Il2CppWrapper.h"
#include <stdexcept>

namespace Il2CppWrapper::Exceptions {

    class Il2CppException : public std::exception {
    public:
        Il2CppException(Exception* exc);
        const char* what() const noexcept override;
        const char* GetStackTrace() const;

    private:
        std::string message;
        std::string stack_trace;
    };
}