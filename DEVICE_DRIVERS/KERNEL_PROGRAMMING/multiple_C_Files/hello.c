#include<linux/kernel.h>
#include<linux/module.h>


MODULE_LICENSE("GPL");

void func(void);

static int test_init(void)
{
	printk(KERN_INFO"Hi\n");
	func();
	return 0;
}


static void test_exit(void)
{
	printk(KERN_INFO"Bye\n");
}

module_init(test_init);
module_exit(test_exit);
