#pragma once
#include <string>
#include <nlohmann/json.hpp>

#include "../Il2CppWrapper.h"
namespace Il2CppWrapper::Metadata {
	struct FieldInfo {
		std::string name;
		friend void to_json(nlohmann::json& j, const FieldInfo& info);

		friend void from_json(const nlohmann::json& j, FieldInfo& info);

		void FromField(Field* field);
	};

	
}