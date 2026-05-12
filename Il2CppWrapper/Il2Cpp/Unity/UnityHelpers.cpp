#include "UnityHelpers.h"
#include "../UnityInterop/UnityEngine.CoreModule.dll/UnityEngine/GameObject.h"
#include "../UnityInterop/UnityEngine.CoreModule.dll/UnityEngine/Transform.h"

using namespace Il2CppWrapper::UnityInterop;
namespace Il2CppWrapper::Unity
{
    Object* UnityHelpers::GetComponent(Object* gameObject, Type* type)
    {
        if (!gameObject) return nullptr;
        return UnityEngine::GameObject::m1_GetComponent->Call(gameObject, type->getObject());
    }
    Object* UnityHelpers::GetComponentInChildren(Object* gameObject, Type* type, bool includeInactive)
    {
        if (!gameObject) return nullptr;
        return UnityEngine::GameObject::m3_GetComponentInChildren->Call(gameObject, type->getObject(), includeInactive);
    }
    Object* UnityHelpers::GetComponentInParent(Object* gameObject, Type* type, bool includeInactive)
    {
        if (!gameObject) return nullptr;

        return UnityEngine::GameObject::m6_GetComponentInParent->Call(gameObject, type->getObject(), includeInactive);
    }
    Object* UnityHelpers::FindGameObject(Object* gameObject, const char* name)
    {
		return UnityEngine::GameObject::m38_Find->Call(gameObject, String::New(name));
    }
    void UnityHelpers::SetPosition(Object* transform, Vector3* position)
    {
		UnityEngine::Transform::m2_set_position->Call(transform, position);
    }
    Vector3* UnityHelpers::GetPosition(Object* transform)
    {
        return UnityEngine::Transform::m1_get_position->Call(transform)
            ->Unbox<Vector3*>();
    }
    void UnityHelpers::SetLocalPosition(Object* transform, Vector3* position)
    {
		UnityEngine::Transform::m4_set_localPosition->Call(transform, position);
    }
    Vector3* UnityHelpers::GetLocalPosition(Object * transform)
    {
        return UnityEngine::Transform::m4_set_localPosition->Call(transform)
            ->Unbox<Vector3*>();
    }
    void UnityHelpers::SetRotation(Object* transform, Quaternion* rotation)
    {
        UnityEngine::Transform::m15_set_rotation->Call(transform, rotation);

    }
    Quaternion* UnityHelpers::GetRotation(Object* transform)
    {
        return UnityEngine::Transform::m14_get_rotation->Call(transform)
            ->Unbox<Quaternion*>();
    }
    void UnityHelpers::SetLocalRotation(Object* transform, Quaternion* rotation)
    {
        UnityEngine::Transform::m17_set_localRotation->Call(transform, rotation);

    }
    Quaternion* UnityHelpers::GetLocalRotation(Object * transform)
    {
        return UnityEngine::Transform::m16_get_localRotation->Call(transform)
            ->Unbox<Quaternion*>();
    }
    void UnityHelpers::SetScale(Object* transform, Vector3* scale)
    {
        UnityEngine::Transform::m19_set_localScale->Call(transform, scale);

    }
    Vector3* UnityHelpers::GetScale(Object* transform)
    {
        return UnityEngine::Transform::m18_get_localScale->Call(transform)
            ->Unbox<Vector3*>();
    }
}
