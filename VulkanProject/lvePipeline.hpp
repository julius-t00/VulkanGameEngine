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
		void create_ShaderModule(const std::vector<char>& code, VkShaderModule* shaderModule);

		LveDevice& lveDevice;
		VkPipeline graphicsPipeline;
		VkShaderModule vertShaderModule;
		VkShaderModule fragShaderModule;

	public:

		lvePipeline(LveDevice& device, const std::string vertFilePath, const std::string fragFilePath,const pipelineConfigInfo& configInfo);
		~lvePipeline() {};
		lvePipeline(const lvePipeline& ) = delete;
		void operator=(const lvePipeline&) = delete;
	
		static pipelineConfigInfo defaultPipelineConfigInfo(uint32_t width, uint32_t height)
	};
}