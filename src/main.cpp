#include "compiler.h"
#include "machine.h"

#include <iostream>
#include <string>
#include <bit>

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
    return 0;
}