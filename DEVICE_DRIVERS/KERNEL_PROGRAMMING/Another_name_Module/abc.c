#include<linux/kernel.h>
#include<linux/module.h>


MODULE_LICENSE("GPL");


static int test_init(void)
{
	printk(KERN_INFO"%s:Hi\n",__func__);
	return 0;
}

static void test_exit(void)
{
	printk(KERN_INFO"%s:Bye\n",__func__);
}

module_init(test_init);
module_exit(test_exit);
