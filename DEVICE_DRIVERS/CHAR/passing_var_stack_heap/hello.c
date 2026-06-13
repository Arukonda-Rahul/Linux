#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/kdev_t.h>
#include <linux/fs.h>
#include <linux/device.h>
#include <linux/cdev.h>
#include <linux/uaccess.h>
#include "mystruct.h"

int base_minor = 0;
char *device_name = "mystruct";
int count = 1;
dev_t devicenumber;
abc kernel_struct;
char kernel_buffer[100];


static struct class *class = NULL;
static struct device *device = NULL;
static struct cdev mycdev;

MODULE_LICENSE("GPL");

static int device_open(struct inode *inode, struct file *file)
{
	pr_info("%s\n", __func__);
	return 0;
}

static int device_release(struct inode *inode, struct file *file)
{
	pr_info("%s\n", __func__);
        return 0;
}
static ssize_t device_read(struct file *file,
                           char __user *user_buffer,
                           size_t count,
                           loff_t *offset)
{
    abc temp;
    int retval;

    /* Step 1: get user struct safely */
    retval = copy_from_user(&temp,
                            user_buffer,
                            sizeof(temp));

    if (retval)
        return -EFAULT;

    /* Step 2: copy integer back */
    temp.i = kernel_struct.i;

    retval = copy_to_user(user_buffer,
                          &temp,
                          sizeof(temp));

    if (retval)
        return -EFAULT;

    /* Step 3: copy actual string */
    retval = copy_to_user(temp.str,
                          kernel_buffer,
                          strlen(kernel_buffer) + 1);

    if (retval)
        return -EFAULT;

    return sizeof(temp);
}

static ssize_t device_write(struct file *file, const char __user *user_buffer,
                       size_t count, loff_t *offset)
{
	int retval;
	int string_length = 0;


	retval = copy_from_user(&kernel_struct, user_buffer, count);
	pr_info("%s: Copy from user returned:%d\n", __func__, retval);
	string_length = strnlen_user(kernel_struct.str, 100);
	retval = copy_from_user(&kernel_buffer, kernel_struct.str, string_length);
	pr_info("%s: Length:%d\n", __func__, string_length);
	pr_info("%s:int:%d\t str:%s\t Count:%lu \t offset:%llu\n", __func__, kernel_struct.i,
			kernel_buffer, count, *offset);
        return count;
}



struct file_operations device_fops = {
	.read = device_read,
	.write = device_write,
	.open = device_open,
	.release = device_release
};

static int test_hello_init(void)
{
    if (alloc_chrdev_region(&devicenumber, base_minor, count, device_name) < 0) {
        pr_err("Device number registration Failed\n");
        return -1;
    }

    pr_info("Major number: %d\n", MAJOR(devicenumber));

    class = class_create("myclass");
    if (IS_ERR(class)) {
        pr_err("class_create failed\n");
        unregister_chrdev_region(devicenumber, count);
        return PTR_ERR(class);
    }

    device = device_create(class, NULL, devicenumber, NULL, "mystruct");
    if (IS_ERR(device)) {
        pr_err("device_create failed\n");
        class_destroy(class);
        unregister_chrdev_region(devicenumber, count);
        return PTR_ERR(device);
    }

    cdev_init(&mycdev, &device_fops);
    mycdev.owner = THIS_MODULE;

    if (cdev_add(&mycdev, devicenumber, count) < 0) {
        pr_err("cdev_add failed\n");
        device_destroy(class, devicenumber);
        class_destroy(class);
        unregister_chrdev_region(devicenumber, count);
        return -1;
    }

    return 0;
}


static void test_hello_exit(void)
{
	device_destroy(class, devicenumber);
        class_destroy(class);
	cdev_del(&mycdev);
	unregister_chrdev_region(devicenumber, count);
}

module_init(test_hello_init);
module_exit(test_hello_exit);

