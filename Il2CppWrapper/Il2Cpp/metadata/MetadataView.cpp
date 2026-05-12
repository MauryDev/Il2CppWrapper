#include "MetadataView.h"
#include <string_view>
#include <vector>
#include <numeric>
#include <nlohmann/json.hpp>

namespace Il2CppWrapper::Metadata {

	void MetadataView::readFromMemory(std::span<std::byte> values)
	{

		auto j = nlohmann::json::from_msgpack(values);
		j.get_to(klasses);
	}

	void MetadataView::ReadFromIl2Cpp()
	{
		klasses.clear();

		Domain* domain = Domain::GetCurrent();
		if (!domain) return;

		auto assemblies = domain->GetAssembliesList();
		for (auto assembly : assemblies) {
			auto image = (Image*)assembly->GetImage();
			if (!image) continue;

			auto assemblyName = image->GetName();
			auto classes = image->GetClasses();

			for (auto klass : classes) {
				Metadata::ClassInfo info;


				ExtractClassMetadata(klass, image, info);

				klasses.push_back(info);
			}
		}
	}

	void MetadataView::readFromFile(const std::string& path)
	{
		std::ifstream file(path);
		if (!file.is_open()) return;

		nlohmann::json j = nlohmann::json::from_msgpack(file);
		
		j.get_to(klasses);
	}

	std::vector<std::uint8_t> MetadataView::generateMemory() const
	{
		nlohmann::json j = klasses;

		return nlohmann::json::to_msgpack(klasses);
	}

	void MetadataView::generateFile(const std::string& path) const
	{
		auto message = generateMemory();
		std::ofstream file(path);
		file.write((char*)message.data(), message.size());
	}

	void MetadataView::ExtractClassMetadata(Class* klass, Image* image, Metadata::ClassInfo& info)
	{
		info.FromClass(klass);
		
	}


	std::string MetadataView::GetFullName(Class* klass) {
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
}