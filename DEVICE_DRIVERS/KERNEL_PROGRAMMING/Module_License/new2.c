#include<linux/kernel.h>
#include<linux/module.h>

MODULE_LICENSE("Proprietary");

extern int my_add(int a,int b);

static int test_init(void)
{
	printk(KERN_INFO"add from new2:%d\n",my_add(2,3));
	return 0;
}

static void test_exit(void)
{
	printk(KERN_INFO"%s:Bye,U are OUT\n",__func__);
}

module_init(test_init);
module_exit(test_exit);
