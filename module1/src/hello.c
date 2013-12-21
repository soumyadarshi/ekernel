#include <linux/module.h>
#include <linux/kernel.h>

int module_start(void)
{
	printk("Welcome to dark ocean! hope you will not give up learning me!\n");
	return 0;
}

void module_end(void)
{
	printk("bye! hope you will load me again\n");
}

module_init(module_start);
module_exit(module_end);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Soumyadarshi, sadhikari2@gmail.com");
MODULE_DESCRIPTION("hello world example");
