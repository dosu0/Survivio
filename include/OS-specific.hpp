#pragma once

/* place all SFML includes here */


//switch to NDEBUG in release
#define DEBUG

#ifdef __linux__
    #include "../dependencies/SFML/linux/include/SFML/Graphics.hpp"
#endif

#ifdef _WIN32
    #include "../dependencies/SFML/windows/include/SFML/Graphics.hpp"
#endif

#ifdef __APPLE__
    #include "../dependencies/SFML/macOS/include/SFML/Graphics.hpp"
#endif