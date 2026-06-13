#include<linux/kernel.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");

static int panic_init(void)
{
	printk("calling panic\n");
	panic("Manual panic triggered\n");
	return 0;
}

static void panic_exit(void){}

module_init(panic_init);
module_exit(panic_exit);
