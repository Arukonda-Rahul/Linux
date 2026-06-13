 #include<linux/kernel.h>
#include<linux/module.h>


MODULE_LICENSE("GPL");

static int test_init(void)
{
	printk(KERN_INFO"Hi1\n");
	return 0;
}


static void test_exit(void)
{
	printk(KERN_INFO"Bye1\n");
}

module_init(test_init);
module_exit(test_exit);

