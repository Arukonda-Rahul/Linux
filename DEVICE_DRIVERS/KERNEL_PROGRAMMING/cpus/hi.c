#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/init.h>
#include<linux/cpu.h>

MODULE_LICENSE("GPL");

static int _cpu_init(void)
{
	int online,possible,present;
	online=num_online_cpus();
	possible=num_possible_cpus();
	present=num_present_cpus();
	printk("no of online cpus:%d\n",online);
	printk("no of possible cpus:%d\n",possible);
	printk("no of present cpus:%d\n",present);
	return 0;
}

static void _cpu_exit(void){}

module_init(_cpu_init);
module_exit(_cpu_exit);
