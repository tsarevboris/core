#include "machine.h"
#include <boost/predef.h>

namespace core::machine {

Architecture getArchitecture() {
#if BOOST_ARCH_ARM
    return Architecture::arm;
#elif BOOST_ARCH_X86_32
    return Architecture::x86_32;
#elif BOOST_ARCH_X86_64
    return Architecture::x86_64;
#else
    return Architecture::unknown;
#endif
}

}
