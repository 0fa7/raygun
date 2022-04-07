cmake_minimum_required(VERSION 3.13)

project(raygun)

set(CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++latest")

include_directories("thirdparty/imgui")
include_directories("thirdparty/imgui/backends")

set(RAYGUN_SRC 
    MainGui.cpp
    RaygunMainWindow.cpp
    thirdparty/imgui/imgui_demo.cpp
    thirdparty/imgui/imgui_draw.cpp
    thirdparty/imgui/imgui_tables.cpp
    thirdparty/imgui/imgui_widgets.cpp
    thirdparty/imgui/imgui.cpp
    thirdparty/imgui/backends/imgui_impl_dx12
    thirdparty/imgui/backends/imgui_impl_win32.cpp)

add_executable(${PROJECT_NAME} ${RAYGUN_SRC})

target_link_libraries(${PROJECT_NAME}
    d3d12
    dxgi)