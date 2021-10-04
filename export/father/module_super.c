#include<linux/init.h>
#include<linux/module.h>
//use static or no static all OK.
static int version_code =100;
static void show_version_code(void)
{
    printk("Version code in super :%d,\n" ,version_code);
}

 int  uid =199;
void show_uid(void)
{
    printk("uid in super : %d \n",uid);
}

static int init_module_supper(void)
{
    printk("init module supper\n");
    return 0;
}

static void exit_module_supper(void)
{
    printk("exit module supper\n");

}

MODULE_LICENSE("GPL");

EXPORT_SYMBOL(version_code);
EXPORT_SYMBOL(show_version_code);
EXPORT_SYMBOL(uid);
EXPORT_SYMBOL(show_uid);
module_init(init_module_supper);
module_exit(exit_module_supper);