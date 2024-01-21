/*
    dan's game engine

    development started : 21 jan 2024 @ 10:27 pm
*/

#include <iostream>
#include "../include/GLFW/glfw3.h"

int main(int argc, char **argv)
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);


    GLFWwindow *window = glfwCreateWindow(800, 640, "DG engine", NULL, NULL);

    if(!window)
    {
        std::cout << "Failed to create window\n";
        glfwTerminate();
    }

    glfwMakeContextCurrent(window);
    
    while(!glfwWindowShouldClose(window))
    {
        glfwSwapBuffers(window);
        glfwPollEvents();

        glClearColor(0.21f, 0.21f, 0.21f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}