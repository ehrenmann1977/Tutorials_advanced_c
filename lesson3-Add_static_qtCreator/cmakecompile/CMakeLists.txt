cmake_minimum_required(VERSION 3.5)

project(cmakecompile LANGUAGES C)

add_executable(cmakecompile main.c)

if (WIN32)
    include_directories("#include "D:/msys2/mingw64/include/libusb-1.0"")
    target_link_libraries(cmakecompile "D:/msys2/mingw64/lib/libusb-1.0.a")
endif(WIN32)

if (APPLE)
    include_directories("/usr/local/Cellar/libusb/1.0.24/include/libusb-1.0")
    set(CMAKE_EXE_LINKER_FLAGS "-lobjc -framework IOKit -framework CoreFoundation")
    target_link_libraries(cmakecompile "/usr/local/Cellar/libusb/1.0.24/lib/libusb-1.0.a")
endif(APPLE)
