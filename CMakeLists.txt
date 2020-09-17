cmake_minimum_required(VERSION 3.10)

project (Survivio)

set (CMAKE_CXX_STANDARD 17)

if (WIN32)
    set (SFML_INCLUDE_DIR "dependencies/SFML/windows/include")
    set (SFML_LIBRARY_DIR "dependencies/SFML/windows/bin")
endif ()

if (APPLE)
    set (SFML_INCLUDE_DIR "dependencies/SFML/macOS/include")
    set (SFML_LIBRARY_DIR "dependencies/SFML/macOS/lib")
endif ()

if (UNIX AND NOT APPLE) #LINUX
    set (SFML_INCLUDE_DIR "dependencies/SFML/linux/include")
    set (SFML_LIBRARY_DIR "dependencies/SFML/linux/lib")
endif ()

include_directories (include)
include_directories (SFML_INCLUDE_DIR)

link_directories (SFML_LIBRARY_DIR)

find_package (SFML 2.5.1 COMPONENTS system window graphics network audio)

if(SFML_FOUND)
    message(STATUS "SFML_INCLUDE_DIR: ${SFML_INCLUDE_DIR}")
    message(STATUS "SFML_LIBRARIES: ${SFML_LIBRARIES}")
    message(STATUS "SFML_VERSION: ${SFML_VERSION}")
endif()

add_executable (Survivio src/main.cpp src/Player.cpp)

target_link_libraries (Survivio sfml-graphics sfml-window sfml-audio sfml-network sfml-system)

install (TARGETS Survivio DESTINATION build)