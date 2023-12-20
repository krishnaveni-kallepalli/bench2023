#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/fs.h>
#include<linux/kdev_t.h>

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Creating a chrdev\
allocating major and minor no.\
creating device file for the driver code Manually");

dev_t dev = 0;

static int __init fun_init(void)
{
	
	if(alloc_chrdev_region(&dev,0,2,"Creating_devfile") <0)
	{
		printk("Cannot allocate\n");
		return -1;
	}
	printk("major.no:%d\n",MAJOR(dev));
	printk("Minor.no:%d\n",MINOR(dev));
	printk("Inserted Successfully\n");
	return 0;
}
void __exit fun_exit(void)
{
	unregister_chrdev_region(dev,2);
	printk("Removed successfully\n");
}
module_init(fun_init);
module_exit(fun_exit);


