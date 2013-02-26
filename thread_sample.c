#include <sys/types.h>
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>


int X;

void* function1()
{
	while(1)
	{
	X = 0; // write
		printf("After thread ID A	writes to X, X = %d\n", X);
		X++;
		sleep(1);
	}
}

void* function2()
{
	while(1)
	{
		X++;
		printf("After thread ID B	reads from X, X = %d\n",	X);
		sleep(1);
	}
}


int main()
{
	void* status;
	pthread_t thread1, thread2;
	pthread_create(&thread1, &abc, function1, (void*) &thread_var);
	pthread_create(&thread2, NULL, function2, NULL);
}
