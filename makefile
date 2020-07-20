compiler := clang++
local-compiler := ~/Programming/clang+llvm-10.0.0-x86_64-linux-gnu-ubuntu-18.04/bin/clang++
exe := bin.ignore/Survivio
lib := -l sfml-graphics -l sfml-window -l sfml-system
libPath := -L bin.ignore/lib/
includePath := -I dependencies/SFML/linux/include/

all:
	rm -rf bin.ignore/*
	cp -r dependencies/SFML/linux/lib/ bin.ignore/
	cp start.sh bin.ignore/
	chmod +x bin.ignore/start.sh
	$(compiler) src/main.cpp -o $(exe) -Wall -Wextra -Weffc++ -Wpedantic -pedantic -pedantic-errors -std=c++17 -g -O0 $(includePath) $(libPath) $(lib)
	cd bin.ignore/ && ./start.sh

build:
	mkdir bin.ignore
	cp -r dependencies/SFML/linux/lib/ bin.ignore/
	cp start.sh bin.ignore/
	chmod +x bin.ignore/start.sh
	$(compiler) src/main.cpp -o $(exe) -v -std=c++17 -Ofast $(includePath) $(libPath) $(lib)
	#use -Oz for size
	#change $(compiler) to $(local-compiler) for more recent version