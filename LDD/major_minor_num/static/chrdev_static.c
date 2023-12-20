#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/fs.h>

MODULE_LICENSE("GPL");

MODULE_DESCRIPTION("Charecter Driver allocating major and minor nums\n");


dev_t dev = MKDEV(256,1);

static int __init fun_init(void)
{
	register_chrdev_region(dev, 1, "Static_chardev");
	printk("Major number:%d\n",MAJOR(dev));
	printk("Minor number:%d\n",MINOR(dev));
	printk("Successfully Inserted\n");
	return 0;
}
	
void __exit fun_exit(void)
{
	unregister_chrdev_region(dev,1);
	printk("removed...!\n");
}

module_init(fun_init);
module_exit(fun_exit);
