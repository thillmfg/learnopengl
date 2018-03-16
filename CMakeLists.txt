cmake_minimum_required(VERSION 3.9)
project(learn_open_gl)
include_directories(/usr/include/GLFW ./includes)
link_libraries(/usr/lib/x86_64-linux-gnu/libglfw.so.3.2 /usr/lib/x86_64-linux-gnu/libdl.so)
set(CMAKE_CXX_STANDARD 17)

add_executable(learn_open_gl main.cpp glad.c hello_triangle.cpp)