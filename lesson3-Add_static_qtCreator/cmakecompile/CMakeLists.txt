cmake_minimum_required(VERSION 3.5)

project(cmakecompile LANGUAGES C)

add_executable(cmakecompile main.c)
target_link_libraries(cmakecompile "D:/msys2/mingw64/lib/libusb-1.0.a")
