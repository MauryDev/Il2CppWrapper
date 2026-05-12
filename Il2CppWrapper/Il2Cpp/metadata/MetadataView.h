#pragma once
#include <vector>
#include <string>
#include <fstream>
#include "ClassInfo.h"
#include "../Il2CppWrapper.h"

namespace Il2CppWrapper::Metadata {

	class MetadataView {
	public:
		std::vector<Metadata::ClassInfo> klasses;

		void readFromMemory(std::span<std::byte> values);
		/**
		 * @brief Populates the klasses vector by scanning the active IL2CPP runtime.
		 */
		void ReadFromIl2Cpp();

		/**
		 * @brief Loads metadata from a JSON file into the klasses vector.
		 */
		void readFromFile(const std::string& path);

		/**
		 * @brief Scans memory and returns the captured metadata.
		 */
		std::vector<std::uint8_t> generateMemory() const;

		/**
		 * @brief Saves the current klasses vector to a JSON file.
		 */
		void generateFile(const std::string& path) const;

	private:
		void ExtractClassMetadata(Class* klass, Image* image, Metadata::ClassInfo& info);
		static std::string GetFullName(Class* klass);
	};
}