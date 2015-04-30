#include "bauer_thread.h"

void bauer::bauer_thread::start() {
	if(pthread_create(&this->thread, NULL, (void*) &this->exec, NULL) != 0) {
		//throw exception
	}
}