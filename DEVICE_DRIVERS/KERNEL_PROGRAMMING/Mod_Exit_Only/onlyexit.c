#include<linux/kernel.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");

static void test_exit(void)
{
	printk(KERN_INFO"Bye forever\n");
}
/*
 * It is opposite for Module with only init 
 * It will load module but no display as their is no Init You can remove and see the output in exit
 * */
module_exit(test_exit);
