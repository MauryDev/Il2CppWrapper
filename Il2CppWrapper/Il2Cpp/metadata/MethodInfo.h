#pragma once
#include <string>
#include <vector>
#include <nlohmann/json.hpp>
#include "../Il2CppWrapper.h"


namespace Il2CppWrapper::Metadata {


	struct MethodInfo {
		std::string name;
		std::vector<std::string> typesName;
		friend void to_json(nlohmann::json& j, const MethodInfo& info);

		friend void from_json(const nlohmann::json& j, MethodInfo& info);

		void FromMethod(Method* method);
	};


}