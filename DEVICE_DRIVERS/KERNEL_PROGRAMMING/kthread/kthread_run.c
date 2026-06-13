#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/module.h>
#include<linux/kdev_t.h>
#include<linux/delay.h>
#include<linux/sched.h>
#include<linux/device.h>
#include<linux/uaccess.h>
#include<linux/kthread.h>
#include<linux/slab.h>
#include<linux/fs.h>
#include<linux/cdev.h>


MODULE_LICENSE("GPL");

static struct task_struct *my_thread;


static int thread_function(void *p)
{
	int i=0;
	while(!kthread_should_stop())
	{
		struct task_struct *task_list;
		for_each_process(task_list)
		{
		    pr_info("Process:%s PID:%d\n", task_list->comm, task_list->pid);
		}
		msleep(1000);
	}
	return 0;
}

static int test_init(void)
{
	my_thread=kthread_run(thread_function,NULL,"My_Thread");
	return 0;
}
static void test_exit(void)
{
	kthread_stop(my_thread);
	printk(KERN_INFO"stopping thread\n");
}
module_init(test_init);
module_exit(test_exit);
