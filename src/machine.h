#pragma once

namespace core::machine {

enum class Architecture {
    arm,
    x86_32,
    x86_64,
    unknown
};

Architecture getArchitecture();

}
