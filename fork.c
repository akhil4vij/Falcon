#include "common.h"

void main()
{
	pid_t pid;
	int status;

	pid = fork();
	if (-1 == pid)
		handle_error("[FAILURE]: Fork", errno);
	/* child context */
	if (0 == pid) {
		printf("child\n");
		exit(PASS);
	}
	if (pid != wait(&status))
		handle_error("[FAILURE]: wait", errno);
	exit(PASS);
}
