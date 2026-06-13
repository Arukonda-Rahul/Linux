#include<linux/kernel.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");

extern int my_add(int a,int b);


static int test_init(void)
{
	printk(KERN_INFO"Add:%d\n",my_add(2,3));
	return 0;
}
 static void test_exit(void)
{
	printk(KERN_INFO"Bye\n");
}

module_init(test_init);
module_exit(test_exit);
