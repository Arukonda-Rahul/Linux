#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/vermagic.h>

MODULE_LICENSE("GPL");

static int vermagic_init(void)
{
	pr_info("vermagic string:"VERMAGIC_STRING"\n");
	return 0;
}

static void vermagic_exit(void) {}
 
module_init(vermagic_init);
module_exit(vermagic_exit);
