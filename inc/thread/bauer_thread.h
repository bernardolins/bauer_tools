#include <iostream>
#include <pthread>

namespace bauer {
	class bauer_thread
	{
	public:
		~bauer_thread();

		void start();
		void join();
		virtual void exec(); 
	};
}