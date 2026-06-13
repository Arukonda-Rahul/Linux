obj-m += new.o
#ccflags-y := -DDEBUG
#ccflags-y += -g -O0
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
