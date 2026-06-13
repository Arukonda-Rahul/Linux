#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/uaccess.h>

#define MAX_DEVICES 3
#define MAX_SIZE    1024

MODULE_LICENSE("GPL");

static dev_t devicenumber;

static struct cdev mycdev[MAX_DEVICES];
static struct class *myclass;

/* SHARED BUFFER */
static char kernel_buffer[MAX_SIZE];
static int buffer_size;

static int device_open(struct inode *inode,
                       struct file *file)
{
    pr_info("device_open\n");

    file->f_pos = 0;

    return 0;
}

static int device_release(struct inode *inode,
                          struct file *file)
{
    pr_info("device_release\n");

    return 0;
}

static ssize_t device_write(struct file *file,
                            const char __user *user_buffer,
                            size_t count,
                            loff_t *offset)
{
    size_t to_write;

    pr_info("device_write\n");

    to_write = min(count, (size_t)MAX_SIZE);

    if (copy_from_user(kernel_buffer,
                       user_buffer,
                       to_write))
        return -EFAULT;

    buffer_size = to_write;

    return to_write;
}

static ssize_t device_read(struct file *file,
                           char __user *user_buffer,
                           size_t count,
                           loff_t *offset)
{
    size_t to_read;

    pr_info("device_read\n");

    if (*offset >= buffer_size)
        return 0;

    to_read = min(count,
                  (size_t)(buffer_size - *offset));

    if (copy_to_user(user_buffer,
                     kernel_buffer + *offset,
                     to_read))
        return -EFAULT;

    *offset += to_read;

    return to_read;
}

static struct file_operations fops = {
    .owner   = THIS_MODULE,
    .open    = device_open,
    .release = device_release,
    .read    = device_read,
    .write   = device_write,
};

static int __init my_init(void)
{
    int i;
    dev_t dev;

    alloc_chrdev_region(&devicenumber,
                        0,
                        MAX_DEVICES,
                        "msg");

    myclass = class_create("myclass");

    for (i = 0; i < MAX_DEVICES; i++) {

        dev = MKDEV(MAJOR(devicenumber), i);

        cdev_init(&mycdev[i], &fops);

        cdev_add(&mycdev[i], dev, 1);

        device_create(myclass,
                      NULL,
                      dev,
                      NULL,
                      "msg%d",
                      i);
    }

    pr_info("Driver loaded\n");

    return 0;
}

static void __exit my_exit(void)
{
    int i;
    dev_t dev;

    for (i = 0; i < MAX_DEVICES; i++) {

        dev = MKDEV(MAJOR(devicenumber), i);

        device_destroy(myclass, dev);

        cdev_del(&mycdev[i]);
    }

    class_destroy(myclass);

    unregister_chrdev_region(devicenumber,
                             MAX_DEVICES);

    pr_info("Driver unloaded\n");
}

module_init(my_init);
module_exit(my_exit);
