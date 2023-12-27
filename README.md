clang:
clang++ -Wall -std=c++20 -Ilibs/ src/main.cpp src/compiler.cpp src/machine.cpp -o build/clang_core.a
./build/clang_core.a

GCC:
g++-13 -Wall -std=c++20 -Wl,-ld_classic -Ilibs/ src/main.cpp src/compiler.cpp src/machine.cpp -o build/gcc_core.a
./build/gcc_core.a 


Boost Predef:
    https://www.boost.org/doc/libs/1_84_0/libs/predef/doc/index.html
    https://github.com/boostorg/predef

std::endian:
    https://en.cppreference.com/w/cpp/types/endian
