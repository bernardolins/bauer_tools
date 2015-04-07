#include "bauer_exception.h"

const char* bauer::tools::bauer_exception::what() const throw() {
    return "An unexpected error occurred. This can be a bug, please report at https://github.com/bernardolins/bauer_tools.";
}
