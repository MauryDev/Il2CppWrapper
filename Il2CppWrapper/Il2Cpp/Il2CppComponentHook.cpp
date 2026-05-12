#include "Il2CppComponentHook.h"
#include "Il2CppHooking.h"


namespace Il2CppWrapper
{
    Il2CppComponentHook::Il2CppComponentHook(Method* methodToHook)
    {
        if (!methodToHook)
            throw std::invalid_argument("methodToHook is null");
        this->methodHook = methodToHook;

        void* hook = SetupHook();

        if (!hook)
            throw std::runtime_error("Failed to create hook");

        Il2CppWrapper::Hooking::HookMethod(this->methodHook, hook, &oldFunction);
    }


    Il2CppComponentHook::Il2CppComponentHook(Object* objectComponent) : Il2CppComponentHook(objectComponent->GetClass())
    {}

    Il2CppComponentHook::Il2CppComponentHook(Class* classComponent) : Il2CppComponentHook(classComponent->GetMethodFromName("Update", 0))
    {}



    Il2CppComponentHook::~Il2CppComponentHook()
    {
        CleanupHook();
    }

    void Il2CppComponentHook::AddCallback(const std::string& id, ExecuteCallback callback)
    {
        std::lock_guard<std::mutex> lock(_mutex);
        _pendingExecuteCallbacks[id] = std::move(callback);
    }

    void Il2CppComponentHook::AddSingleFrameCallback(ExecuteCallback callback)
    {
        std::lock_guard<std::mutex> lock(_mutex);

        this->_pendingSingleFrame.push_back(callback);
    }
    void Il2CppComponentHook::AddCoroutine(const std::string& id, Coroutine coro)
    {
        std::lock_guard<std::mutex> lock(_mutex);
        _pendingCoros[id] = std::move(coro);
    }

    void Il2CppComponentHook::RemoveCallback(const std::string& id)
    {
        std::lock_guard<std::mutex> lock(_mutex);
        _pendingRemovals.push_back(id);
    }

    void Il2CppComponentHook::RemoveCoroutine(const std::string& id)
    {
        std::lock_guard<std::mutex> lock(_mutex);
        _pendingRemovals.push_back(id);
    }

    void Il2CppComponentHook::Update()
    {
        std::vector<ExecuteCallback> currentSingleFrame;

        {
            std::lock_guard<std::mutex> lock(_mutex);

            for (const auto& id : _pendingRemovals) {
                _activeExecuteCallbacks.erase(id);
                _activeCoros.erase(id);
            }
            _pendingRemovals.clear();

            for (auto& entry : _pendingExecuteCallbacks) {
                _activeExecuteCallbacks[entry.first] = std::move(entry.second);
            }
            _pendingExecuteCallbacks.clear();

            for (auto& entry : _pendingCoros) {
                _activeCoros[entry.first] = std::move(entry.second);
            }
            _pendingCoros.clear();

            currentSingleFrame.swap(_pendingSingleFrame);
        }

        for (auto& callback : currentSingleFrame)
        {
            if (callback) callback();
        }

        for (auto& entry : _activeExecuteCallbacks) {
            if (entry.second) {
                entry.second();
            }
        }

        for (auto it = _activeCoros.begin(); it != _activeCoros.end(); ) {
            if (!it->second.resume()) {
                it = _activeCoros.erase(it);
            }
            else {
                ++it;
            }
        }
    }

    void* Il2CppComponentHook::SetupHook()
    {
        this->_cif = new ffi_cif();
        this->_args = new ffi_type * [1];
        this->_args[0] = &ffi_type_pointer;

        if (ffi_prep_cif(this->_cif, FFI_DEFAULT_ABI, 1, &ffi_type_void, this->_args) == FFI_OK) {
            this->_closure = (ffi_closure*)ffi_closure_alloc(sizeof(ffi_closure), &this->_boundFunctionPtr);

            if (this->_closure) {
                if (ffi_prep_closure_loc(this->_closure, this->_cif, HookBinding, this, this->_boundFunctionPtr) == FFI_OK) {
                    return this->_boundFunctionPtr;
                }
            }
        }
        return nullptr;
    }

    void Il2CppComponentHook::CleanupHook()
    {
        if (this->methodHook) {
            Il2CppWrapper::Hooking::UnhookMethod(this->methodHook);
        }

        if (_closure) {
            ffi_closure_free(_closure);
            _closure = nullptr;
        }

        if (_cif) {
            delete _cif;
            _cif = nullptr;
        }

        if (_args) {
            delete[] _args;
            _args = nullptr;
        }
    }

    void Il2CppComponentHook::HookBinding(ffi_cif* cif, void* ret, void** args, void* user_data)
    {
        auto* self = static_cast<Il2CppWrapper::Il2CppComponentHook*>(user_data);
        self->Update();

        if (self->oldFunction) {
            void* unityThis = *(void**)args[0];
            ((void(*)(void*))self->oldFunction)(unityThis);
        }
    }

    Coroutine Il2CppWrapper::Coroutine::promise_type::get_return_object()
    {
        return Coroutine{ std::coroutine_handle<promise_type>::from_promise(*this) };
    }
    std::suspend_always Coroutine::promise_type::initial_suspend()
    {
        return std::suspend_always();
    }
    std::suspend_always Coroutine::promise_type::final_suspend() noexcept
    {
        return {};
    }
    void Coroutine::promise_type::unhandled_exception()
    {
        std::terminate();
    }
    void Coroutine::promise_type::return_void()
    {}
    std::suspend_always Coroutine::promise_type::yield_value(int)
    {
        return {};
    }
    std::suspend_always Coroutine::promise_type::yield_value()
    {
        return {};
    }
    Coroutine::~Coroutine()
    {
        if (handle) handle.destroy();
    }

    Coroutine& Coroutine::operator=(Coroutine&& other) noexcept
    {
        if (this != &other) {
            if (handle) handle.destroy();
            handle = other.handle;
            other.handle = nullptr;
        }
        return *this;
    }

    bool Coroutine::resume()
    {
        if (!handle || handle.done()) return false;
        handle.resume();
        return !handle.done();
    }

}


