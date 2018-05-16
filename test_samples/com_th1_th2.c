#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <errno.h>
#include <unistd.h>
#include <semaphore.h>
#include "common.h"

__thread int ret, lp;
sem_t sem1, sem2;

void *th_fun1(void *arg)
{
	for (lp=1; lp<=10; lp++){
		ret = sem_wait(&sem1);
		if(ret)
			handle_error("[FAILURE]: sem_wait1\n", ret);

		printf("T1: cnt: %d\n", lp);
		if ((lp % 2) == 0) {
			ret = sem_post(&sem2);
			if(ret)
				handle_error("[FAILURE]: sem_post2\n", ret);
			sleep(1);
		}	

		ret = sem_post(&sem1);
		if(ret)
			handle_error("[FAILURE]: sem_post1\n", ret);
	}
}

void *th_fun2(void *arg)
{
	for (lp=1; lp<=10; lp++){
		ret = sem_wait(&sem2);
		if(ret)
			handle_error("[FAILURE]: sem_wait2\n", ret);

		printf("T2: cnt: %d\n", lp);
		if ((lp % 2) == 0) {
			ret = sem_post(&sem1);
			if(ret)
				handle_error("[FAILURE]: sem_post1\n", ret);
			sleep(1);
		}	

		ret = sem_post(&sem2);
		if(ret)
			handle_error("[FAILURE]: sem_post2\n", ret);
	}
}

int main()
{
	pthread_t th[2];
	
	sem_init(&sem1, 0, 1);
	sem_init(&sem2, 0, 0);

	ret = pthread_create(&th[0], NULL, th_fun1, NULL);
	if (ret) 
		handle_error("[FAILURE]: pthread_create\n", ret);

	ret = pthread_create(&th[1], NULL, th_fun2, NULL);
	if (ret) 
		handle_error("[FAILURE]: pthread_create\n", ret);

	for (lp = 0; lp < 2; lp++) {
		ret = pthread_join(th[lp], NULL);
		if (ret)
			handle_error("[FAILURE]: pthread_join\n", ret);
	}

	return 0;
}
