#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/delay.h>

MODULE_LICENSE("GPL");
MODULE_INFO(name,"HI");


static int test_init(void)
{
	int i;
	for(i=1;i<20;i++)
	{
		if(printk_ratelimit())
		{
			pr_info("printing %d\n",i);
		}
		else
		{
			pr_info("sleeping for 5seconds\n");
		}
	}
	return 0;
}

static void test_exit(void)
{
	printk("%s:Bye,U are OUT\n",__func__);
}

module_init(test_init);
module_exit(test_exit);
