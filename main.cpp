//#include <glad/glad.h>
//#include <glfw3.h>
//#include <iostream>
//void processInput(GLFWwindow *window)
//{
//    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
//        glfwSetWindowShouldClose(window, true);
//}
//float vertices[] = {
//        -0.5f, -0.5f, 1.0f,
//        0.5f, -0.5f, 1.0f,
//        0.0f,  0.5f, 1.0f
//};
//int main() {
//    glfwInit();
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//    GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL!", NULL, NULL);
//    if (window == NULL) {
//        std::cout << "Error creating GLFW Window... " << std::endl;
//        glfwTerminate();
//        return -1;
//    }
//    glfwMakeContextCurrent(window);
//    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
//    {
//        std::cout << "Failed to initialize GLAD" << std::endl;
//        return -1;
//    }
//
//    long i = 0;
//    while(!glfwWindowShouldClose(window))
//    {
//
//        processInput(window);
//
//
//        if(i % 2 == 0 ) {
//            glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
//        } else {
//            glClearColor(0.4f, 0.5f, 0.5f, 1.0f);
//        }
//        glClear(GL_COLOR_BUFFER_BIT);
//        unsigned int VBO;
//        glGenBuffers(1, &VBO);
//        glBindBuffer(GL_ARRAY_BUFFER, VBO);
//        glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//        glfwSwapBuffers(window);
//        glfwPollEvents();
//        ++i;
//    }
//    glfwTerminate();
//    return 0;
//}
