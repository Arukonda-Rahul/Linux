#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/sched.h>

MODULE_LICENSE("GPL");

static int __init task_info_init(void)
{
    struct task_struct *task = current;

    printk(KERN_INFO "Process Info:\n");
    printk(KERN_INFO "PID  : %d\n", task->pid);
    printk(KERN_INFO "Comm : %s\n", task->comm);

    if (task->real_parent)
        printk(KERN_INFO "PPID : %d\n", task->real_parent->pid);

    printk(KERN_INFO "State: %ld\n", task->__state);

    return 0;
}

static void __exit task_info_exit(void)
{
    printk(KERN_INFO "task module exit\n");
}

module_init(task_info_init);
module_exit(task_info_exit);
