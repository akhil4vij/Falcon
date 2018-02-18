#include "linux/init.h"
#include "linux/module.h"

static int init(void)
{
	printk("Hi! I am new module\n");
	return 0;
}

static void close(void)
{
	printk("Bye! Time's up, Meet u later\n");
}

module_init(init);
module_exit(exit);
