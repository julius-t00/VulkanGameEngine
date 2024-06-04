#pragma once

#include "LveDevice.hpp"

//std
#include <string>
#include <vector>


namespace lve {
	struct pipelineConfigInfo {};
	class lvePipeline {
	private:

		static std::vector<char> ReadFile(const std::string& FilePath);
		void create_graphicsPipeline(const std::string& vertFilePath, const std::string& fragFilePath, const pipelineConfigInfo& configinfo);	
		LveDevice& lveDevice;

	public:

		lvePipeline(const std::string vertFilePath, const std::string fragFilePath,const pipelineConfigInfo& configInfo);

	};
}