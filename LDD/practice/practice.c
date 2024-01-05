#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/kthread.h>
#include<linux/fs.h>
#include<linux/kdev_t.h>
#include<linux/err.h>
#include<linux/cdev.h>
//https://www.interviewbit.com/cpp-interview-questions/#difference-between-c-and-c++



MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Practice all\n");

dev_t dev = 0;
static struct class *dev_class;
struct class cdev etx_cdev;
static int __init fun_init(void)
{
	if(alloc_chrdev_region(&dev,0,1,"chrdev_2")<0)
		pr_info("Cannot alloc maj & min no\n");
		printk("%d %d",MAJOR(dev),MINOR(dev));
		
	cdev_init(&cdev,&fops);
	if(IS_ERR(cdev_add(
	
	dev_class = class_create(THIS_MODULE,"etx_class");
	if(IS_ERR(dev_class))
	{
		pr_err("Cannot create class\n");
		goto r_class;
	}
	if(IS_ERR(device_create(dev_class,NULL,dev,NULL,"etx_device")))
	{
		pr_err("Cannot create device\n");
		goto r_device;
	}
	pr_info("Module Inserted Successfully\n");
	return 0;
	r_class : class_destroy(dev_class);
	r_device:
	unregister_chrdev_region(dev,1);
	return -1;
}
static void __exit fun_exit(void)
{
	device_destroy(dev_class,dev);
	class_destroy(dev_class);
	unregister_chrdev_region(dev,1);
	pr_info("Module removed...!\n");
}
module_init(fun_init);
module_exit(fun_exit);
