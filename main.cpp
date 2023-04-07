#pragma comment(lib, "vulkan-1.lib")
#pragma comment(lib, "glfw3.lib")

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#include <iostream>

int main()
{
    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    GLFWwindow* pWindow = glfwCreateWindow(800, 600, "Vulkan Window", nullptr, nullptr);

    uint32_t extCnt = 0;
    vkEnumerateInstanceExtensionProperties(nullptr, &extCnt, nullptr);

    std::cout << extCnt << " extensions supported\n";

    glm::mat4 matrix;
    glm::vec4 vec;
    auto test = matrix * vec;

    while (!glfwWindowShouldClose(pWindow))
    {
        glfwPollEvents();
    }

    glfwDestroyWindow(pWindow);

    glfwTerminate();

    return 0;
}
