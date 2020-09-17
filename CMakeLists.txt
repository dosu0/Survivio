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

add_executable (Survivio main.cpp Player.cpp)

target_link_libraries (SFMLApp sfml-graphics sfml-window sfml-system)

install (TARGETS Survivio DESTINATION build)