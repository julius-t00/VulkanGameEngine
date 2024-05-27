#pragma once

#include <string>
#include <vector>


namespace lve {
	class lvePipeline {
	private:

		static std::vector<char> ReadFile(const std::string& FilePath);
		void create_graphicsPipeline(const std::string& vertFilePath, const std::string& fragFilePath);	

	public:

		lvePipeline(const std::string vertFilePath, const std::string fragFilePath);

	};
}