cmake_minimum_required(VERSION 3.10)
project(zombie-hunter)

find_package(SDL2 REQUIRED)
include_directories(${SDL_INCLUDE_DIRS})

add_executable(zombie-hunter src/main.cpp src/WindowRenderer.cpp src/Game.cpp)
target_link_libraries(zombie-hunter ${SDL2_LIBRARIES})