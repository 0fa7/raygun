cmake_minimum_required(VERSION 3.13)

project(raygun)

set(CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++latest")

set(RAYGUN_SRC 
    MainCli.cpp)

add_executable(${PROJECT_NAME} ${RAYGUN_SRC})