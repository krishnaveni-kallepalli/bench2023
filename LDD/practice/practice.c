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

static struct cdev etx_cdev;


static int etx_open(struct inode *inode ,struct file *file);
static int etx_release(struct inode *inode , struct file *file);
static ssize_t etx_read(struct file *file,char __user *buf, size_t len,loff_t *off);
static ssize_t etx_write(struct file *file, const char __user *buf, size_t len,loff_t *off);


static struct file_operations fops=
{
	.open = etx_open,
	.release = etx_release,
	.owner = THIS_MODULE,
	.read = etx_read,
	.write = etx_write,
};

static int etx_open(struct inode *inode, struct file *file)
{
	pr_info("open..!\n");
	return 0;
}
static int etx_release(struct inode *inode,struct file *file)
{
	pr_info("Release..\n");
	return 0;
}
static ssize_t etx_read(struct file *file, char __user *buf, size_t len,loff_t *off)
{
	pr_info("Read...\n");
	return 0;
}
static ssize_t etx_write(struct file *file,const char __user *buf,size_t len,loff_t *off)
{
	pr_info("Write..\n");
	return len;
}
static int __init fun_init(void)
{
	if(alloc_chrdev_region(&dev,0,1,"chrdev_2")<0)
		pr_info("Cannot alloc maj & min no\n");
		printk("%d %d",MAJOR(dev),MINOR(dev));
		
	cdev_init(&etx_cdev,&fops);
	if(cdev_add(&etx_cdev,dev,1)<0)
	{
		pr_info("Cannot add to system\n");
		goto r_class;
	}
	
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
	
	r_class : 
		class_destroy(dev_class);
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
