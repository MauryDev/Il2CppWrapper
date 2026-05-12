#pragma once
#include <string>
#include <memory>
namespace Il2CppWrapper::Core {
	struct IHook {
		virtual bool Create(void* function, void* replace, void** origin) = 0;
		virtual bool Destroy(void* function) = 0;
		virtual ~IHook() = default;

	};
	struct Callbacks {
		void* (*fn_GetModule)(const char* name);
		void* (*fn_GetProcAddr)(void* module, const char* name);
		std::string(*fn_toStrFromWCharString)(wchar_t* str, size_t len);
		std::shared_ptr<IHook> HookApi;
		

	};
}