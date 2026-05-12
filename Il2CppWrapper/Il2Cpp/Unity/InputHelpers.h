// Il2CppWrapper\Il2Cpp\UnityInterop\InputHelpers.h
#pragma once
#include "Vector2.h"
#include "Vector3.h"
#include "../Il2CppWrapper.h"
namespace Il2CppWrapper::Unity {

    struct InputHelpers {
    public:
        static float GetAxis(const char* axis);
        static float GetAxisRaw(const char* axis);

        static bool GetButton(const char* button);


        static bool GetButtonDown(const char* button);

        static bool GetButtonUp(const char* button);

        static bool GetKey(int keyCode);

        static bool GetKeyDown(int keyCode);

        static bool GetKeyUp(int keyCode);

        static bool GetMouseButton(int button);

        static bool GetMouseButtonDown(int button);

        static bool GetMouseButtonUp(int button);

        static Vector3* GetMousePosition();

        static Vector2* GetMouseScrollDelta();
    };

}