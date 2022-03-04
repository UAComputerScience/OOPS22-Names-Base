# @file CMakeLists.txt
# 
# CMake files for Name

# Can be run by any version of CMake >= this
cmake_minimum_required(VERSION 3.19)

# project info
project(Names)

# C++17 standard
set(CMAKE_CXX_STANDARD 17)

# Source files for the main program NameDemo
set(SOURCE NameDemo.cpp Name.cpp)

# convert application
add_executable(NameDemo ${SOURCE})

# Turn on warnings
if (MSVC)
    # warning level 4
    add_compile_options(/W4)
else()
    # standard warnings
    add_compile_options(-Wall)
endif()

# run command
add_custom_target(run
        COMMENT "Run"
        COMMAND $<TARGET_FILE:NameDemo>
        DEPENDS NameDemo
        USES_TERMINAL
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)
