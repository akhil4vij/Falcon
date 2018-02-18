#include <linux/module.h>
#include <linux/version.h>
#include <linux/kernel.h>

MODULE_LICENSE (" GPL ");

static int __init init_mod(void)
{
	printk("A new module is inserted...\n");
	return 0;
}

static void __exit exit_mod(void)
{
	printk("New module is removed...\n");
}

module_init(init_mod);
module_exit(exit_mod);
