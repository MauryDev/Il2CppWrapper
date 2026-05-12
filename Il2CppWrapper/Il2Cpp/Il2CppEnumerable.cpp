#include "Il2CppEnumerable.h"
#include "Il2CppCoreTypes.h"
#include "CoreLib/mscorlib.dll/System.Collections/IEnumerator.h"
#include "CoreLib/mscorlib.dll/System.Collections/IEnumerable.h"
namespace Il2CppWrapper {

    // ============ IEnumerator Implementation ============

    Object* IEnumerator::GetCurrent() {
        if (!this->isValid()) return nullptr;


        return CoreInterop::System::Collections::IEnumerator::m1_get_Current->Call(this);
        
    }

    bool IEnumerator::MoveNext() {
        if (!this->isValid()) return false;


		auto result = CoreInterop::System::Collections::IEnumerator::m0_MoveNext->Call(this);


      

        return result->Unbox<bool>();
    }

    void IEnumerator::Reset() {
        if (!this->isValid()) return;


        CoreInterop::System::Collections::IEnumerator::m2_Reset->Call(this);

        
    }


    

    // ============ IEnumerable Implementation ============

    IEnumerator* IEnumerable::GetEnumerator() {
        if (!this->isValid()) return nullptr;

        // Chama o método GetEnumerator
		return CoreInterop::System::Collections::IEnumerable::m0_GetEnumerator
            ->Call(
                this
            )
            ->as<IEnumerator>();
    }

    IEnumerable::Iterator IEnumerable::begin()
    {
        auto enumerator = GetEnumerator();
        if (!enumerator) return Iterator(nullptr, false);
        return Iterator(enumerator, true);
    }

    IEnumerable::Iterator IEnumerable::end()
    {
        return Iterator(nullptr, false);
    }


    std::vector<Object*> IEnumerable::ToVector() {
        std::vector<Object*> result;
        auto enumerator = GetEnumerator();
        if (!enumerator) return result;

        while (enumerator->MoveNext()) {
            Object* current = enumerator->GetCurrent();
            if (current) {
                result.push_back(current);
            }
        }
        enumerator->Reset();
        return result;
    }

    uint32_t IEnumerable::Count() {
        uint32_t count = 0;
        auto enumerator = GetEnumerator();
        if (!enumerator) return 0;

        while (enumerator->MoveNext()) {
            count++;
        }
        enumerator->Reset();
        return count;
    }

    std::vector<Object*> IEnumerable::Select(std::function<Object*(Object*)> mapper) {
        std::vector<Object*> result;
        auto enumerator = GetEnumerator();
        if (!enumerator) return result;

        while (enumerator->MoveNext()) {
            Object* current = enumerator->GetCurrent();
            if (current) {
                Object* mapped = mapper(current);
                if (mapped) {
                    result.push_back(mapped);
                }
            }
        }
        enumerator->Reset();
        return result;
    }

    Object* IEnumerable::First() {
        auto enumerator = GetEnumerator();
        if (!enumerator) return nullptr;

        if (enumerator->MoveNext()) {
            Object* current = enumerator->GetCurrent();
            enumerator->Reset();
            return current;
        }
        enumerator->Reset();
        return nullptr;
    }

    Object* IEnumerable::Last() {
        Object* last = nullptr;
        auto enumerator = GetEnumerator();
        if (!enumerator) return nullptr;

        while (enumerator->MoveNext()) {
            last = enumerator->GetCurrent();
        }
        enumerator->Reset();
        return last;
    }

    IEnumerable::Iterator::Iterator(IEnumerator* enumerator, bool start) : 
        _enumerator(enumerator), _current(nullptr), _started(false)
    {
        if (start && _enumerator) {
            if (_enumerator->MoveNext()) {
                _current = _enumerator->GetCurrent();
                _started = true;
            }
        }
    }

    IEnumerable::Iterator& IEnumerable::Iterator::operator++()
    {
        if (_enumerator && _enumerator->MoveNext()) {
            _current = _enumerator->GetCurrent();
        }
        else {
            _enumerator = nullptr;
            _current = nullptr;
        }
        return *this;
    }
    IEnumerable::Iterator IEnumerable::Iterator::operator++(int)
    {
        Iterator temp = *this;
        ++(*this);
        return temp;
    }
    Object* IEnumerable::Iterator::operator*() const
    {
        return _current;
    }
    Object* IEnumerable::Iterator::operator->() const
    {
        return _current;
    }
    bool IEnumerable::Iterator::operator==(const Iterator& other) const
    {
        return _enumerator == other._enumerator && _current == other._current;
    }

    bool IEnumerable::Iterator::operator!=(const Iterator& other) const
    {
        return !(*this == other);
    }

}