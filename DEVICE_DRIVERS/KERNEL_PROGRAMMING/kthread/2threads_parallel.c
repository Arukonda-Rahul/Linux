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

static struct task_struct *my_thread1,*my_thread2;


static int thread_function1(void *p)
{
	int i=0;
	while(!kthread_should_stop())
	{
		printk(KERN_INFO"P2:%d\n",i++);	
		usleep_range(1000000,1000001);
	}
	return 0;
}
static int thread_function2(void *p)
{
	int i=0;
	while(!kthread_should_stop())
	{
		printk(KERN_INFO"P1:%d\n",i++);
		usleep_range(1000000,1000001);
	}
	return 0;
}

static int test_init(void)
{
	my_thread1=kthread_run(thread_function1,NULL,"My_Thread1");
	my_thread2=kthread_run(thread_function2,NULL,"My_Thread2");
	return 0;
}
static void test_exit(void)
{
	kthread_stop(my_thread1);
	kthread_stop(my_thread2);
	printk(KERN_INFO"stopping thread\n");
}
module_init(test_init);
module_exit(test_exit);
