#include<linux/kernel.h>
#include<linux/module.h>

MODULE_LICENSE("GPL");

static int test_init(void)
{
	printk(KERN_INFO"hi\n");
	return 0;
}
/* it will load kernel module but when u try to rmmod it it will display
 * rmmod: ERROR: ../libkmod/libkmod-module.c:799 kmod_module_remove_module() could not remove 'hello': Device or resource busy
rmmod: ERROR: could not remove module hello.ko: Device or resource busy  */

module_init(test_init);
