compiler := clang++
local-compiler := ~/Programming/clang+llvm-10.0.0-x86_64-linux-gnu-ubuntu-18.04/bin/clang++
exe := bin.binignore/Survivio
#bin.binignore folder should be created before build

all:
	clear
	$(compiler) src/main.cpp -o bin.binignore/main -Wall -Wextra -Weffc++ -Wpedantic -pedantic -pedantic-errors -std=c++17 -g -O0
	bin.binignore/main
	
local-build:
	$(local-compiler) src/main.cpp -o $(exe) -v -std=c++17 -Ofast
	#use -Oz for size

build:
	$(compiler) src/main.cpp -o $(exe) -v -std=c++17 -Ofast