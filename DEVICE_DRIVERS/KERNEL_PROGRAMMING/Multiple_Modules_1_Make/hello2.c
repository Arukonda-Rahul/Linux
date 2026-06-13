#include<linux/kernel.h>
#include<linux/module.h>


MODULE_LICENSE("GPL");

static int test_init(void)
{
	printk(KERN_INFO"Hi2\n");
	return 0;
}


static void test_exit(void)
{
	printk(KERN_INFO"Bye2\n");
}

module_init(test_init);
module_exit(test_exit);

