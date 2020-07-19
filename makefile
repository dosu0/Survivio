compiler := clang++
local-compiler := ~/Programming/clang+llvm-10.0.0-x86_64-linux-gnu-ubuntu-18.04/bin/clang++
exe := bin/Survivio
#bin folder should be created before build

all:
	clear
	cd ..
	$(compiler) Survivio/src/main.cpp -o bin/main -Wall -Wextra -Weffc++ -Wpedantic -pedantic -pedantic-errors -std=c++17 -g -O0
	./main
	
local-build:
	cd ..
	$(local-compiler) Survivio/src/main.cpp -o $(exe) -v -std=c++17 -Ofast
	#use -Oz for size

build:
	$(compiler) main.cpp -o $(exe) -v -std=c++17 -Ofast