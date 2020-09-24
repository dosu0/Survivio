# About

Survivio is a desktop clone of the popular browser battle royale shooter - surviv.io, written in C++

The project is currently in the stage of an early alpha development, so any contribution is welcome.



### Building

1) Satisfy the SFML dependencies, if needed (https://www.sfml-dev.org/faq.php)

2) Install the newest version of [Cmake](https://cmake.org/download/)

3) In the terminal write (to clone the repository on your computer):

        git clone https://github.com/Fenex330/Survivio.git

4) Make a directory called "build" within the Survivio directory (either through the terminal or your file explorer)
        
        mkdir Survivio/build/

5) Then write (or use cmake gui to configure and generate native build files):

        cd Survivio/build/
        cmake .. && cmake --build .


The folder "Survivio/build/bin" will contain all the binary files

Note that on windows, you must manualy copy the dlls from "lib" folder to the binary root folder (bin) next to the executable


Tested to be working on:

Compilers - g++, clang++
build tools - make, ninja



### Mirror List

Primary https://github.com/Fenex330/Survivio

Secondary https://notabug.org/Fenex33/Survivio
