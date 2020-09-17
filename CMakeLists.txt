cmake_minimum_required(VERSION 3.10)

project(Survivio)

set(CMAKE_CXX_STANDARD 17)

if (WIN32)
    set(SFML_INCLUDE_DIR "/dependencies/SFML/windows/include")
endif ()

if (APPLE)
    set(SFML_INCLUDE_DIR "/dependencies/SFML/macOS/include")
endif ()

if (LINUX) #UNIX AND NOT APPLE
    set(SFML_INCLUDE_DIR "/dependencies/SFML/linux/include")
endif ()

include_directories(include)
include_directories(SFML_INCLUDE_DIR)

add_executable(Survivio main.cpp Player.cpp)

install(TARGETS Survivio DESTINATION build)