#pragma once
#include "Il2CppWrapper.h"
#include <memory>
#include <type_traits>

namespace Il2CppWrapper::Hooking {



    template<typename T>
    concept Hookable =
        std::is_same_v<std::remove_cvref_t<T>, void*> ||
        (std::is_pointer_v<T> &&
            std::is_function_v<std::remove_pointer_t<T>>) ||
        requires(T t) { +t; };

    template<Hookable T>
    void* ToVoidPtr(T fn) {
        using U = std::remove_cvref_t<T>;

        if constexpr (std::is_same_v<U, void*>) {
            return fn;
        }
        else if constexpr (std::is_pointer_v<U>) {
            return reinterpret_cast<void*>(fn);
        }
        else {
            // lambda sem captura → vira ponteiro de função
            return reinterpret_cast<void*>(+fn);
        }
    }


    template<Hookable TOriginal, Hookable TReplacement>

    bool Hook(TOriginal original, TReplacement replacement, void** out_original) {
        auto orig_ptr = ToVoidPtr(original);
        void* replace_ptr = ToVoidPtr(replacement);


        return callbacks.HookApi->Create(orig_ptr, replace_ptr, out_original);
    }

    template<Hookable TOriginal>
    bool Unhook(TOriginal original) {
        void* orig_ptr = ToVoidPtr(original);


        return callbacks.HookApi->Destroy(orig_ptr);
    }

    template<Hookable TReplacement>
    bool HookMethod(Method* method, TReplacement replacement, void** out_original)
    {
        if (!method) return false;
        void* orig_ptr = method->GetNativePointer();
        void* replace_ptr = ToVoidPtr(replacement);

        return callbacks.HookApi->Create(orig_ptr, replace_ptr, out_original);

    }

    template<Hookable TReplacement>
    bool HookMethodByName(Class* klass, const char* methodName, int paramCount, TReplacement replacement, void** out_original)
    {
        if (!klass) return false;
        auto method = (Method*)klass->GetMethodFromName(methodName, paramCount);
        return HookMethod(method, replacement, out_original);
    }


    bool UnhookMethod(Method* method);
    bool UnhookMethodByName(Class* klass, const char* methodName, int paramCount);

    // ========== Unity Lifecycle Hooks ==========
    namespace UnityHooks {

        // ----- Lifecycle Methods -----
        namespace Lifecycle {
            template<Hookable T>
            bool HookUpdate(Class* klass, T replacement, void** out_original) {
                return HookMethodByName(klass, "Update", 0, replacement, out_original);
            }
            bool UnhookUpdate(Class* klass);

            template<Hookable T>
            bool HookAwake(Class* klass, T replacement, void** out_original) {
                return HookMethodByName(klass, "Awake", 0, replacement, out_original);
            }
            bool UnhookAwake(Class* klass);

            template<Hookable T>
            bool HookOnEnable(Class* klass, T replacement, void** out_original) {
                return HookMethodByName(klass, "OnEnable", 0, replacement, out_original);
            }
            bool UnhookOnEnable(Class* klass);

            template<Hookable T>
            bool HookStart(Class* klass, T replacement, void** out_original) {
                return HookMethodByName(klass, "Start", 0, replacement, out_original);
            }
            bool UnhookStart(Class* klass);

            template<Hookable T>
            bool HookLateUpdate(Class* klass, T replacement, void** out_original) {
                return HookMethodByName(klass, "LateUpdate", 0, replacement, out_original);
            }
            bool UnhookLateUpdate(Class* klass);

            template<Hookable T>
            bool HookFixedUpdate(Class* klass, T replacement, void** out_original) {
                return HookMethodByName(klass, "FixedUpdate", 0, replacement, out_original);
            }
            bool UnhookFixedUpdate(Class* klass);

            template<Hookable T>
            bool HookOnDisable(Class* klass, T replacement, void** out_original) {
                return HookMethodByName(klass, "OnDisable", 0, replacement, out_original);
            }
            bool UnhookOnDisable(Class* klass);

