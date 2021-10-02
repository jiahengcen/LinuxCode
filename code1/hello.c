

#include<linux/init.h>
#include<linux/module.h>
MODULE_LICENSE("GPL");
static   int init_hello(void)
{
    printk("init hello\n");
    return 0;
}

static  void exit_hello(void)
{
    printk("exit hello\n");
}

module_init(init_hello);
module_exit(exit_hello);