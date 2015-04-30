#include "bauer_exception.h"

const char* bauer::bauer_exception::what() const throw() {
    return "An unexpected error occurred. This can be a bug, please report at https://github.com/frila/bauer_tools.";
}
