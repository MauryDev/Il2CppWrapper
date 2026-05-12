#pragma once
#include "../Il2CppWrapper.h"
namespace Il2CppWrapper::Unity {
	struct Vector3: Struct {

    public:
        float& x();
        float& y();
        float& z();

        


        static Vector3* Zero();

        static Vector3* One();

        static Vector3* Forward();

        static Vector3* Back();

        static Vector3* Up();

        static Vector3* Down();

        static Vector3* Left();

        static Vector3* Right();

        static Vector3* Lerp(Vector3* a, Vector3* b, float t);

        static Vector3* Slerp(Vector3* a, Vector3* b, float t);

        static float Distance(Vector3* a, Vector3* b);

        static float Dot(Vector3* a, Vector3* b);

        static Vector3* Cross(Vector3* a, Vector3* b);

        static float Magnitude(Vector3* v);

        static float SqrMagnitude(Vector3* v);

        static Vector3* Normalize(Vector3* v);

        static Vector3* ClampMagnitude(Vector3* v, float max);

        static Vector3* Add(Vector3* a, Vector3* b);

        static Vector3* Subtract(Vector3* a, Vector3* b);

        static Vector3* Multiply(Vector3* v, float scalar);

        static Vector3* Divide(Vector3* v, float scalar);
	};
    
}