# About

Survivio is a desktop clone of the popular browser battle royale shooter - surviv.io

The project is currently in the stage of early alpha development, so any contribution is welcome.


# Building

On Debian and Debian-based linux distributions
make sure these dependencies (used by SFML library) are satisfied:


    libx11-dev
    libgl1-mesa-dev
    libudev-dev
    libfreetype6-dev
    libopenal-dev
    libflac-dev
    libvorbis-dev
    make
    clang (or gcc)

On Mac OS and Windows first step is omitted


In the terminal write:

    make build


The folder bin.binignore will contain all the binary files