#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/moduleparam.h>


MODULE_LICENSE("GPL");

int param_array[6];

static int count=0;

module_param_array(param_array,int,&count,S_IRUSR|S_IWUSR);


static int entry(void){
	int i;
	printk(KERN_INFO"argc_count:%d\n",count);
	for(i=0;i<sizeof(param_array)/sizeof(param_array[0]);i++){
		printk("%d:%d\n",i,param_array[i]);
	}
	return 0;
}


static void out(void){
	printk(KERN_INFO"%s:Bye\n",__func__);
}




module_init(entry);
module_exit(out);

