#pragma once
#include <string>
#include <vector>
#include "FieldInfo.h"
#include "MethodInfo.h"
#include "../Il2CppWrapper.h"

namespace Il2CppWrapper::Metadata {



	struct ClassInfo {
		std::string name;
		std::string namespaceName;
		std::string assemblyName;
		std::vector<FieldInfo> fieldsInfo;
		std::vector<MethodInfo> methodsInfo;

		friend void to_json(nlohmann::json& j, const ClassInfo& info);

		friend void from_json(const nlohmann::json& j, ClassInfo& info);
		template<typename T>
		void InitWrapperClassInfo()
		{
			auto image = Image::Get(assemblyName.c_str());
			auto klass = Class::FromName(image, namespaceName.c_str(), name.c_str());
			T::klass = klass;
			for (int i = 0; i < fieldsInfo.size(); i++) {
				T::fields[i] = klass->GetFieldFromName(fieldsInfo.at(i).name.c_str());
			}
			for (int i = 0; i < methodsInfo.size(); i++) {
				auto& methodInfo = methodsInfo.at(i);

				T::methods[i] = klass->GetMethodByPredicate([&methodInfo](Method* method) {
					auto methodInfoArgsLen = methodInfo.typesName.size();
					if (methodInfo.name != method->GetName() || method->GetParamCount() != methodInfoArgsLen)
					{
						return false;

					}

					for (int j = 0; j < methodInfoArgsLen; j++) {
						auto paramType = method->GetParamType(j);
						if (methodInfo.typesName.at(j) != paramType->GetName())
						{
							return false;
						}
					}
					return true;
				});
			}



		}
		static std::string GetFullName(Class* klass);

		void FromClass(Class* klass);
	};

}