#include<linux/kernel.h>
#include<linux/module.h>


MODULE_LICENSE("GPL");


static int test_init(void)
{
	printk(KERN_INFO"%s:How are you\n",__func__);
	return -1;
	/*
	 Module will not load into kernel log 
	 o/p:insmod: ERROR: could not insert module abc.ko: Operation not permitted
	 So only Init functions output can display but exit function output will never be displayed
	  */
}

static void test_exit(void)
{
	printk(KERN_INFO"%s:Fine\n",__func__);
}

module_init(test_init);
module_exit(test_exit);
