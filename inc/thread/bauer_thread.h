#ifndef _BAUER_THREAD_
#define _BAUER_THREAD_

#include <iostream>
#include <pthread.h>
#include "bauer_thread_not_created_exception.h"

namespace bauer {
	class bauer_thread
	{
	private:
		int pid;
		pthread_t thread;
		static void* thread_exec(void*);
	public:
		bauer_thread() {}
		// ~bauer_thread();
		void start();
		void join();
		virtual void exec();
		int get_pid(); 
	};
}

#endif