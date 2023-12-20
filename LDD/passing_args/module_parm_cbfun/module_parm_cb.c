#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/moduleparam.h>

MODULE_LICENSE("GPL");

MODULE_DESCRIPTION("cb is used \
when we are using module param and change value \
changes cannot be seen after changing \
so we use callback function to get notified about updated value\n");

MODULE_VERSION("2:1.0");

int val = 23;
int cb_val = 0;
module_param(val,int,S_IWUSR|S_IRUSR);

int notify_param()
const struct kernel_param_ops param_ops=
{
	.set  = &notify_param;
	.get - &param_get_init;	
}
module_param_cb(cb_val,int,&
static int __init cb_init(void)
{
	printk(KERN_INFO "Value is :");
	printk("%d",val);
	return 0;
}
module_init(cb_init);

void __exit cb_exit(void)
{
	printk(KERN_INFO "Done ...!\n");
}
module_exit(cb_exit);
