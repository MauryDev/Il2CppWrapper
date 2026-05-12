// Il2CppWrapper\Il2Cpp\UnityInterop\UnityContext.h
#pragma once
#include "../Il2CppWrapper.h"


namespace Il2CppWrapper::Unity {

    class UnityContext {
    public:
        static Object* GetMainCamera();

        static float GetTime();

        static float GetDeltaTime();
        static int GetFrameCount();
        static bool IsPlaying();

        static void Log(const char* message);
        static void Log(const char* message, Object* context);

        static void Log(Object* message);
        static void Log(Object* message, Object* context);

        static void LogError(const char* message);
        static void LogError(Object* message);

        static void LogError(const char* message, Object* context);
        static void LogError(Object* message, Object* context);

        static void LogWarning(const char* message);
        static void LogWarning(Object* message);

        static void LogWarning(const char* message, Object* context);
        static void LogWarning(Object* message, Object* context);

    };

}