#include "compiler.h"
#include "machine.h"
#include <iostream>

int main() {
    std::cout << "Compiler: " << core::getCompilerName() << " " << core::getCompilerVersion() << std::endl;
    std::cout << "Machine: " << core::getMachineArchitectureName() << std::endl;
    return 0;
}