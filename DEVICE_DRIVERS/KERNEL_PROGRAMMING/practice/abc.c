#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/moduleparam.h>
MODULE_LICENSE("GPL");

char *p="Rahul";
int count1=1;

module_param(p,charp,S_IRUGO);
module_param(count1,int,S_IRUGO);

static int test_init(void)
{
	for(int i=0;i<count1;i++)
		printk_once(KERN_INFO"%s\n",p);

	return 0;
}

static void test_exit(void)
{
	printk(KERN_INFO"%s:Bye\n",__func__);
}
module_init(test_init);
module_exit(test_exit);
