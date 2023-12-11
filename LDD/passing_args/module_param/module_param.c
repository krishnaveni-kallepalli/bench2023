#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/moduleparam.h>

MODULE_VERSION("GPL");
MODULE_VERSION("Dual BSP/GPL");
MODULE_VERSION("GPL v2");

MODULE_DESCRIPTION("PASSING Arguments to the function using inbuilt macros\n");

MODULE_VERSION("2:1.0");

int value = 23;

module_param(value,int,S_IRUSR|S_IWUSR);

static int __init passing_args_init(void)
{
	printk(KERN_INFO "Module Inserted..\n");
	printk("Value:%d\n",value);
	return 0;
}
module_init(passing_args_init);

void __exit passing_args_exit(void)
{
	printk(KERN_INFO "Remove module\n");
}
module_exit(passing_args_exit);k
