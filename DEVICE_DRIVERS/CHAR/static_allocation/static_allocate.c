#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/kdev_t.h>

dev_t device_number;
char *device_name="static_device";

MODULE_LICENSE("GPL");

static int mkdev_init(void)
{
	device_number=MKDEV(500,20);
	printk(KERN_INFO"Device Number:%u\n",device_number);
	printk(KERN_INFO"MAJOR:%u\n",MAJOR(device_number));
	printk(KERN_INFO"MINOR:%u\n",MINOR(device_number));

	if(!register_chrdev_region(device_number,1,device_name))
	{
		printk("Driver registered\n");
	}
	else
	{
		printk("Driver Registration failed\n");
	}
	return 0;
}

static void mkdev_exit(void){}

module_init(mkdev_init);
module_exit(mkdev_exit);
