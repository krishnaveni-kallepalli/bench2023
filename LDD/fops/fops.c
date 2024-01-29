#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/device.h>
#include<linux/fs.h>
#include<linux/cdev.h>
#include<linux/kdev_t.h>
#include<linux/err.h>

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION(" file operations\n");


dev_t dev =0;
static struct class *dev_class;
static struct cdev etx_cdev;

static int      etx_open(struct inode *inode, struct file *file);
static int      etx_release(struct inode *inode, struct file *file);
static ssize_t  etx_read(struct file *file, char __user *buf, size_t len,loff_t * off);
static ssize_t  etx_write(struct file *file, const char *buf, size_t len, loff_t * off);

static struct file_operations fops = 
{
	.owner  = THIS_MODULE,
	.read = etx_read,
	.write = etx_write,
	.open = etx_open,
	.release = etx_release,
};
static int etx_open(struct inode *inode,struct file *file)
{
	printk("open ....\n");
	return 0;
}
static int etx_release(struct inode *inode, struct file *file)
{
	pr_info("Release ..\n");
	return 0;
} 
static ssize_t etx_read(struct file *file,char __user *buf,size_t len,loff_t *off)
{
	pr_info("Read fun...\n");
	return 0;
}
static ssize_t etx_write(struct file *file, const char __user *buf, size_t len,loff_t  *off)
{
	pr_info("Write fun....\n");
	return len;
}
static int __init fun_init(void)
{
	int x = alloc_chrdev_region(&dev,0,1,"etx_cdev");
	if(x<0) pr_info("Cannot allocate major & minor num\n");
	pr_info("Major num : %d\n",MAJOR(dev));
	pr_info("Minor num : %d\n",MINOR(dev));
	
	cdev_init(&etx_cdev,&fops);
	
	if(cdev_add(&etx_cdev,dev,1) < 0)
	{ 
		pr_info("Cnnot allocate device to syatem\n");
		goto r_class;
	}
	if(IS_ERR(dev_class  = class_create(THIS_MODULE,"etx_class")))
	{	
		pr_info("Cannot create dev_class\n");
		goto r_class;
	}
	if(IS_ERR(device_create(dev_class,NULL,dev,NULL,"etx_device")))
	{
		pr_info("Cannot create device 1\n");
		goto r_device;
	}
	
	printk("Inserted Successfully...\n");
	return 0;
	r_device : class_destroy(dev_class);
	r_class:unregister_chrdev_region(dev,1);
			return -1;
}

void __exit fun_exit(void)
{
	device_destroy(dev_class,dev);
	class_destroy(dev_class);
	cdev_del(&etx_cdev);
	unregister_chrdev_region(dev,1);
	printk("Removed ..!\n");
}

module_init(fun_init);
module_exit(fun_exit);
