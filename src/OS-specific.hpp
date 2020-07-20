#pragma once

/* place all SFML includes here */


//switch to NDEBUG in release
#define DEBUG

#ifdef __LINUX__
    #include "../dependencies/SFML/linux/include/SFML/Graphics.hpp"
#endif

#ifdef __WINDOWS__
    #include "../dependencies/SFML/windows/include/SFML/Graphics.hpp"
#endif

#ifdef __MACOS__
    #include "../dependencies/SFML/macOS/include/SFML/Graphics.hpp"
#endif