#include "bauer_thread_not_created_exception.h"

const char* bauer::bauer_thread_not_found_exception::what() const throw() {
    return "An error occurred and the thread was not created.";
}
