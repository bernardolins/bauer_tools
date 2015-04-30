#ifndef _BAUER_THREAD_NOT_CREATED_EXCEPTION_
#define _BAUER_THREAD_NOT_CREATED_EXCEPTION_

#include <iostream>
#include "bauer_exception"

class bauer_thread_not_created_exception: public bauer_exception
{
public:
	const char* what() const throw();	
};
#endif