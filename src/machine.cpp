#include "machine.h"
#include <boost/predef.h>

namespace core {

std::string getMachineArchitectureName() {
#if BOOST_ARCH_ARM
    return "arm";
#elif BOOST_ARCH_X86_32
    return "x86_32";
#elif BOOST_ARCH_X86_64
    return "x86_64";
#else
    return "unknown";
#endif
}

}
