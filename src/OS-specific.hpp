#pragma once

#ifdef LINUX
    #include "../dependencies/SFML/linux/include/SFML/Graphics.hpp"
#endif

#ifdef WINDOWS
    #include "../dependencies/SFML/windows/include/SFML/Graphics.hpp"
#endif

#ifdef MACOS
    #include "../dependencies/SFML/macOS/include/SFML/Graphics.hpp"
#endif