#include<linux/kernel.h>
#include<linux/module.h>


MODULE_LICENSE("GPL");
MODULE_INFO(name,"HI");


static int test_init(void)
{
	//printk(KERN_CONT"HELLO");
	//printk(KERN_CONT"WORLD");
	printk(KERN_INFO "HELLO");
	printk(KERN_INFO KERN_CONT"WORLD");
	return 0;
}

static void test_exit(void)
{
	printk("bye\n");
}
module_init(test_init);
module_exit(test_exit);
