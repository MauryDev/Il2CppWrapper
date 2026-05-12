#include "FieldInfo.h"

void Il2CppWrapper::Metadata::to_json(nlohmann::json& j, const FieldInfo& info)
{
	j = nlohmann::json{ {"name", info.name} };

}

void Il2CppWrapper::Metadata::from_json(const nlohmann::json& j, FieldInfo& info)
{
	j.at("name").get_to(info.name);
}

void Il2CppWrapper::Metadata::FieldInfo::FromField(Field* field)
{
	this->name = field->GetName();
}