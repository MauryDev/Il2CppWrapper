#include "Il2CppDelegate.h"
#include "Il2CppCoreTypes.h"
#include <stdexcept>
#include "CoreLib/mscorlib.dll/System/Delegate.h"

namespace Il2CppWrapper {

	

	Delegate* Delegate::Create(Type* klassDelegate, Method* method, Object* target)
	{
		return CoreInterop::System::Delegate::m8_CreateDelegate->Call(
			klassDelegate->getObject(),
			target,
			method->GetReflectionObject()
		)->as<Delegate>();
	}

	Delegate* Delegate::CreateStatic(Type* klassDelegate, Method* method)
	{
		return CoreInterop::System::Delegate::m8_CreateDelegate->Call(
			klassDelegate->getObject(),
			nullptr,
			method->GetReflectionObject()
		)->as<Delegate>();
	}

	Delegate* Delegate::FromFunction(Type* klassDelegate, void* funcPtr)
	{ 
		using System_Delegate = CoreInterop::System::Delegate;
		auto klass = klassDelegate->GetClass();
		auto delegateObj = Object::New(klass);
		auto invoke = klass->GetMethodFromName("Invoke", -1);
		klass->GetMethodFromName(".ctor", 2)
			->Call(delegateObj, delegateObj, invoke);

		System_Delegate::f_invoke_impl->SetValue(delegateObj, funcPtr);
		System_Delegate::f_method_ptr->SetValue(delegateObj, funcPtr);
		System_Delegate::f_method_code->SetValue(delegateObj, delegateObj);
		System_Delegate::f_method_info->SetValue(delegateObj, invoke->GetReflectionObject());

		return delegateObj->as<Delegate>();
	}

	Object* Delegate::Invoke(std::span<Pointer*> args)
	{
		if (IsNull()) return nullptr;

		// The Invoke method is dynamic based on the delegate type
		auto invokeMethod = GetClass()->GetMethodFromName("Invoke", -1);
		if (!invokeMethod) {
			throw std::runtime_error("Delegate does not have an Invoke method");
		}

		return invokeMethod->Call(this, args.data());
	}
	bool Delegate::IsMulticast()
	{
		if (IsNull()) return false;

		auto lenInvocation = GetInvocationList().size();
		// Check if the class name contains MulticastDelegate
		return lenInvocation > 1;
	}

	std::vector<Delegate*> Delegate::GetInvocationList()
	{
		if (IsNull()) return {};

		auto listArray = CoreInterop::System::Delegate::m22_GetInvocationList
			->Call(this)
			->as<ArrayTyped<Delegate*>>();
		if (!listArray) return {};

		std::vector<Delegate*> result;
		for (auto val : listArray->AsSpan()) {
			if (val) result.push_back(val);
		}
		
		
		return result;
	}
	Method* Delegate::GetMethod()
	{
		if (IsNull()) return nullptr;
		auto methodInfo = CoreInterop::System::Delegate::m0_get_Method
			->Call(this)
			->as<ReflectionMethod>();
		return Method::FromReflection(methodInfo);
	}

	Object* Delegate::GetTarget()
	{
		if (IsNull()) return nullptr;
		return CoreInterop::System::Delegate::m2_get_Target->Call(this);
	}

	Class* Delegate::GetDelegateType()
	{
		if (IsNull()) return nullptr;
		return GetClass();
	}

	bool Delegate::Equals(Delegate* other) 
	{
		if (IsNull() || !other) return this == other;
		return CoreInterop::System::Delegate::m18_Equals
			->Call(this, other)
			->Unbox<bool>();
	}

	Delegate* Delegate::Combine(Delegate* other)
	{
		if (IsNull()) return other;
		if (!other) return this;
		return CoreInterop::System::Delegate::m23_Combine->Call(this, other)->as<Delegate>();
	}

	Delegate* Delegate::Remove(Delegate* other)
	{
		if (IsNull()) return nullptr;
		if (!other) return this;
		return CoreInterop::System::Delegate::m26_Remove->Call(this, other)->as<Delegate>();
	}

	std::string Delegate::GetFullName()
	{
		if (IsNull()) return "null";
		auto method = GetMethod();
		return std::string(GetDelegateType()->GetName()) + "::" + (method ? method->GetName() : "unknown");
	}

	bool Delegate::IsStatic()
	{
		return GetTarget() == nullptr;
	}

	bool Delegate::IsNull()
	{
		return this == nullptr;
	}
}