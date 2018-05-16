#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>

#define handle_error(msg, err)	\
	do { printf(msg":, ret-> %d)\n", err); \
	       exit(EXIT_FAILURE); \
	} while(0)	       

void *func(void *arg)
{
	printf("Thread started working\n");
	sleep(20);

	/* If cancelled, should not reach this point */
	printf("Thread should not reach this point\n");
	pthread_exit(NULL);
}

int main()
{
	pthread_t th;
	int ret;
	void *thread_ret_val;

	ret = pthread_create(&th, NULL, func, NULL);
	if (ret)
		handle_error("pthread_create", ret);

	ret = pthread_cancel(th);
	if (ret)
		handle_error("pthread_cancel", ret);

	ret = pthread_join(th, (void *)&thread_ret_val);
	if (ret)
		handle_error("pthread_join", ret);
	if (strcmp((char *)thread_ret_val, "PTHREAD_CANCELED"))
		handle_error("strcmp", -1);

	return 0;
}
