cd build/
custom-cmake -G"Ninja" -DCMAKE_BUILD_TYPE="Debug" ..
custom-cmake --build .
cd bin/
./Survivio
