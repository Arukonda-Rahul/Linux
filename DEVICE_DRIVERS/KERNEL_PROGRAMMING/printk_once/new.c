#include<linux/kernel.h>
#include<linux/module.h>


MODULE_LICENSE("GPL");
MODULE_INFO(name,"HI");


static int test_init(void)
{
	for(int i=1;i<10;i++)
	{
		printk_once("Hi\n"); //default log level in dmesg is warn and even this uses warn
		//printk_once(KERN_WARN"Hi\n");//it will give error we cannot directly use warn explictly for this once printk
	}
	printk_once("In init2\n");
	return 0;
}

static void test_exit(void)
{
	printk("%s:Bye,U are OUT\n",__func__);
}

module_init(test_init);
module_exit(test_exit);
