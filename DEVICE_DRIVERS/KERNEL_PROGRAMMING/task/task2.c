#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/sched.h>
#include<linux/init.h>

MODULE_LICENSE("GPL");

static int task_init(void)
{
	struct task_struct *task;
	task=current;
	printk("current process:%s\n",task->comm);
	printk("current process pid:%d\n",task->pid);
	printk("process state:%ld\n",task->__state);
	printk(KERN_INFO "State: %c\n", task_state_to_char(task));
	if(task->real_parent)
	{
		printk("process parent ppid:%d\n",task->real_parent->pid);
	}
	return 0;
}

static void task_exit(void){}

module_init(task_init);
module_exit(task_exit);
