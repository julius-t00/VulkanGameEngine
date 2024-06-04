#pragma once
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace lve {

	class LveWindow {
	private:
		const int width;
		const int height;

		std::string windowName;

		void initWindow();
		
		GLFWwindow* window = nullptr;
	
	public:
		LveWindow(int w, int h, std::string n);
		~LveWindow();
		bool shouldClose() { return glfwWindowShouldClose(window); }
		void createWindowSurface(VkInstance Instance, VkSurfaceKHR* Surface);

		LveWindow(const LveWindow&) = delete;
		LveWindow& operator = (const LveWindow&) = delete;
	};
}