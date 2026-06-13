#include<linux/kernel.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");
char *modname=__stringify(KBUILD_MODNAME);

static int test_init(void)
{
	printk(KERN_INFO"MODULE_NAME:%s\n",modname);
	return 0;
}
static void test_exit(void)
{
	printk("Bye\n");
}
module_init(test_init);
module_exit(test_exit);
