#include "first_app.hpp"

namespace lve {
	void first_app::run() {
		while (!lvewindow.shouldClose()) {
			glfwPollEvents();
		}
		
	}
}