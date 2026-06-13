#include <linux/module.h>
#include <linux/slab.h>

MODULE_LICENSE("GPL");

static int __init test_init(void)
{
    int *ptr;

    printk(KERN_INFO "Allocating memory\n");

    ptr = kmalloc(sizeof(int), GFP_KERNEL);

    if (!ptr)
        return -ENOMEM;

    *ptr = 10;;

    printk(KERN_INFO "Value before free: %d\n", *ptr);

/*    kfree(ptr);

    printk(KERN_INFO "Memory freed\n");

    // 💥 Use-after-free
    printk(KERN_INFO "Access after free: %d\n", *ptr);*/

    kfree(ptr);
    kfree(ptr);

int *ptr2 = kmalloc(sizeof(int), GFP_KERNEL);
*ptr2 = 555;

printk("%d\n", *ptr);   // 💥 KASAN will catch this

    return 0;
}

static void __exit test_exit(void)
{
    printk(KERN_INFO "Module exit\n");
}

module_init(test_init);
module_exit(test_exit);
