#include<linux/kernel.h>
#include<linux/module.h>

void func(void)
{
	printk(KERN_INFO"LINUX\n");
}
