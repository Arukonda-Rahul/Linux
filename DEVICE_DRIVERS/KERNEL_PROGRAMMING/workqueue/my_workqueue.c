#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/workqueue.h>

/* Work function */
static void my_work_fn(struct work_struct *work)
{
    printk(KERN_INFO "Workqueue: Running in process context\n");
}

/* Declare work */
static DECLARE_WORK(my_work, my_work_fn);

static int __init my_init(void)
{
    printk(KERN_INFO "Module loaded\n");

    /* Schedule work */
    schedule_work(&my_work);

    return 0;
}

static void __exit my_exit(void)
{
    printk(KERN_INFO "Module removed\n");
}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");
