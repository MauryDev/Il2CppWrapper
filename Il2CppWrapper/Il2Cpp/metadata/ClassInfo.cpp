#include "ClassInfo.h"

void Il2CppWrapper::Metadata::to_json(nlohmann::json& j, const ClassInfo& info)
{
	j = nlohmann::json{
		{"name", info.name},
		{"namespaceName", info.namespaceName},
		{"assemblyName", info.assemblyName},
		{"fieldsInfo", info.fieldsInfo},
		{"methodsInfo", info.methodsInfo}
	};
}

void Il2CppWrapper::Metadata::from_json(const nlohmann::json& j, ClassInfo& info)
{
	j.at("name").get_to(info.name);
	j.at("namespaceName").get_to(info.namespaceName);
	j.at("assemblyName").get_to(info.assemblyName);
	j.at("fieldsInfo").get_to(info.fieldsInfo);
	j.at("methodsInfo").get_to(info.methodsInfo);
}

std::string Il2CppWrapper::Metadata::ClassInfo::GetFullName(Class* klass)
{
	if (!klass) return "";

	std::vector<std::string_view> hierarchy;
	Class* current = klass;

	while (current) {
		hierarchy.emplace_back(current->GetName());
		current = current->GetDeclaringType();
	}

	// Otimização: calcular tamanho total para reservar uma vez só
	size_t total_length = hierarchy.size() > 0 ? hierarchy.size() - 1 : 0; // para as '/'
	for (auto sv : hierarchy) total_length += sv.length();

	std::string result;
	result.reserve(total_length);

	for (auto it = hierarchy.rbegin(); it != hierarchy.rend(); ++it) {
		result.append(*it);
		if (std::next(it) != hierarchy.rend()) result.append("/");
	}

	return result;
}

void Il2CppWrapper::Metadata::ClassInfo::FromClass(Class* klass)
{
	name = GetFullName(klass);
	namespaceName = klass->GetNamespace();
	assemblyName = klass->GetImage()->GetName();
	// Fields
	klass->ForEachField([&](Field* field) {
		Metadata::FieldInfo fInfo;
		fInfo.FromField(field);
		this->fieldsInfo.push_back(fInfo);
		});

	// Methods

	klass->ForEachMethod([&](Method* method) {
		Metadata::MethodInfo m;
		m.FromMethod(method);
		this->methodsInfo.push_back(m);
		});
}
