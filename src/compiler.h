#pragma once

#include <string>

namespace core {

enum class Compiler {
    gcc,
    clang,
    msvc,
    unknown
};

Compiler getCompiler();
std::string getCompilerVersion();

}