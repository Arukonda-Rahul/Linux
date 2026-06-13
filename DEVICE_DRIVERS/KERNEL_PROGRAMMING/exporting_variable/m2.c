#include<linux/kernel.h>
#include<linux/module.h>
#include"myheader.h"
MODULE_LICENSE("GPL");

extern struct hello foo;
static int test_init(void)
{
	printk(KERN_INFO"printing values of foo from m2\n");
	printk(KERN_INFO"%d\n%d\n",foo.id,foo.no);
	return 0;
}
 static void test_exit(void)
{
	printk(KERN_INFO"Bye\n");
}

module_init(test_init);
module_exit(test_exit);
