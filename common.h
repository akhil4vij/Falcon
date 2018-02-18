#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <pthread.h>

#define NAME_MAX 256
#define FILE_NAME "tst_file"

#define PASS EXIT_SUCCESS
#define FAIL EXIT_FAILURE

/* for handling errors */
#define handle_error(msg, err) do { printf(msg "%d\n", err); exit(FAIL); } while(0)
