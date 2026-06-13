#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/version.h>

MODULE_LICENSE("GPL");

static int test_init(void)
{
	printk(KERN_INFO"%u\n",LINUX_VERSION_CODE);
	return 0;
}
static void test_exit(void)
{
	printk("Bye\n");
}
module_init(test_init);
module_exit(test_exit);
