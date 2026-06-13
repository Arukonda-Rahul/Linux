#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/moduleparam.h>

MODULE_LICENSE("GPL");

int array[5];
static int argc_count=0;

module_param_array(array,int,&argc_count,S_IRUGO);


static int test_init(void)
{
	printk(KERN_INFO"count:%d\n",argc_count);
	for(int i=0;i<5;i++)
	{
		printk(KERN_INFO"%d\n",array[i]);
	}
	return 0;
}

static void test_exit(void)
{
	printk(KERN_INFO"exit\n");
}

module_init(test_init);
module_exit(test_exit);
