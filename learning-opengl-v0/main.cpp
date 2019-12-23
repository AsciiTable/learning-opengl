#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main() {
	// initialize GLFW using glfwInit
	glfwInit();

	// configure GLFW using glfwWindowHint
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	// allows us to access a smaller subset of OpenGL features
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	//glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // REQUIRED FOR Mac OS X FOR THIS TO WORK

	return 0;
}