compiler := clang++
local-compiler := ~/Programming/clang+llvm-10.0.0-x86_64-linux-gnu-ubuntu-18.04/bin/clang++
exe := Survivio

all:
	clear
	$(compiler) main.cpp -o main -Wall -Wextra -Weffc++ -Wpedantic -pedantic -pedantic-errors -std=c++17 -g -O0
	./main
	
local-build:
	$(local-compiler) main.cpp -o $(exe) -v -std=c++17 -Ofast
	#use -Oz for size

build:
	$(compiler) main.cpp -o $(exe) -v -std=c++17 -Ofast