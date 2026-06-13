#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/uaccess.h>

#define DRIVER_NAME    "msg"
#define MAX_DEVICES    5
#define MAX_SIZE       1024

MODULE_LICENSE("GPL");

dev_t devicenumber;

static struct class *myclass;

struct my_device {
    struct cdev cdev;
    char buffer[MAX_SIZE];
    int buffer_index;
};

static struct my_device devices[MAX_DEVICES];

static int device_open(struct inode *inode, struct file *file)
{
    struct my_device *dev;

    pr_info("%s called\n", __func__);

    dev = container_of(inode->i_cdev,
                       struct my_device,
                       cdev);

    file->private_data = dev;
    file->f_pos = 0;

    return 0;
}

static int device_release(struct inode *inode, struct file *file)
{
    pr_info("%s called\n", __func__);
    return 0;
}

static ssize_t device_write(struct file *file,
                            const char __user *user_buffer,
                            size_t count,
                            loff_t *offset)
{
    struct my_device *dev = file->private_data;

    size_t available_space;
    size_t bytes_to_write;
    size_t bytes_written;

    pr_info("%s offset=%lld\n", __func__, *offset);

    available_space = MAX_SIZE - *offset;

    bytes_to_write = min(count, available_space);

    if (bytes_to_write == 0)
        return -ENOSPC;

    bytes_written =
        bytes_to_write -
        copy_from_user(dev->buffer + *offset,
                       user_buffer,
                       bytes_to_write);

    *offset += bytes_written;

    if (*offset > dev->buffer_index)
        dev->buffer_index = *offset;

    pr_info("Written: %zu bytes\n", bytes_written);

    return bytes_written;
}

static ssize_t device_read(struct file *file,
                           char __user *user_buffer,
                           size_t count,
                           loff_t *offset)
{
    struct my_device *dev = file->private_data;

    size_t bytes_available;
    size_t bytes_to_read;
    size_t bytes_read;

    pr_info("%s offset=%lld\n", __func__, *offset);

    if (*offset >= dev->buffer_index)
        return 0;

    bytes_available = dev->buffer_index - *offset;

    bytes_to_read = min(count, bytes_available);

    bytes_read =
        bytes_to_read -
        copy_to_user(user_buffer,
                     dev->buffer + *offset,
                     bytes_to_read);

    *offset += bytes_read;

    pr_info("Read: %zu bytes\n", bytes_read);

    return bytes_read;
}

static loff_t device_lseek(struct file *file,
                           loff_t offset,
                           int whence)
{
    loff_t new_pos;

    switch (whence) {
    case SEEK_SET:
        new_pos = offset;
        break;

    case SEEK_CUR:
        new_pos = file->f_pos + offset;
        break;

    case SEEK_END:
        new_pos = MAX_SIZE + offset;
        break;

    default:
        return -EINVAL;
    }

    if (new_pos < 0)
        return -EINVAL;

    if (new_pos > MAX_SIZE)
        new_pos = MAX_SIZE;

    file->f_pos = new_pos;

    return new_pos;
}

static struct file_operations device_fops = {
    .owner   = THIS_MODULE,
    .open    = device_open,
    .release = device_release,
    .read    = device_read,
    .write   = device_write,
    .llseek  = device_lseek,
};

static int __init my_init(void)
{
    int ret;
    int i;
    dev_t dev;

    ret = alloc_chrdev_region(&devicenumber,
                              0,
                              MAX_DEVICES,
                              DRIVER_NAME);

    if (ret < 0) {
        pr_err("alloc_chrdev_region failed\n");
        return ret;
    }

    pr_info("Major number = %d\n",
            MAJOR(devicenumber));

    myclass = class_create("myclass");

    if (IS_ERR(myclass)) {
        unregister_chrdev_region(devicenumber,
                                 MAX_DEVICES);
        return PTR_ERR(myclass);
    }

    for (i = 0; i < MAX_DEVICES; i++) {

        dev = MKDEV(MAJOR(devicenumber), i);

        cdev_init(&devices[i].cdev,
                  &device_fops);

        devices[i].cdev.owner = THIS_MODULE;

        ret = cdev_add(&devices[i].cdev,
                       dev,
                       1);

        if (ret < 0) {
            pr_err("cdev_add failed\n");
            continue;
        }

        device_create(myclass,
                      NULL,
                      dev,
                      NULL,
                      "msg%d",
                      i);

        pr_info("/dev/msg%d created\n", i);
    }

    return 0;
}

static void __exit my_exit(void)
{
    int i;
    dev_t dev;

    for (i = 0; i < MAX_DEVICES; i++) {

        dev = MKDEV(MAJOR(devicenumber), i);

        device_destroy(myclass, dev);

        cdev_del(&devices[i].cdev);
    }

    class_destroy(myclass);

    unregister_chrdev_region(devicenumber,
                             MAX_DEVICES);

    pr_info("Module unloaded\n");
}

module_init(my_init);
module_exit(my_exit);
