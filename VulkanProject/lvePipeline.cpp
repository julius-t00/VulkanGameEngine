#include "lvePipeline.hpp"

#include <fstream>
#include <stdexcept>
#include <iostream>

namespace lve {
	std::vector<char> lvePipeline::ReadFile(const std::string& FilePath) {
		std::ifstream file{ FilePath, std::ios::ate | std::ios::binary };

		if (!file.is_open()) {
			throw std::runtime_error("Failed to open file: \"" + FilePath + '\"');
		}
		size_t fileSize = static_cast<size_t>(file.tellg());
		std::vector<char> characterBuffer(fileSize);
		file.seekg(0);
		file.read(characterBuffer.data(), fileSize);
		file.close();
		return characterBuffer;
	}
	void lvePipeline::create_graphicsPipeline(const std::string& vertFilePath, const std::string& fragFilePath,const pipelineConfigInfo& configInfo) {
		auto vertCode = ReadFile(vertFilePath);
		auto fragCode = ReadFile(fragFilePath);

		std::cout << "Vertex shader code size: " << vertCode.size() << '\n';
		std::cout << "Frag shader code size: " << fragCode.size() << '\n';

	}

	lvePipeline::lvePipeline(const std::string vertFilePath, const std::string fragFilePath) {
		create_graphicsPipeline(vertFilePath, fragFilePath);
	}
}