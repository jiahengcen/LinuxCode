ifneq ($(KERNELRELEASE),)
obj-m:=module_use.o
else
KDIR :=/lib/modules/$(shell uname -r)/build
PWD :=$(shell pwd)

all:
	make -C $(KDIR) M=$(PWD) modules
clean:
	rm -r *.o  
endif	
