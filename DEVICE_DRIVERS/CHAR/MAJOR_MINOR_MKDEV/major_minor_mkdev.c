#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/kdev_t.h>


MODULE_LICENSE("GPL");

static int mkdev_init(void)
{
	dev_t device_number=100;
	printk(KERN_INFO"Device Number:%u\n",device_number);
	printk(KERN_INFO"MAJOR:%u\n",MAJOR(device_number));
	printk(KERN_INFO"MINOR:%u\n",MINOR(device_number));
	device_number=MKDEV(10,20);
	printk(KERN_INFO"Device Number:%u\n",device_number);
	printk(KERN_INFO"MAJOR:%u\n",MAJOR(device_number));
	printk(KERN_INFO"MINOR:%u\n",MINOR(device_number));
	return 0;
}

static void mkdev_exit(void){}

module_init(mkdev_init);
module_exit(mkdev_exit);
