#include "compiler.h"
#include <boost/predef.h>

namespace core {

std::string getCompilerName() {
#if BOOST_COMP_CLANG
    return "clang";
#elif BOOST_COMP_GNUC
    return "gcc";
#elif BOOST_COMP_MSVC
    return "msvs";
#else
    return "unknown"
#endif
}

std::string getCompilerVersion() {
#if BOOST_COMP_CLANG
    return std::to_string(BOOST_VERSION_NUMBER_MAJOR(BOOST_COMP_CLANG)) + "." +
        std::to_string(BOOST_VERSION_NUMBER_MINOR(BOOST_COMP_CLANG)) + "." +
        std::to_string(BOOST_VERSION_NUMBER_PATCH(BOOST_COMP_CLANG));
#elif BOOST_COMP_GNUC
    return std::to_string(BOOST_VERSION_NUMBER_MAJOR(BOOST_COMP_GNUC)) + "." +
        std::to_string(BOOST_VERSION_NUMBER_MINOR(BOOST_COMP_GNUC)) + "." +
        std::to_string(BOOST_VERSION_NUMBER_PATCH(BOOST_COMP_GNUC));
#elif BOOST_COMP_MSVC
    return std::to_string(BOOST_VERSION_NUMBER_MAJOR(BOOST_COMP_MSVC)) + "." +
        std::to_string(BOOST_VERSION_NUMBER_MINOR(BOOST_COMP_MSVC)) + "." +
        std::to_string(BOOST_VERSION_NUMBER_PATCH(BOOST_COMP_MSVC));
#else
    return "unknown"
#endif
}

}