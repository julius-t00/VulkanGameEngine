#include "lilVulkanWindow.hpp"

//std
#include <stdexcept>

namespace lve {
	LveWindow::LveWindow(int w, int h, std::string n) :width(w), height(h), windowName(n) {
		initWindow();

	};

	LveWindow::~LveWindow() {
		glfwDestroyWindow(window);
		glfwTerminate();
	}

	void LveWindow::createWindowSurface(VkInstance instance, VkSurfaceKHR* surface) {
		if (glfwCreateWindowSurface(instance, window, nullptr, surface) != VK_SUCCESS) {
			throw std::runtime_error("Failed to create window surface! ");
		}
	}

	void LveWindow::initWindow() {
		glfwInit();
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
	
		window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
	}
}