clang:
clang++ -Wall -std=c++20 -Ilibs/ src/main.cpp src/compiler.cpp src/machine.cpp -o build/clang_core.a

GCC:
g++-13 -Wall -std=c++20 -Wl,-ld_classic -Ilibs/ src/main.cpp src/compiler.cpp src/machine.cpp -o build/gcc_core.a 