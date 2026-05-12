#pragma once
#include "Il2CppWrapper.h"

namespace Il2CppWrapper {
	
	namespace Generic {
		Class* MakeClass(Class* that, std::span<Class*> typeArguments);
		Method* MakeMethod(Method* that, std::span<Class*> typeArguments);

		bool IsClass(Class* klass);
		bool IsMethod(Method* method);

		int GetParameterCount(Class* klass);
		int GetParameterCount(Method* method);

		std::vector<Class*> GetArguments(Class* klass);
		std::vector<Class*> GetArguments(Method* method);
	}
	
	namespace Modifiers {
		Class* MakePointer(Class* klass);
		Class* MakeByRef(Class* klass);
		Class* MakeArray(Class* klass, int rank);
		Class* MakeArray(Class* klass);

		bool IsPointer(Class* klass);
		bool IsByRef(Class* klass);
		bool IsArray(Class* klass);
	}

	
}