cmake_minimum_required(VERSION 3.23)
project(VulkanSample)
set(CMAKE_CXX_STANDARD 17)
include_directories(${PROJECT_SOURCE_DIR}/vendor/include)
include_directories(${PROJECT_SOURCE_DIR}/glm)
include_directories(${PROJECT_SOURCE_DIR}/imgui)


MESSAGE($ENV{VULKAN_SDK}/Include)

include_directories($ENV{VULKAN_SDK}/Include)

link_libraries(${PROJECT_SOURCE_DIR}/vendor/lib/glfw3.lib)
link_libraries(${PROJECT_SOURCE_DIR}/vendor/lib/imgui.lib)
link_libraries($ENV{VULKAN_SDK}/Lib32/vulkan-1.lib)

add_executable(VulkanSample main.cpp
        backend/imgui_impl_glfw.cpp
        backend/imgui_impl_vulkan.cpp Entity.cpp Entity.h Scene.cpp Scene.h Components.h)