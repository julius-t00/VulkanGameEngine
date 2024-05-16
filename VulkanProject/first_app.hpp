#pragma once

#include "lilVulkanWindow.hpp"

namespace lve {
	class first_app {
	private:
		LveWindow lvewindow{WIDHT,HEIGHT,"Vulkan Window"};
	public:
		static constexpr int WIDHT = 800;
		static constexpr int HEIGHT = 600;

		void run();

	};
}


