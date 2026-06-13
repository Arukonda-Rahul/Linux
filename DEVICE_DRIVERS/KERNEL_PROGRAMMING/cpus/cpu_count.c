#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/cpu.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Rahul");
MODULE_DESCRIPTION("Print number of CPUs");

static int __init cpu_count_init(void)
{
    int online, possible, present;

    online  = num_online_cpus();
    possible = num_possible_cpus();
    present = num_present_cpus();

    printk(KERN_INFO "CPU Info:\n");
    printk(KERN_INFO "Online CPUs  : %d\n", online);
    printk(KERN_INFO "Possible CPUs: %d\n", possible);
    printk(KERN_INFO "Present CPUs : %d\n", present);

    return 0;
}

static void __exit cpu_count_exit(void)
{
    printk(KERN_INFO "CPU module exiting\n");
}

module_init(cpu_count_init);
module_exit(cpu_count_exit);
