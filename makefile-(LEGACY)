compiler := clang++
exe := build.ignore/Survivio
lib := -l sfml-graphics -l sfml-window -l sfml-system
libPath := -L build.ignore/lib/
includePath := -I dependencies/SFML/linux/include/

all:
	rm -rf build.ignore/*
	cp -r dependencies/SFML/linux/lib/ build.ignore/
	cp -r res/ build.ignore/
	cp start.sh build.ignore/
	chmod +x build.ignore/start.sh
	$(compiler) src/*.cpp -o $(exe) -Wall -Wextra -Weffc++ -Wpedantic -pedantic -pedantic-errors -std=c++17 -g -O0 $(includePath) $(libPath) $(lib)
	cd build.ignore/ && ./start.sh

build:
	mkdir build.ignore
	cp -r dependencies/SFML/linux/lib/ build.ignore/
	cp -r res/ build.ignore/
	cp start.sh CHANGELOG LICENSE build.ignore/
	chmod +x build.ignore/start.sh
	$(compiler) src/*.cpp -o $(exe) -v -std=c++17 -Ofast $(includePath) $(libPath) $(lib)
	#use -Oz for size