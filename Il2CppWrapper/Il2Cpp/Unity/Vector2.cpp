#include "Vector2.h"
#include "../UnityInterop/UnityEngine.CoreModule.dll/UnityEngine/Vector2.h"
using namespace Il2CppWrapper::UnityInterop;
namespace Il2CppWrapper::Unity
{
    float& Vector2::x()
    {
        return field<float>(UnityEngine::Vector2::f_x->GetOffset());
    }
    float& Vector2::y() {
        return field<float>(UnityEngine::Vector2::f_y->GetOffset());
    }
    void Vector2::Set(float x, float y) {
        UnityEngine::Vector2::m3_Set->Call(this, x, y);
    }

    void Vector2::Normalize() {
        UnityEngine::Vector2::m7_Normalize->Call(this);
    }

    Vector2* Vector2::get_normalized() {
        return UnityEngine::Vector2::m8_get_normalized->Call(this)
            ->Unbox<Vector2*>();
    }
    Vector2* Vector2::Lerp(Vector2* a, Vector2* b, float t) {
        return UnityEngine::Vector2::m4_Lerp->Call(a, b, t)
            ->Unbox<Vector2*>();
    }

    float Vector2::Dot(Vector2* a, Vector2* b) {
        return UnityEngine::Vector2::m15_Dot->Call(a, b)
            ->Unbox<float>();
    }

    float Vector2::Distance(Vector2* a, Vector2* b) {
        return UnityEngine::Vector2::m19_Distance->Call(a, b)
            ->Unbox<float>();
    }

    Vector2* Vector2::Min(Vector2* a, Vector2* b) {
        return UnityEngine::Vector2::m21_Min->Call(a, b)
            ->Unbox<Vector2*>();
    }

    Vector2* Vector2::Max(Vector2* a, Vector2* b) {
        return UnityEngine::Vector2::m22_Max->Call(a, b)
            ->Unbox<Vector2*>();

    }
    Vector2* Vector2::zero() {
        return UnityEngine::Vector2::m35_get_zero->Call()
            ->Unbox<Vector2*>();
    }

    Vector2* Vector2::one() {
		return UnityEngine::Vector2::m36_get_one->Call()
            ->Unbox<Vector2*>();
    }

    Vector2* Vector2::up() {
        return UnityEngine::Vector2::m37_get_up->Call()
            ->Unbox<Vector2*>();
    }

    Vector2* Vector2::down() {
        return UnityEngine::Vector2::m38_get_down->Call()
            ->Unbox<Vector2*>();
    }

    Vector2* Vector2::left() {
        return UnityEngine::Vector2::m39_get_left->Call()
            ->Unbox<Vector2*>();
    }

    Vector2* Vector2::right() {
        return UnityEngine::Vector2::m40_get_right->Call()
            ->Unbox<Vector2*>();
    }
}

