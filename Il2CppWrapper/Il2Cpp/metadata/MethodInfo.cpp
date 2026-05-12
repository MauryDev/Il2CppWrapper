#include "MethodInfo.h"

void Il2CppWrapper::Metadata::to_json(nlohmann::json& j, const MethodInfo& info)
{
	j = nlohmann::json{
		{"name", info.name},
		{"typesName", info.typesName}
	};
}

void Il2CppWrapper::Metadata::from_json(const nlohmann::json& j, MethodInfo& info)
{
	j.at("name").get_to(info.name);
	j.at("typesName").get_to(info.typesName);
}

void Il2CppWrapper::Metadata::MethodInfo::FromMethod(Method* method)
{
	this->name = method->GetName();

	method->ForEachParameter([&](const ParameterInfo& param) {
		this->typesName.push_back(param.type->GetName());
		});
}
