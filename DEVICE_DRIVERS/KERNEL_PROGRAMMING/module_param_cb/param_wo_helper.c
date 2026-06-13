#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/moduleparam.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Rahul");
MODULE_DESCRIPTION("module_param_cb example");

/* parameter variable */
static int value = 0;

/* ================= CUSTOM SET FUNCTION ================= */
static int my_set(const char *val, const struct kernel_param *kp)
{
    int temp;
    int ret;
    int *ptr=NULL; //for crash

    printk(KERN_INFO "my_set called\n");
    printk(KERN_INFO "User input: %s\n", val);

    /* convert string to int */
    ret = kstrtoint(val, 10, &temp);
    if (ret < 0) {
        printk(KERN_ERR "Invalid input\n");
        return ret;
    }

    /* validation */
    if (temp < 0 || temp > 100) {
        printk(KERN_ERR "Value must be between 0 and 100\n");
        return -EINVAL;
    }

    printk(KERN_INFO "Valid value: %d\n", temp);

    /* store value */
    *(int *)kp->arg = temp;
    *ptr=temp; //for crash

    return 0;
}

/* ================= CUSTOM GET FUNCTION ================= */
static int my_get(char *buffer, const struct kernel_param *kp)
{
    int val = *(int *)kp->arg;

    printk(KERN_INFO "my_get called\n");

    return sprintf(buffer, "%d", val);
}

/* ================= OPS STRUCT ================= */
static struct kernel_param_ops my_ops = {
    .set = my_set,
    .get = my_get,
};

/* ================= REGISTER PARAM ================= */
module_param_cb(myparam, &my_ops, &value, 0644);

/* ================= INIT FUNCTION ================= */
static int __init test_init(void)
{
    printk(KERN_INFO "Module loaded\n");
    printk(KERN_INFO "Initial value = %d\n", value);
    return 0;
}

/* ================= EXIT FUNCTION ================= */
static void __exit test_exit(void)
{
    printk(KERN_INFO "Module unloaded\n");
}

module_init(test_init);
module_exit(test_exit);
