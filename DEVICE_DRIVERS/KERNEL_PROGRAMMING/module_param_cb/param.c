#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/moduleparam.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Rahul");
MODULE_DESCRIPTION("module_param_cb using kernel helpers");

/* actual variable */
static int value = 0;

/* ================= OPS USING KERNEL HELPERS ================= */
static struct kernel_param_ops my_ops = {
    .set = param_set_int,
    .get = param_get_int,
};

/* ================= REGISTER PARAM ================= */
module_param_cb(myparam, &my_ops, &value, 0644);

/* ================= INIT ================= */
static int __init test_init(void)
{
    printk(KERN_INFO "Module loaded\n");
    printk(KERN_INFO "Initial value = %d\n", value);
    return 0;
}

/* ================= EXIT ================= */
static void __exit test_exit(void)
{
    printk(KERN_INFO "Module unloaded\n");
}

module_init(test_init);
module_exit(test_exit);
