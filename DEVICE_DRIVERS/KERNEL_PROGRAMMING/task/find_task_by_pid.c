#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/sched.h>
#include <linux/pid.h>

MODULE_LICENSE("GPL");

static int pid = 1;
module_param(pid, int, 0644);

static int __init find_task_init(void)
{
    struct task_struct *task;

    task = pid_task(find_vpid(pid), PIDTYPE_PID);

    if (!task) {
        printk(KERN_INFO "No task found\n");
        return -ESRCH;
    }

    printk(KERN_INFO "PID: %d\n", task->pid);
    printk(KERN_INFO "COMM: %s\n", task->comm);

    return 0;
}

static void __exit find_task_exit(void) {}

module_init(find_task_init);
module_exit(find_task_exit);
