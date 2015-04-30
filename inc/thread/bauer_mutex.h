#ifndef BAUER_MUTEX_H
#define BAUER_MUTEX_H

#include <pthread.h>

namespace bauer{
	

class bauer_mutex
{
private:
	pthread_mutex_t mutex_var;
public:
	bauer_mutex();
	int lock();
	int unlock();
};
}

#endif