#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");

static int __init crash_init(void)
{
    int *ptr = NULL;

    printk("About to crash\n");

    *ptr = 42;   // NULL pointer dereference

    return 0;
}

static void __exit crash_exit(void)
{
    printk("exit\n");
}

module_init(crash_init);
module_exit(crash_exit);
