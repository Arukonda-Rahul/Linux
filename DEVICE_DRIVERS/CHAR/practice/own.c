#include<linux/kernel.h>
#include<linux/module.h>
#include <linux/kdev_t.h>  
#include <linux/fs.h>         // file_operations
#include <linux/cdev.h>       // cdev
#include <linux/device.h>     // class_create, device_create
#include <linux/uaccess.h>    // copy_to_user/from_user
#include <linux/ioctl.h>

#define MY_MAGIC 'R'
#define CLEAR_BUFFER _IO(MY_MAGIC, 1)
#define GET_LENGTH   _IOR(MY_MAGIC, 2, int)


MODULE_LICENSE("GPL");

#define device_name "my_driver"

static dev_t mydev;
static struct cdev mycdev;
static struct class *myclass;

char kernel_buffer[1024];

static int my_open(struct inode *, struct file *)
{
	printk(KERN_INFO"Device Opened\n");
	return 0;
}

static int my_release(struct inode *, struct file *)
{
	printk(KERN_INFO"Device_Released\n");
	return 0;
}

static ssize_t my_write(struct file *, const char __user *buf, size_t len, loff_t *off)
{
	copy_from_user(kernel_buffer,buf,len);
	printk(KERN_INFO"Data Written\n");
	return len;
}


static ssize_t my_read(struct file *, char __user *buf, size_t len, loff_t *off)
{	
	size_t buffer_size=strlen(kernel_buffer);
	size_t to_copy;
	if(*off >= buffer_size)
		return 0;
	to_copy=min(len,buffer_size-*off);
	if(copy_to_user(buf,kernel_buffer+*off,to_copy))
		return -EFAULT;
	
	*off+= to_copy;
	printk(KERN_INFO"%zu bytes read\n",to_copy);
	return to_copy;	
}

static long my_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
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
	.owner=THIS_MODULE,
	.open=my_open,
	.read=my_read,
	.write=my_write,
	.release=my_release,
	.unlocked_ioctl=my_ioctl,
};

static int mydriver_init(void)
{
	if(!alloc_chrdev_region(&mydev,0,1,device_name))
		printk(KERN_INFO"Device Registered\n");
	else
		printk(KERN_INFO"Device Registration failed\n");
	
	printk(KERN_INFO"Major:%u - Minor:%u\n",MAJOR(mydev),MINOR(mydev));
	
	cdev_init(&mycdev,&fops);
	cdev_add(&mycdev,mydev,1);
	myclass=class_create("myclass");
	device_create(myclass,NULL,mydev,NULL,device_name);
	printk(KERN_INFO"Device Created\n");
	return 0;
}

static void mydriver_exit(void)
{
	device_destroy(myclass,mydev);
	class_destroy(myclass);
	cdev_del(&mycdev);
	unregister_chrdev_region(mydev,1);
	printk(KERN_INFO"Driver Unloaded\n");
}

module_init(mydriver_init);
module_exit(mydriver_exit);
