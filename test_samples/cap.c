#include "common.h"

int main()
{
	cap_user_header_t hdr;
	cap_user_data_t data, data1;

	struct __user_cap_header_struct cap_header_data;
	struct __user_cap_data_struct cap_data_data;

	hdr = &cap_header_data;
	data = &cap_data_data;

	/* fill the header to set and get the capability */
	hdr.pid = getpid();
	hdr.version = _LINUX_CAPABILITY_VERSION;

	if (0 > capget(hdr, data)) {
		handle_error("capget", errno);
	}

	data.permitted = CAP_SYS_RESOURCE;

	/* set the capability for current process */
	if(0 > capset(hdr, data)) {
		handle_error("capset", errno);
	}


	/* get the capability for current process */
	if(0 > capget(hdr, data1)) {
		handle_error("capget", errno);
	}

	if (data1.permitted != CAP_SYS_RESOURCE){
		printf("Failed to set the capability settings\n");
		exit(EXIT_FAILURE);
	}

	return EXIT_SUCCESS;
}
