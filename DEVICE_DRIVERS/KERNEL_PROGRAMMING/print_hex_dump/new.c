#include<linux/kernel.h>
#include<linux/module.h>


MODULE_LICENSE("GPL");
MODULE_INFO(name,"HI");


static int test_init(void)
{
	char buffer[]="Hi hello how are you";
	print_hex_dump(KERN_INFO,"buf1:",DUMP_PREFIX_ADDRESS,16,1,buffer,sizeof(buffer),1);
	print_hex_dump(KERN_ALERT,"buf2:",DUMP_PREFIX_OFFSET,16,1,buffer,sizeof(buffer),0);
	print_hex_dump(KERN_ALERT,"buf3:",DUMP_PREFIX_NONE,16,1,buffer,sizeof(buffer),0);
	return 0;
}

static void test_exit(void)
{
	printk("%s:Bye,U are OUT\n",__func__);
}

module_init(test_init);
module_exit(test_exit);
