#include "compiler.h"
#include <boost/predef.h>

namespace core {

Compiler getCompiler() {
#if BOOST_COMP_CLANG
    return Compiler::clang;
#elif BOOST_COMP_GNUC
    return Compiler::gcc;
#elif BOOST_COMP_MSVC
    return Compiler::msvc;
#else
    return Compiler::unknown;
#endif
}

std::string getCompilerVersion() {
    int major = 0;
    int minor = 0;
    int patch = 0;

#if BOOST_COMP_CLANG
    major = BOOST_VERSION_NUMBER_MAJOR(BOOST_COMP_CLANG);
    minor = BOOST_VERSION_NUMBER_MINOR(BOOST_COMP_CLANG);
    patch = BOOST_VERSION_NUMBER_PATCH(BOOST_COMP_CLANG);
#elif BOOST_COMP_GNUC
    major = BOOST_VERSION_NUMBER_MAJOR(BOOST_COMP_GNUC);
    minor = BOOST_VERSION_NUMBER_MINOR(BOOST_COMP_GNUC);
    patch = BOOST_VERSION_NUMBER_PATCH(BOOST_COMP_GNUC);
#elif BOOST_COMP_MSVC
    major = BOOST_VERSION_NUMBER_MAJOR(BOOST_COMP_MSVC);
    minor = BOOST_VERSION_NUMBER_MINOR(BOOST_COMP_MSVC);
    patch = BOOST_VERSION_NUMBER_PATCH(BOOST_COMP_MSVC);           
#endif

    return std::to_string(major) + "." + std::to_string(minor) + "." + std::to_string(patch);
}

}