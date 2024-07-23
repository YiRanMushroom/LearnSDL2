cmake_minimum_required(VERSION 3.28)
project(LearnSDL2)

SET(SDL2_DIR "dependencies/SDL2-2.30.5/cmake")
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(LearnSDL2 main.cpp)

target_link_libraries(LearnSDL2 ${SDL2_LIBRARIES})

add_custom_command(TARGET LearnSDL2 POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${PROJECT_SOURCE_DIR}/dependencies/SDL2-2.30.5/x86_64-w64-mingw32/bin/SDL2.dll"
        $<TARGET_FILE_DIR:LearnSDL2>)

set(CMAKE_CXX_STANDARD 20)


