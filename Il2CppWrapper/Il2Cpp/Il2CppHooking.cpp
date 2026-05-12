#include "Il2CppHooking.h"

bool Il2CppWrapper::Hooking::UnhookMethod(Method* method)
{
    
    if (!method) return false; // se mudar retorno
    void* orig_ptr = method->GetNativePointer();

    return callbacks.HookApi->Destroy(orig_ptr);

}



bool Il2CppWrapper::Hooking::UnhookMethodByName(Class* klass, const char* methodName, int paramCount)
{
    if (klass == nullptr) return false;
    auto method = (Method*)klass->GetMethodFromName(methodName, paramCount);
    return UnhookMethod(method);
}

bool Il2CppWrapper::Hooking::UnityHooks::Animation::UnhookOnAnimatorIK(Class* klass)
{
    return UnhookMethodByName(klass, "OnAnimatorIK", 1);
}

bool Il2CppWrapper::Hooking::UnityHooks::Animation::UnhookOnAnimatorMove(Class* klass)
{
    return UnhookMethodByName(klass, "OnAnimatorMove", 0);
}

bool Il2CppWrapper::Hooking::UnityHooks::Rendering::UnhookOnRenderObject(Class* klass)
{
    return UnhookMethodByName(klass, "OnRenderObject", 0);
}

bool Il2CppWrapper::Hooking::UnityHooks::Rendering::UnhookOnBecameVisible(Class* klass)
{
    return UnhookMethodByName(klass, "OnBecameVisible", 0);
}

bool Il2CppWrapper::Hooking::UnityHooks::Rendering::UnhookOnBecameInvisible(Class* klass)
{
    return UnhookMethodByName(klass, "OnBecameInvisible", 0);
}

bool Il2CppWrapper::Hooking::UnityHooks::Rendering::UnhookOnPreRender(Class* klass)
{
    return UnhookMethodByName(klass, "OnPreRender", 0);
}


bool Il2CppWrapper::Hooking::UnityHooks::Rendering::UnhookOnPostRender(Class* klass)
{
    return UnhookMethodByName(klass, "OnPostRender", 0);
}

bool Il2CppWrapper::Hooking::UnityHooks::Lifecycle::UnhookUpdate(Class* klass)
{
    return UnhookMethodByName(klass, "Update", 0);
}

bool Il2CppWrapper::Hooking::UnityHooks::Lifecycle::UnhookAwake(Class* klass)
{
    return UnhookMethodByName(klass, "Awake", 0);
}

bool Il2CppWrapper::Hooking::UnityHooks::Lifecycle::UnhookOnEnable(Class* klass)
{
    return UnhookMethodByName(klass, "OnEnable", 0);
}

bool Il2CppWrapper::Hooking::UnityHooks::Lifecycle::UnhookStart(Class* klass)
{
    return UnhookMethodByName(klass, "Start", 0);
}

bool Il2CppWrapper::Hooking::UnityHooks::Lifecycle::UnhookLateUpdate(Class* klass)
{
    return UnhookMethodByName(klass, "LateUpdate", 0);
}

bool Il2CppWrapper::Hooking::UnityHooks::Lifecycle::UnhookFixedUpdate(Class* klass)
{
    return UnhookMethodByName(klass, "FixedUpdate", 0);
}

bool Il2CppWrapper::Hooking::UnityHooks::Lifecycle::UnhookOnDisable(Class* klass)
{
    return UnhookMethodByName(klass, "OnDisable", 0);
}

bool Il2CppWrapper::Hooking::UnityHooks::Lifecycle::UnhookOnDestroy(Class* klass)
{
    return UnhookMethodByName(klass, "OnDestroy", 0);
}

bool Il2CppWrapper::Hooking::UnityHooks::Physics::UnhookOnTriggerEnter(Class* klass)
{
    return UnhookMethodByName(klass, "OnTriggerEnter", 1);
}

bool Il2CppWrapper::Hooking::UnityHooks::Physics::UnhookOnTriggerStay(Class* klass)
{
    return UnhookMethodByName(klass, "OnTriggerStay", 1);
}

bool Il2CppWrapper::Hooking::UnityHooks::Physics::UnhookOnTriggerExit(Class* klass)
{
    return UnhookMethodByName(klass, "OnTriggerExit", 1);
}

bool Il2CppWrapper::Hooking::UnityHooks::Physics::UnhookOnCollisionEnter(Class* klass)
{
    return UnhookMethodByName(klass, "OnCollisionEnter", 1);
}

bool Il2CppWrapper::Hooking::UnityHooks::Physics::UnhookOnCollisionStay(Class* klass)
{
    return UnhookMethodByName(klass, "OnCollisionStay", 1);
}

bool Il2CppWrapper::Hooking::UnityHooks::Physics::UnhookOnCollisionExit(Class* klass)
{
    return UnhookMethodByName(klass, "OnCollisionExit", 1);
}

bool Il2CppWrapper::Hooking::UnityHooks::Physics::UnhookOnControllerColliderHit(Class* klass)
{
    return UnhookMethodByName(klass, "OnControllerColliderHit", 1);
}
