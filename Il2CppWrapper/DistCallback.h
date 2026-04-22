#pragma once
#include <string>

namespace Il2CppWrapper::Core {
	struct Callbacks {
		void* (*fn_GetModule)(const char* name);
		void* (*fn_GetProcAddr)(void* module, const char* name);
		std::string(*fn_toStrFromWCharString)(wchar_t* str, size_t len);
	};
}