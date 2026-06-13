#include <linux/kobject.h>
#include <linux/sysfs.h>
#include <linux/module.h>

static struct kobject *my_kobj;

static int __init my_init(void)
{
    my_kobj = kobject_create_and_add("my_kobject", kernel_kobj);
    return 0;
}

static void __exit my_exit(void)
{
    kobject_put(my_kobj);
}

module_init(my_init);
module_exit(my_exit);
MODULE_LICENSE("GPL");
