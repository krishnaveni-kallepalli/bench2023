#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>
#include<moduleparam.h>


MODULE_VERSION("2:1.0");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("callabcks");


static int __init fun_init()
{
	int 
	return 0;
}
void __exit fun_exit()
{
}

module_init(fun_init);
module_exit(fun_exit);
