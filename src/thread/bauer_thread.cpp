#include "bauer_thread.h"

// bauer::bauer_thread::bauer_thread() {}

//saindo no tapa com a linguagem
void* bauer::bauer_thread::thread_exec(void* task) {
	((bauer::bauer_thread*) task)->exec();
	pthread_exit(NULL);
}

void bauer::bauer_thread::start() {
	if((this->pid = pthread_create(&this->thread, NULL, bauer::bauer_thread::thread_exec, (void*)this)) != 0) {
		throw new bauer::bauer_thread_not_created_exception();
	}
}

void bauer::bauer_thread::exec(){}