cmake_minimum_required(VERSION 3.5)
project(CoordTemplates VERSION 0.1 LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 11)

add_executable(CoordTemplates 
        main.cpp 
        dotOnSurface.h
        dotOnSurface.cpp
        )

target_include_directories(CoordTemplates 
        PRIVATE 
        ${CMAKE_CURRENT_SOURCE_DIR})
