#include<linux/init.h>
#include<linux/module.h>
extern int version_code;
extern int uid;
extern void show_version_code(void);
static int son_init(void)
{
    printk("init son\n");
    printk("son module version code is %d \n",version_code);
    version_code =101;
    printk("change version code in son \n");
    show_version_code();
    printk("son module uid is %d \n",uid);
    uid =9999;
     printk("son module uid  after change is %d \n",uid);
    return 0;
}

static void son_exit(void)
{
    printk("son exit");
}
MODULE_LICENSE("GPL");

module_init(son_init);
module_exit(son_exit);