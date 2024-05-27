#pragma once

#include "lilVulkanWindow.hpp"
#include "lvePipeline.hpp"

namespace lve {
	class first_app {
	private:
		const std::string vertFilePath = "shaders/shader__.vert.spv";
		const std::string fragFilePath = "shaders/shader__.frag.spv";

		LveWindow lvewindow{WIDHT,HEIGHT,"Vulkan Window"};
		lvePipeline lvePipeLine{ vertFilePath, fragFilePath };
		
	
	public:
		static constexpr int WIDHT = 800;
		static constexpr int HEIGHT = 600;
		
		void run();

	};
}


