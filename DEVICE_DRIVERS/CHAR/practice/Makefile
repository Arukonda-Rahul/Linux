#obj-m += ex.o
#obj-m += own2.o
obj-m +=char_driver.o
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
 
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
