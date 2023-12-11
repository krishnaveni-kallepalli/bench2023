#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>

MODULE_LICENSE("GPL");
MODULE_LICENSE("GPL V2");
MODULE_LICENSE("Dual BSP/GPL");

MODULE_AUTHOR("krishna");
MODULE_DESCRIPTION("Basic driver code with print statement for inserting and removing module");
MODULE_VERSION("2:1.0");

static int __init basic_driver_init(void)
{
	printk(KERN_INFO "Hello....!\n\nMODULE INSERTED..\n\n");
	printk(KERN_INFO "Success....................!\n");
	return 0;
}
module_init(basic_driver_init);

static void __exit basic_driver_exit(void)
{
	printk(KERN_INFO "Bye..........!\n\nMODULE REMOVED...\n\n");
}
module_exit(basic_driver_exit);
