#pragma once
#include "Il2CppWrapper.h"
#include <functional>
#include <vector>
#include <mutex>
#include <unordered_map>
#include <string>
#include <ffi.h>
#include <coroutine>

namespace Il2CppWrapper {

    struct Coroutine {
        struct promise_type {

            Coroutine get_return_object();
            std::suspend_always initial_suspend();
            std::suspend_always final_suspend() noexcept;
            void unhandled_exception();
            void return_void();

            // Support for co_yield
            std::suspend_always yield_value(int);
            std::suspend_always yield_value();
        };

        std::coroutine_handle<promise_type> handle;
        Coroutine() : handle() {}
        Coroutine(std::coroutine_handle<promise_type> h) : handle(h) {}
        ~Coroutine();
        // Move-only type
        Coroutine(const Coroutine&) = delete;
        Coroutine& operator=(const Coroutine&) = delete;
        Coroutine(Coroutine&& other) noexcept : handle(other.handle) { other.handle = nullptr; }
        Coroutine& operator=(Coroutine&& other) noexcept;

        bool resume();
    };

    class Il2CppComponentHook {
    public:
        using ExecuteCallback = std::function<void()>;

        Il2CppComponentHook() = default;
        Il2CppComponentHook(Method* methodToHook);
        Il2CppComponentHook(Object* objectComponent);
        Il2CppComponentHook(Class* classComponent);

        Il2CppComponentHook(const Il2CppComponentHook&) = delete;
        Il2CppComponentHook& operator=(const Il2CppComponentHook&) = delete;
        ~Il2CppComponentHook();

        void AddCallback(const std::string& id, ExecuteCallback callback);
        void AddSingleFrameCallback(ExecuteCallback callback);
        void AddCoroutine(const std::string& id, Coroutine coro);
        void RemoveCallback(const std::string& id);
        void RemoveCoroutine(const std::string& id);
        void Update();
    private:
        void* SetupHook();

        void CleanupHook();

        std::unordered_map<std::string, ExecuteCallback> _activeExecuteCallbacks;
        std::unordered_map<std::string, Coroutine> _activeCoros;

        std::vector<ExecuteCallback> _pendingSingleFrame;
        std::unordered_map<std::string, ExecuteCallback> _pendingExecuteCallbacks;
        std::unordered_map<std::string, Coroutine> _pendingCoros;
        std::vector<std::string> _pendingRemovals;

        std::mutex _mutex;

        static void HookBinding(ffi_cif* cif, void* ret, void** args, void* user_data);

        Method* methodHook = nullptr;
        void* oldFunction = nullptr;
        ffi_closure* _closure = nullptr;
        ffi_cif* _cif = nullptr;
        ffi_type** _args = nullptr;
        void* _boundFunctionPtr = nullptr;

    };
}