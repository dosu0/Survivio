# About

Survivio is a desktop clone of the popular browser battle royale shooter - surviv.io, written in C++

The project is currently in the stage of early alpha development, so any contribution is welcome.
https://badgen.net/github/checks/styfle/packagephobia/main



# Building

1) On Debian and Debian-based linux distributions
    make sure these dependencies (used by SFML library) are satisfied:


        libx11-dev
        libgl1-mesa-dev
        libudev-dev
        libfreetype6-dev
        libopenal-dev
        libflac-dev
        libvorbis-dev
        make
        clang


    (on Mac OS and Windows first step is omitted)

2) clone this repository anywhere:

        git clone https://github.com/Fenex330/Survivio.git

3) In the terminal write:

        make build


The folder bin.ignore will contain all the binary files
