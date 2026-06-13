#include<linux/kernel.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");


int my_add(int a,int b)
{
	return a+b;
}

EXPORT_SYMBOL(my_add);
static int test_init(void)
{
	printk(KERN_INFO"Hi\n");
	return 0;
}
 static void test_exit(void)
{
	printk(KERN_INFO"Bye\n");
}

module_init(test_init);
module_exit(test_exit);
