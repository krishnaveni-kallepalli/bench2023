#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/fs.h>
#include<linux/kdev_t.h>
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("allocating major & minor number dynamically\n");

dev_t dev = 0;
static int __init fun_init(void)
{
	int x = alloc_chrdev_region(&dev,0,1,"Dynamic chrdev");
	if(x<0)
	{
		printk("Cannot allocate\n");
		return -1;
	}

	printk("Major.no:%d\n",MAJOR(dev));
	printk("Minor.no:%d\n",MINOR(dev));
	printk("Inserted...\n");
	return 0;
}
void __exit fun_exit(void)
{
	unregister_chrdev_region(dev,1);
	printk("Removed...!");
}
module_init(fun_init);
module_exit(fun_exit);
