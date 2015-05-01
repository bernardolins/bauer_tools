#include <iostream>
#include <pthread>
#include "bauer_thread_not_created_exception.h"

namespace bauer {
	class bauer_thread
	{
	private:
		int pid;
		pthread_t thread;
		
	public:
		~bauer_thread();
		void start();
		void join();
		virtual void exec();
		int pid(); 
	};
}