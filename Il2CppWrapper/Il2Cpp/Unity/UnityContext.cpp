#include "UnityContext.h"
#include "../UnityInterop/UnityEngine.CoreModule.dll/UnityEngine/Time.h"
#include "../UnityInterop/UnityEngine.CoreModule.dll/UnityEngine/Camera.h"
#include "../UnityInterop/UnityEngine.CoreModule.dll/UnityEngine/Application.h"

#include "../UnityInterop/UnityEngine.CoreModule.dll/UnityEngine/Debug.h"

using namespace Il2CppWrapper::UnityInterop;
namespace Il2CppWrapper::Unity {
	Object* UnityContext::GetMainCamera()
	{
		return UnityInterop::UnityEngine::Camera::m49_get_main->Call();
	}

	float UnityContext::GetTime()
	{
		return UnityInterop::UnityEngine::Time::m0_get_time->Call()
			->Unbox<float>();
	}
	float UnityContext::GetDeltaTime()
	{
		return UnityInterop::UnityEngine::Time::m4_get_deltaTime->Call()
			->Unbox<float>();
	}
	int UnityContext::GetFrameCount()
	{
		return UnityEngine::Time::m11_get_frameCount->Call()
			->Unbox<int>();
	}

	bool UnityContext::IsPlaying()
	{
		return UnityEngine::Application::m2_get_isPlaying->Call()
			->Unbox<bool>();
	}

	void UnityContext::Log(const char* message)
	{
		Log(String::New(message));
	}

	void UnityContext::Log(const char* message, Object* context)
	{
		Log(String::New(message), context);
	}

	void UnityContext::Log(Object* message)
	{
		UnityEngine::Debug::m9_Log->Call(message);

	}

	void UnityContext::Log(Object* message, Object* context)
	{
		UnityEngine::Debug::m10_Log->Call(message, context);

	}

	void UnityContext::LogError(const char* message)
	{
		LogError(String::New(message));
	}

	void UnityContext::LogError(Object* message)
	{
		UnityEngine::Debug::m13_LogError->Call(message);

	}

	void UnityContext::LogError(const char* message, Object* context)
	{
		LogError(String::New(message), context);

	}

	void UnityContext::LogError(Object * message, Object * context)
	{
		UnityEngine::Debug::m14_LogError->Call(message,context);

	}

	void UnityContext::LogWarning(const char* message)
	{
		LogWarning(String::New(message));
	}

	void UnityContext::LogWarning(Object* message)
	{
		UnityEngine::Debug::m19_LogWarning->Call(message);
	}

	void UnityContext::LogWarning(const char* message, Object* context)
	{
		LogWarning(String::New(message),context);

	}

	void UnityContext::LogWarning(Object* message, Object* context)
	{
		UnityEngine::Debug::m20_LogWarning->Call(message,context);

	}

}
