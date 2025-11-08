#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

// Global variable shared between the threads
int x = 10;

void *add_value(void *arg)
{
	printf("Thread started executing the function\n");

  // Ensure that the threads run in parallel
	sleep(3);

  int sum;
  int *val = (int *)arg;
  sum = x + *val;
  printf("Sum = %d\n", sum);

	// Ensure that the threads run in parallel
	sleep(3);


	printf("Thread finished executing the function\n");

  return (void *)NULL;
}

int main()
{
	pthread_t t1, t2;
  int a=10, b=20;

	// Create the new threads and assign them the "function" task
	pthread_create(&t1, NULL, &add_value, (void *)&a);
	pthread_create(&t2, NULL, &add_value, (void *)&b);

	// Main thread Waits for the children threads to end their task
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);

  printf("Main thread exiting.\n");

	return 0;
}
