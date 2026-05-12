#pragma once
#include "Quaternion.h"
#include "Vector3.h"
namespace Il2CppWrapper::Unity {

    class UnityHelpers {
    public:
        
      
        static Object* GetComponent(Object* gameObject, Type* type);

        static Object* GetComponentInChildren(Object* gameObject, Type* type, bool includeInactive = false);

        static Object* GetComponentInParent(Object* gameObject, Type* type, bool includeInactive = false);

        static Object* FindGameObject(Object* gameObject, const char* name);
        static void SetPosition(Object* transform, Vector3* position);
        static Vector3* GetPosition(Object* transform);

        static void SetLocalPosition(Object* transform, Vector3* position);
        static Vector3* GetLocalPosition(Object* transform);

        static void SetRotation(Object* transform, Quaternion* rotation);
        static Quaternion* GetRotation(Object* transform);

        static void SetLocalRotation(Object* transform, Quaternion* rotation);
        static Quaternion* GetLocalRotation(Object* transform);

        static void SetScale(Object* transform, Vector3* scale);
        static Vector3* GetScale(Object* transform);

    };

}