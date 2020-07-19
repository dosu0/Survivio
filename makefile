compiler := clang++
local-compiler := ~/Programming/clang+llvm-10.0.0-x86_64-linux-gnu-ubuntu-18.04/bin/clang++
exe := bin.binignore/Survivio
lib := -l sfml-graphics -l sfml-window -l sfml-system
libPath := -L bin.binignore/lib/
includePath := -I dependencies/SFML/linux/include/
#bin.binignore folder should be created before debug build and deleted before release build

all:
	rm -rf bin.binignore/*
	cp -r dependencies/SFML/linux/lib/ bin.binignore/
	cp start.sh bin.binignore/
	chmod +x bin.binignore/start.sh
	$(compiler) src/main.cpp -o bin.binignore/main -Wall -Wextra -Weffc++ -Wpedantic -pedantic -pedantic-errors -std=c++17 -g -O0 $(includePath) $(libPath) $(lib)
	./bin.binignore/start.sh

build:
	mkdir bin.binignore
	cp -r dependencies/SFML/linux/lib/ bin.binignore/
	cp start.sh bin.binignore/
	chmod +x bin.binignore/start.sh
	$(compiler) src/main.cpp -o $(exe) -v -std=c++17 -Ofast $(includePath) $(libPath) $(lib)
	#use -Oz for size
	#change $(compiler) to $(local-compiler) for more recent version