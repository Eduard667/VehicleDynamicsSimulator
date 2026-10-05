#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "HelperFunctions/HelperFunctionsOpenGL.h"
#include "Window/windowManager.h"

int main()
{
   WindowManager::CreateAndRunWindow();
   // glfwMakeContextCurrent(nullptr);
   // glEnable(GL_DEPTH_TEST);
   // gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
}