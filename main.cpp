

#include <iostream>
#include <GLFW/glfw3.h>

int main()
{
    if (!glfwInit())
    {
        std::cerr<<"Failed to initialize GLFW\n";
        return -1;
    }
    // 2. Create a windowed mode window and its OpenGL context
    GLFWwindow* window = glfwCreateWindow(800, 600, "My GLFW Window", NULL, NULL);
    if (!window) {
        glfwTerminate(); // Window or OpenGL context creation failed
        return -1;
    }

    // 3. Make the window's context current
    glfwMakeContextCurrent(window);

    // 4. Loop until the user closes the window
    while (!glfwWindowShouldClose(window)) {
        // Render here (e.g. clear the screen)
        glClear(GL_COLOR_BUFFER_BIT); // Requires OpenGL headers (like GL/glew.h)

        // Swap front and back buffers
        glfwSwapBuffers(window);

        // Poll for and process events (keyboard, mouse, etc.)
        glfwPollEvents();
    }

    // 5. Terminate GLFW, clearing all previously allocated resources
    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