            template<Hookable T>
            bool HookOnDestroy(Class* klass, T replacement, void** out_original) {
                return HookMethodByName(klass, "OnDestroy", 0, replacement, out_original);
            }
            bool UnhookOnDestroy(Class* klass);
        }

        // ----- Physics & Collision Callbacks -----
        namespace Physics {
            template<Hookable T>
            bool HookOnTriggerEnter(Class* klass, T replacement, void** out_original) {
                return HookMethodByName(klass, "OnTriggerEnter", 1, replacement, out_original);
            }
            bool UnhookOnTriggerEnter(Class* klass);

            template<Hookable T>
            bool HookOnTriggerStay(Class* klass, T replacement, void** out_original) {
                return HookMethodByName(klass, "OnTriggerStay", 1, replacement, out_original);
            }
            bool UnhookOnTriggerStay(Class* klass);

            template<Hookable T>
            bool HookOnTriggerExit(Class* klass, T replacement, void** out_original) {
                return HookMethodByName(klass, "OnTriggerExit", 1, replacement, out_original);
            }
            bool UnhookOnTriggerExit(Class* klass);

            template<Hookable T>
            bool HookOnCollisionEnter(Class* klass, T replacement, void** out_original) {
                return HookMethodByName(klass, "OnCollisionEnter", 1, replacement, out_original);
            }
            bool UnhookOnCollisionEnter(Class* klass);

            template<Hookable T>
            bool HookOnCollisionStay(Class* klass, T replacement, void** out_original) {
                return HookMethodByName(klass, "OnCollisionStay", 1, replacement, out_original);
            }
            bool UnhookOnCollisionStay(Class* klass);

            template<Hookable T>
            bool HookOnCollisionExit(Class* klass, T replacement, void** out_original) {
                return HookMethodByName(klass, "OnCollisionExit", 1, replacement, out_original);
            }
            bool UnhookOnCollisionExit(Class* klass);

            template<Hookable T>
            bool HookOnControllerColliderHit(Class* klass, T replacement, void** out_original) {
                return HookMethodByName(klass, "OnControllerColliderHit", 1, replacement, out_original);
            }
            bool UnhookOnControllerColliderHit(Class* klass);
        }

        // ----- Rendering Callbacks -----
        namespace Rendering {
            template<Hookable T>
            bool HookOnRenderObject(Class* klass, T replacement, void** out_original) {
                return HookMethodByName(klass, "OnRenderObject", 0, replacement, out_original);
            }
            bool UnhookOnRenderObject(Class* klass);

            template<Hookable T>
            bool HookOnBecameVisible(Class* klass, T replacement, void** out_original) {
                return HookMethodByName(klass, "OnBecameVisible", 0, replacement, out_original);
            }
            bool UnhookOnBecameVisible(Class* klass);

            template<Hookable T>
            bool HookOnBecameInvisible(Class* klass, T replacement, void** out_original) {
                return HookMethodByName(klass, "OnBecameInvisible", 0, replacement, out_original);
            }
            bool UnhookOnBecameInvisible(Class* klass);

            template<Hookable T>
            bool HookOnPreRender(Class* klass, T replacement, void** out_original) {
                return HookMethodByName(klass, "OnPreRender", 0, replacement, out_original);
            }
            bool UnhookOnPreRender(Class* klass);
            template<Hookable T>
            bool HookOnPostRender(Class* klass, T replacement, void** out_original) {
                return HookMethodByName(klass, "OnPostRender", 0, replacement, out_original);
            }
            bool UnhookOnPostRender(Class* klass);
        }

        // ----- Animation Callbacks -----
        namespace Animation {
            template<Hookable T>
            bool HookOnAnimatorIK(Class* klass, T replacement, void** out_original) {
                return HookMethodByName(klass, "OnAnimatorIK", 1, replacement, out_original);
            }
            bool UnhookOnAnimatorIK(Class* klass);

            template<Hookable T>
            bool HookOnAnimatorMove(Class* klass, T replacement, void** out_original) {
                return HookMethodByName(klass, "OnAnimatorMove", 0, replacement, out_original);
            }
            bool UnhookOnAnimatorMove(Class* klass);
        }
    }
}