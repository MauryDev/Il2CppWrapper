#include "WindowsDist.h"
#include <Windows.h>
Il2CppWrapper::Core::Callbacks Il2CppWrapper::Windows::GetCallbacks()
{
    return Il2CppWrapper::Core::Callbacks{
        .fn_GetModule = [](const char* name) {
            return (void*)GetModuleHandleA(name);
        },
        .fn_GetProcAddr = [](void* module, const char* name) {
            return (void*)GetProcAddress((HMODULE)module,name);
        },
        .fn_toStrFromWCharString = [](wchar_t* str, size_t len) {
             int size = WideCharToMultiByte(
                CP_UTF8, 0,
                str,
                (int)len,
                nullptr, 0,
                nullptr, nullptr
            );

            std::string result(size, 0);

            WideCharToMultiByte(
                CP_UTF8, 0,
                str,
                (int)len,
                result.data(), size,
                nullptr, nullptr
            );
            return result;
        }
    };
}
