#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/moduleparam.h>


MODULE_LICENSE("GPL");


static bool inv_bool=false;

module_param(inv_bool,invbool,S_IRUGO);


static int entry(void){
	printk(KERN_INFO"%s\n",inv_bool?"true":"false");
	return 0;
}


static void out(void){
	return ;
}

module_init(entry);
module_exit(out);
