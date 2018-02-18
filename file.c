#include "common.h"

#define _FILE_OFFSET_BITS 64

struct file_info {
	int roll;
	char name[NAME_MAX];
	float marks;
};

int main()
{
	int fd;
	struct file_info f_in, r_f_in;

	fd = open(FILE_NAME, O_CREAT|O_RDWR|O_EXCL);
	if (-1 == fd)
		handle_error("open", errno);

	int flags = fcntl(fd, F_GETFL);
	if (-1 == flags)
		handle_error("F_GETFL", errno);

	int acc_mode = flags & O_ACCMODE;
	if (!((acc_mode == O_CREAT) && (acc_mode == O_RDWR) && (acc_mode == O_EXCL)))
		handle_error("accessmode", errno);

	f_in.roll = 51601373;
//	f_in.name = "akhil";
	f_in.marks = 89.8;

	int ret;
	ret = write(fd, &f_in, sizeof(struct file_info));
	if (-1 == ret)
		handle_error("write", errno);


	/* read the file */
	ret = read(fd, &r_f_in, sizeof(struct file_info));
	if (-1 == ret)
		handle_error("read", errno);

//	printf("r_f_in.name: %s\n", r_f_in.name);
	printf("r_f_in.marks: %f\n", r_f_in.marks);
	printf("r_f_in.roll: %s\n", r_f_in.roll);

	return 0;
}

		
