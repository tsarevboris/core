#include "compiler.h"
#include "machine.h"

#include <iostream>
#include <string>
#include <bit>
#include <cstddef>

using namespace core;
using namespace core::machine;

std::string getEndianStr() {
    if constexpr (std::endian::native == std::endian::big) {
        return "big";
    } else if constexpr (std::endian::native == std::endian::little) {
        return "little";
    } else {
        return "mixed";
    }
}

std::string getArchitectureStr() {
    const auto arch = getArchitecture();
    switch (arch) {
        case Architecture::arm: return "arm";
        case Architecture::x86_32: return "x86_32";
        case Architecture::x86_64: return "x86_64";
        default: return "unknown";
    }

}

std::string getCompilerStr() {
    const auto compiler = core::getCompiler();
    switch (compiler) {
        case Compiler::clang: return "clang";
        case Compiler::gcc: return "gcc";
        case Compiler::msvc: return "msvc";
        default: return "unknown";
    }
}

int main() {
    std::cout << "Compiler: " << getCompilerStr() << " " << core::getCompilerVersion() << std::endl;
    std::cout << "Machine: " << getArchitectureStr() << ", " << getEndianStr() <<  "-endian" << std::endl;

    std::cout << "Types:\n";
    std::cout << "  int - " << sizeof(int) << " bytes\n";
    std::cout << "  ptr - " << sizeof(std::nullptr_t) << " bytes\n";
    std::cout << std::endl;
    std::cout << "  char - " << sizeof(char) << " bytes\n";
    std::cout << "  short - " << sizeof(short) << " bytes\n";
    std::cout << "  long - " << sizeof(long) << " bytes\n";
    std::cout << "  long long - " << sizeof(long long) << " bytes\n";
    std::cout << std::endl;
    std::cout << "  float - " << sizeof(float) << " bytes\n";
    std::cout << "  double - " << sizeof(double) << " bytes\n";
    std::cout << "  long double - " << sizeof(long double) << " bytes\n";
    std::cout << "  bool - " << sizeof(bool) << " bytes\n";

    return 0;
}