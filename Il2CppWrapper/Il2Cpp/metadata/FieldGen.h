#pragma once
#include "../Il2CppWrapper.h"

namespace Il2CppWrapper::Metadata {
	template <bool isStatic>
	struct FieldGen;

	template <>
	struct FieldGen<true>: Field {

		template <typename T>
		T GetValue() {
			return GetStaticValue<T>();
		}

		template <typename T>
		void SetValue(T&& value) {
			SetStaticValue<T>(std::forward<T>(value));
		}
	};

	template <>
	struct FieldGen<false>: Field{

		template <typename T>
		T GetValue(Object* obj) {
			return Field::GetValue<T>(obj);
		}

		template <typename T>
		void SetValue(Object* obj, T&& value) {
			Field::SetValue<T>(obj, std::forward<T>(value));
		}
	};
}