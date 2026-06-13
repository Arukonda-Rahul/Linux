#include<linux/kernel.h>
#include<linux/module.h>


MODULE_LICENSE("GPL");
MODULE_INFO(name,"HI");


static int test_init(void)
{
	float f=1.2;
	printk("value of float:%f\n",f);
	return 0;
}

static void test_exit(void)
{
	printk("%s:Bye,U are OUT\n",__func__);
}

module_init(test_init);
module_exit(test_exit);
