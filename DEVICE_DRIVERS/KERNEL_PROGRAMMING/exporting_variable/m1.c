#include<linux/kernel.h>
#include<linux/module.h>
#include"myheader.h"
MODULE_LICENSE("GPL");

struct hello foo;
EXPORT_SYMBOL(foo);
static int test_init(void)
{
	printk(KERN_INFO"updating value of foo in m1\n");
	foo.id=2;
	foo.no=3;
	return 0;
}
 static void test_exit(void)
{
	printk(KERN_INFO"Bye from m1\n");
}

module_init(test_init);
module_exit(test_exit);
