cmake_minimum_required(VERSION 3.10)

project(Survivio)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

if (WIN32)
    include_directories(/dependencies/SFML/windows/include)
endif ()

if (APPLE)
    include_directories(/dependencies/SFML/macOS/include)
endif ()

if (LINUX) #UNIX AND NOT APPLE
    include_directories(/dependencies/SFML/linux/include)
endif ()

add_executable(Survivio main.cpp Player.cpp)

install(TARGETS Survivio DESTINATION build)