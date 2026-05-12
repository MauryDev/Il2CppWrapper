#include "InputHelpers.h"
#include "../UnityInterop/UnityEngine.InputLegacyModule.dll/UnityEngine/Input.h"

using namespace Il2CppWrapper::UnityInterop;

namespace Il2CppWrapper::Unity
{
	float InputHelpers::GetAxis(const char* axis)
	{
		return UnityEngine::Input::m0_GetAxis->Call(String::New(axis))
			->Unbox<float>();
	}

	float InputHelpers::GetAxisRaw(const char* axis)
	{
		return UnityEngine::Input::m1_GetAxisRaw->Call(String::New(axis))
			->Unbox<float>();
	}

	bool InputHelpers::GetButton(const char* button)
	{
		return UnityEngine::Input::m2_GetButton->Call(String::New(button))
			->Unbox<bool>();
	}

	bool InputHelpers::GetButtonDown(const char* button) {
		return UnityEngine::Input::m3_GetButtonDown->Call(String::New(button))
			->Unbox<bool>();
	}

	bool InputHelpers::GetButtonUp(const char* button) {
		return UnityEngine::Input::m4_GetButtonUp->Call(String::New(button))
			->Unbox<bool>();
	}

	bool InputHelpers::GetKey(int keyCode) {
		return UnityEngine::Input::m14_GetKey->Call(keyCode)
			->Unbox<bool>();
	}

	bool InputHelpers::GetKeyDown(int keyCode) {
		return UnityEngine::Input::m18_GetKeyDown->Call(keyCode)
			->Unbox<bool>();
	}

	bool InputHelpers::GetKeyUp(int keyCode) {
		return UnityEngine::Input::m16_GetKeyUp->Call(keyCode)
			->Unbox<bool>();
	}

	bool InputHelpers::GetMouseButton(int button) {
		return UnityEngine::Input::m8_GetMouseButton->Call(button);
	}

	bool InputHelpers::GetMouseButtonDown(int button) {
		return UnityEngine::Input::m9_GetMouseButtonDown->Call(button)
			->Unbox<bool>();
	}

	bool InputHelpers::GetMouseButtonUp(int button) {
		return UnityEngine::Input::m10_GetMouseButtonUp->Call(button)
			->Unbox<bool>();
	}

	Vector3* InputHelpers::GetMousePosition() {
		return UnityEngine::Input::m22_get_mousePosition->Call()
			->Unbox<Vector3*>();
	}

	Vector2* InputHelpers::GetMouseScrollDelta() {
		return UnityEngine::Input::m23_get_mouseScrollDelta->Call()
			->Unbox<Vector2*>();
	}


}