#include "Il2CppTypeHelper.h"
#include "CoreLib/mscorlib.dll/System/Type.h"
#include <algorithm>
#include "CoreLib/mscorlib.dll/System.Reflection/MethodInfo.h"
#include "CoreLib/mscorlib.dll/System.Reflection/MethodBase.h"

namespace Il2CppWrapper {
	namespace Generic {
		Class* MakeClass(Class* that, std::span<Class*> typeArguments)
		{
			auto typeGeneric = that->ToSystemType();

			auto types = Array::New(CoreInterop::System::Type::klass, typeArguments.size());
			int i = 0;
			for (auto typeArgument : typeArguments)
			{
				types->SetAt(i++, typeArgument);
			}

			auto ret = CoreInterop::System::Type::m122_MakeGenericType
				->Call(typeGeneric, types)
				->as<ReflectionType>();

			return Class::FromSystemType(ret);
		}

		Method* MakeMethod(Method* that, std::span<Class*> typeArguments)
		{
			auto typeGeneric = (Object*)that->GetReflectionObject();

			auto types = Array::New(CoreInterop::System::Type::klass, typeArguments.size());
			int i = 0;
			for (auto typeArgument : typeArguments)
			{
				types->SetAt(i++, typeArgument);
			}

			auto ret = CoreInterop::System::Reflection::MethodInfo::m6_MakeGenericMethod
				->Call(typeGeneric, types)
				->as<ReflectionMethod>();
			return (Method*)Method::FromReflection(ret);
		}

		bool IsClass(Class* klass)
		{
			auto typeGeneric = klass->ToSystemType();

			auto ret = CoreInterop::System::Type::m39_get_IsGenericType->Call(typeGeneric);

			return ret->isValid() ? ret->Unbox<bool>() : false;
		}

		bool IsMethod(Method* method)
		{
		

			auto typeGeneric = method->GetReflectionObject();

			auto ret = CoreInterop::System::Reflection::MethodBase::m11_get_IsGenericMethod
				->Call(typeGeneric);



			return ret->Unbox<bool>();
		}

		int GetParameterCount(Class* klass)
		{
			auto typeGeneric = klass->ToSystemType();
			return CoreInterop::System::Type::m48_get_GenericTypeArguments->Call(typeGeneric)
				->as<Array>()
				->GetLength();
			
		}

		int GetParameterCount(Method* method)
		{
			auto typeGeneric = method->GetReflectionObject();
			auto count = CoreInterop::System::Reflection::MethodInfo::m14_get_GenericParameterCount->Call(typeGeneric);
			
			return count->Unbox<int>();
		}

		std::vector<Class*> GetArguments(Class* klass)
		{
			auto typeGeneric = klass->ToSystemType();


			auto types = CoreInterop::System::Type::m48_get_GenericTypeArguments->Call(typeGeneric)
				->as<ArrayTyped<ReflectionType*>>()
				->AsSpan();
			
			std::vector<Class*> vec(types.size());

			std::transform(types.begin(), types.end(), vec.begin(),
				[](ReflectionType* v) {
					return Class::FromSystemType(v);
				});


			return vec;
		}

		std::vector<Class*> GetArguments(Method* method)
		{
			auto typeGeneric = method->GetReflectionObject();

			auto types = CoreInterop::System::Reflection::MethodInfo::m4_GetGenericArguments->Call(typeGeneric)
				->as<ArrayTyped<ReflectionType*>>()
				->AsSpan();
		

			std::vector<Class*> vec(types.size());

			std::transform(types.begin(), types.end(), vec.begin(),
				[](ReflectionType* v) {
					return Class::FromSystemType(v);
				});


			return vec;
		}
	}
	
	namespace Modifiers {

		Class* MakePointer(Class* klass)
		{
			auto typeObj = klass->ToSystemType();

			auto ret = CoreInterop::System::Type::m123_MakePointerType->Call(typeObj)
				->as<ReflectionType>();
			
			return Class::FromSystemType(ret);
		}

		Class* MakeByRef(Class* klass)
		{

			auto typeObj = klass->ToSystemType();

			auto ret = CoreInterop::System::Type::m121_MakeByRefType->Call(typeObj)
				->as<ReflectionType>();

			return Class::FromSystemType(ret);

			
		}

		Class* MakeArray(Class* klass, int rank)
		{
			auto typeObj = klass->ToSystemType();

			auto ret = CoreInterop::System::Type::m120_MakeArrayType->Call(typeObj, rank)
				->as<ReflectionType>();

			return Class::FromSystemType(ret);


			
		}

		Class* MakeArray(Class* klass)
		{
			auto typeObj = klass->ToSystemType();

			auto ret = CoreInterop::System::Type::m119_MakeArrayType->Call(typeObj)
				->as<ReflectionType>();

			return Class::FromSystemType(ret);
		}

		bool IsPointer(Class* klass)
		{
			auto typeObj = klass->ToSystemType();
			auto ret = CoreInterop::System::Type::m34_get_IsPointer->Call(typeObj);

			return ret->Unbox<bool>();
		}

		bool IsByRef(Class* klass)
		{
			auto typeObj = klass->ToSystemType();
			auto ret = CoreInterop::System::Type::m32_get_IsByRef->Call(typeObj);

			return ret->Unbox<bool>();
		}

		bool IsArray(Class* klass)
		{
			auto typeObj = klass->ToSystemType();
			auto ret = CoreInterop::System::Type::m30_get_IsArray->Call(typeObj);

			return ret->Unbox<bool>();

			
		}
	}

}