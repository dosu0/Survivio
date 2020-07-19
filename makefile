compiler := clang++
local-compiler := ~/Programming/clang+llvm-10.0.0-x86_64-linux-gnu-ubuntu-18.04/bin/clang++
exe := bin.binignore/Survivio
lib := -l sfml-graphics -l sfml-window -l sfml-system
libPath := -L dependencies/SFML/linux/lib/
includePath := -I dependencies/SFML/linux/include/
#bin.binignore folder should be created before build

all:
	clear
	$(compiler) src/main.cpp -o bin.binignore/main -Wall -Wextra -Weffc++ -Wpedantic -pedantic -pedantic-errors -std=c++17 -g -O0 $(includePath) $(libPath) $(lib)
	./bin.binignore/main

build:
	$(compiler) src/main.cpp -o $(exe) -v -std=c++17 -Ofast $(includePath) $(libPath) $(lib)
	#use -Oz for size
	#change $(compiler) to $(local-compiler) for more recent version