#include "bauer_mutex.h"

namespace bauer{

bauer_mutex::bauer_mutex()
{
	pthread_mutex_init(&mutex_var, NULL);
}

int bauer_mutex::lock()
{
	return pthread_mutex_lock(&mutex_var);
}

int bauer_mutex::unlock()
{

}

}