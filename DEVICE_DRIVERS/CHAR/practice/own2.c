#include<linux/kernel.h>
#include<linux/module.h>
#include <linux/kdev_t.h>
#include <linux/fs.h>         // file_operations
#include <linux/cdev.h>       // cdev
#include <linux/device.h>     // class_create, device_create
#include <linux/uaccess.h>    // copy_to_user/from_user
#include <linux/ioctl.h>

#define DEVICE_NAME "Rahul"

#define MY_MAGIC 'R'
#define CLEAR_BUFFER _IO(MY_MAGIC,1)
#define GET_LENGTH _IOR(MY_MAGIC,2,int)

MODULE_LICENSE("GPL");

static dev_t my_dev;
static struct cdev mycdev;
static struct class *myclass;

char kernel_buffer[1024];

static ssize_t my_read(struct file *, char __user *buf, size_t len, loff_t *off)
{
	size_t buffer_length=strlen(kernel_buffer);
	size_t to_copy;
	if(*off >= buffer_length)
		return 0; //EOF
	to_copy=min(len,buffer_length-*off);
	copy_to_user(buf,kernel_buffer+*off,to_copy);
	*off+=to_copy;
	printk(KERN_INFO"%zu bytes read\n",to_copy);
	return to_copy;
}

static ssize_t my_write(struct file *, const char __user *buf, size_t len, loff_t *off)
{
	copy_from_user(kernel_buffer,buf,len);
	printk(KERN_INFO"Data written\n");
	return len;
}

static int my_open(struct inode *, struct file *)
{
	printk(KERN_INFO"Device Opened\n");
	return 0;
}


static int my_release(struct inode *, struct file *)
{
	printk(KERN_INFO"Device closed\n");
	return 0;
}

static long my_ioctl(struct file *, unsigned int cmd, unsigned long)
{
	switch(cmd)
	{
		case CLEAR_BUFFER:
			memset(kernel_buffer,0,sizeof(kernel_buffer));
			return 0;
		case GET_LENGTH:
			return strlen(kernel_buffer);
		default:
			return -EINVAL;
	}
}

static struct file_operations fops={
	.open=my_open,
	.read=my_read,
	.write=my_write,
	.release=my_release,
	.unlocked_ioctl=my_ioctl,
};

static int mychar_init(void)
{
	if(!alloc_chrdev_region(&my_dev,0,1,DEVICE_NAME))
	{
		printk(KERN_INFO"Device Registered\n");
		printk(KERN_INFO"Major:%u - Minor:%u\n",MAJOR(my_dev),MINOR(my_dev));
	}
	else
	{
		printk(KERN_INFO"Device Registration Failed\n");
	}
	cdev_init(&mycdev,&fops);
	cdev_add(&mycdev,my_dev,1);
	myclass=class_create("myclass");
	device_create(myclass,NULL,my_dev,NULL,DEVICE_NAME);
	printk("Device Registered\n");
	return 0;
}

static void mychar_exit(void)
{
	device_destroy(myclass,my_dev);
	class_destroy(myclass);
	cdev_del(&mycdev);
	unregister_chrdev_region(my_dev,1);
	printk(KERN_INFO"Driver Unloaded\n");
}
module_init(mychar_init);
module_exit(mychar_exit);
	
