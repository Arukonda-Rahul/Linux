obj-m += print_processor_id.o
#obj-m += No_kthread_stop.o
#obj-m += no_kthread_should_stop.o
#obj-m += 2threads_parallel.o
#obj-m += kthread_create.o
#obj-m += kthread_run.o
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
