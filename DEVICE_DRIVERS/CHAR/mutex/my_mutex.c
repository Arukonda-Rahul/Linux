#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/kdev_t.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/uaccess.h>
#include <linux/mutex.h>
#include <linux/string.h>

MODULE_LICENSE("GPL");

#define DEVICE_NAME "my_driver"

static dev_t mydev;
static struct cdev mycdev;
static struct class *myclass;

/* Shared buffer */
static char kernel_buffer[1024];

/* Mutex to protect shared data */
static DEFINE_MUTEX(my_lock);

/* ---------------- Open ---------------- */
static int my_open(struct inode *inode, struct file *file)
{
    printk(KERN_INFO "Device Opened\n");
    return 0;
}

/* ---------------- Release ---------------- */
static int my_release(struct inode *inode, struct file *file)
{
    printk(KERN_INFO "Device Released\n");
    return 0;
}

/* ---------------- Write ---------------- */
static ssize_t my_write(struct file *file,
                        const char __user *buf,
                        size_t len,
                        loff_t *off)
{
    size_t to_copy;

    mutex_lock(&my_lock);

    /* Keep one byte for NULL terminator */
    to_copy = min(len, sizeof(kernel_buffer) - 1);

    if (copy_from_user(kernel_buffer, buf, to_copy)) {
        mutex_unlock(&my_lock);
        return -EFAULT;
    }

    kernel_buffer[to_copy] = '\0';

    printk(KERN_INFO "Data Written: %zu bytes\n", to_copy);

    mutex_unlock(&my_lock);

    return to_copy;
}

/* ---------------- Read ---------------- */
static ssize_t my_read(struct file *file,
                       char __user *buf,
                       size_t len,
                       loff_t *off)
{
    size_t buffer_size;
    size_t to_copy;

    mutex_lock(&my_lock);

    buffer_size = strlen(kernel_buffer);

    /* EOF */
    if (*off >= buffer_size) {
        mutex_unlock(&my_lock);
        return 0;
    }

    /* Copy only requested/available bytes */
    to_copy = min(len, buffer_size - *off);

    if (copy_to_user(buf, kernel_buffer + *off, to_copy)) {
        mutex_unlock(&my_lock);
        return -EFAULT;
    }

    *off += to_copy;

    printk(KERN_INFO "Data Read: %zu bytes\n", to_copy);

    mutex_unlock(&my_lock);

    return to_copy;
}

/* ---------------- File Operations ---------------- */
static struct file_operations fops = {
    .owner   = THIS_MODULE,
    .open    = my_open,
    .read    = my_read,
    .write   = my_write,
    .release = my_release,
};

/* ---------------- Init ---------------- */
static int __init mydriver_init(void)
{
    int ret;

    ret = alloc_chrdev_region(&mydev, 0, 1, DEVICE_NAME);
    if (ret < 0) {
        printk(KERN_ERR "Device number allocation failed\n");
        return ret;
    }

    printk(KERN_INFO "Major:%d Minor:%d\n",
           MAJOR(mydev), MINOR(mydev));

    cdev_init(&mycdev, &fops);

    ret = cdev_add(&mycdev, mydev, 1);
    if (ret < 0) {
        unregister_chrdev_region(mydev, 1);
        return ret;
    }

    myclass = class_create(DEVICE_NAME);
    if (IS_ERR(myclass)) {
        cdev_del(&mycdev);
        unregister_chrdev_region(mydev, 1);
        return PTR_ERR(myclass);
    }

    if (IS_ERR(device_create(myclass, NULL, mydev, NULL, DEVICE_NAME))) {
        class_destroy(myclass);
        cdev_del(&mycdev);
        unregister_chrdev_region(mydev, 1);
        return -1;
    }

    printk(KERN_INFO "Driver Loaded Successfully\n");
    return 0;
}

/* ---------------- Exit ---------------- */
static void __exit mydriver_exit(void)
{
    device_destroy(myclass, mydev);
    class_destroy(myclass);
    cdev_del(&mycdev);
    unregister_chrdev_region(mydev, 1);

    printk(KERN_INFO "Driver Unloaded\n");
}

module_init(mydriver_init);
module_exit(mydriver_exit);
