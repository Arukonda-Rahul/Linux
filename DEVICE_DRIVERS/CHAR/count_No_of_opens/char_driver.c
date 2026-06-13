#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/uaccess.h>

#define DRIVER_NAME "my_own_char"

static dev_t dev_num;
static struct cdev my_cdev;
static struct class *dev_class;

char kernel_buffer[1024];

/* ---------- File Operations ---------- */
static int device_opened;

static int my_open(struct inode *inode, struct file *file)
{
    printk(KERN_INFO "Device Opened\n");
    device_opened++;

    return 0;
}

static int my_release(struct inode *inode, struct file *file)
{
    printk(KERN_INFO "Device Closed\n");
    printk("Device Opened:%d\times\n",device_opened);
    return 0;
}

static ssize_t my_read(struct file *file, char __user *buf,
                       size_t len, loff_t *off)
{
    size_t buffer_size = strlen(kernel_buffer);
    size_t to_copy;

    /* EOF condition */
    if (*off >= buffer_size)
        return 0;

    /* Limit copy size */
    to_copy = min(len, buffer_size - *off);

    /* Copy data safely */
    if (copy_to_user(buf, kernel_buffer + *off, to_copy))
        return -EFAULT;

    /* Update offset */
    *off += to_copy;

    printk(KERN_INFO "Read %zu bytes\n", to_copy);

    return to_copy;
}

static ssize_t my_write(struct file *file, const char __user *buf, size_t len, loff_t *off)
{
    copy_from_user(kernel_buffer, buf, len);
    printk(KERN_INFO "Data Written\n");
    return len;
}

/* ---------- File operations structure ---------- */

static struct file_operations fops = {
    .owner = THIS_MODULE,
    .open = my_open,
    .release = my_release,
    .read = my_read,
    .write = my_write,
};

/* ---------- Init ---------- */

static int __init char_init(void)
{
    /* Allocate device number */
    alloc_chrdev_region(&dev_num, 0, 1, DRIVER_NAME);

    printk(KERN_INFO "Major = %d Minor = %d\n", MAJOR(dev_num), MINOR(dev_num));

    /* Initialize cdev */
    cdev_init(&my_cdev, &fops);

    /* Add cdev to kernel */
    cdev_add(&my_cdev, dev_num, 1);

    /* Create class */
    dev_class = class_create("dev_class");


   /*struct device *device_create(const struct class *class, struct device *parent,
			     dev_t devt, void *drvdata, const char *fmt, ...) */

    /* Create device (/dev/mychardev) */
    device_create(dev_class, NULL, dev_num, NULL, DRIVER_NAME);

    printk(KERN_INFO "Driver Loaded\n");
    return 0;
}

/* ---------- Exit ---------- */

static void __exit char_exit(void)
{
    device_destroy(dev_class, dev_num);
    class_destroy(dev_class);
    cdev_del(&my_cdev);
    unregister_chrdev_region(dev_num, 1);

    printk(KERN_INFO "Driver Unloaded\n");
}

module_init(char_init);
module_exit(char_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Rahul");
MODULE_DESCRIPTION("Basic Character Driver");
