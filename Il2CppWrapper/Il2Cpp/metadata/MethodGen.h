#pragma once
#include "../Il2CppWrapper.h"
#include <utility>

namespace Il2CppWrapper::Metadata {
	template <bool isStatic, bool IsVirtual>
	struct MethodGen : Method {

		/**
		 * @brief Call for Static methods.
		 * Does not require an object instance.
		 */
		template <typename TRet = Object*, typename... Args>
		TRet Call(Args&&... args) requires (isStatic) {
			static_assert(isStatic, "MethodGen<isStatic=true>: This method is not static. Use the overload that accepts Object*.");

			// For static methods, we pass nullptr as the instance
			return Method::Call<Pointer*, TRet, Args...>(nullptr, std::forward<Args>(args)...);
		}

		/**
		 * @brief Call for Instance methods.
		 * Requires an object instance. Resolves virtual methods if IsVirtual is true.
		 */
		template <typename TObj = Pointer*,typename TRet = Object*, typename... Args>
		TRet Call(TObj obj, Args&&... args) requires (!isStatic)
		{
			static_assert(!isStatic, "MethodGen<isStatic=false>: This method is static. Use the overload that does not accept Object*.");

			if (obj == nullptr) {
				throw std::runtime_error("Null object instance provided for instance method call.");
			}

			if constexpr (IsVirtual) {
				// Resolve the virtual implementation for the specific instance
				Method* virtualMethod = obj->GetVirtualMethod(this);
				auto klass = virtualMethod->GetDeclaringType();
				if constexpr (std::is_base_of_v<Object, std::remove_pointer_t<TObj>>)
				{
					if (klass->IsValueType())
					{
						return virtualMethod->Call<Struct*, TRet, Args...>(obj->Unbox(), std::forward<Args>(args)...);

					}
				}
				if constexpr (std::is_base_of_v<Struct, std::remove_pointer_t<TObj>>) {
					if (!klass->IsValueType()) {
						return virtualMethod->Call<Object*, TRet, Args...>(obj->Box(), std::forward<Args>(args)...);
					}

				}
					
				return virtualMethod->Call<TObj, TRet, Args...>(std::forward<TObj>(obj), std::forward<Args>(args)...);
			}
			else {
				// Direct call to the implementation
				return Method::Call<TObj, TRet, Args...>(std::forward<TObj>(obj), std::forward<Args>(args)...);
			}
		}

		/**
		 * @brief Syntactic sugar for Static Call.
		 */
		template <typename TRet = Object*, typename... Args>
		TRet operator()(Args&&... args) requires (isStatic) {
			return Call<TRet, Args...>(std::forward<Args>(args)...);
		}

		/**
		 * @brief Syntactic sugar for Instance Call.
		 */
		template <typename TObj = Pointer*,typename TRet = Object*, typename... Args>
		TRet operator()(TObj obj, Args&&... args) requires (!isStatic)
		{
			return Call<TObj,TRet,Args...>(std::forward<TObj>(obj), std::forward<Args>(args)...);
		}



	};
}