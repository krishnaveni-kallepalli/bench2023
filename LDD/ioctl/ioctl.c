#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/kdev_t.h>
#include<linux/fs.h>
#include<linux/ioctl.h>
#include <linux/err.h>
#include<linux/cdev.h>
#include<linux/uaccess.h>    
#include <linux/device.h>
#include<linux/ioctl.h>

#define WR_VALUE  _IOW('a','a',int)
#define RD_VALUE _IOR('b','b',int)
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION(" IOCTL calls for comm btw usr and kernel space\n");


int32_t val = 32;
dev_t dev = 0;

static struct class *dev_class;
static struct cdev etx_cdev;

static int      etx_open(struct inode *inode, struct file *file);
static int      etx_release(struct inode *inode, struct file *file);
static ssize_t  etx_read(struct file *filp, char __user *buf, size_t len,loff_t * off);
static ssize_t  etx_write(struct file *filp, const char *buf, size_t len, loff_t * off);
static long     etx_ioctl(struct file *file, unsigned int cmd, unsigned long arg);

static struct file_operations fops = 
{
	.owner = THIS_MODULE,
	.open  = etx_open,
	.release = etx_release,
	.unlocked_ioctl = etx_ioctl,
	.read = etx_read,
	.write = etx_write,
};


static int etx_open(struct inode *inode, struct file *file)
{
	pr_info("File open success..\n");
	return 0;
}

static int etx_release(struct inode *inode,struct file *file)
{
	pr_info("File release success...\n");
	return 0;
}
static ssize_t etx_read(struct file *file, char __user *buf, size_t len, loff_t *off)
{
	pr_info("File read.....\n");
	return 0;
}
static ssize_t etx_write(struct file *file,const char __user *buf, size_t len,loff_t *off)
{
	pr_info("File write...\n");
	return 0; 
}
static long etx_ioctl(struct file *file,unsigned int cmd,unsigned long arg)
{
	switch(cmd)
	{
		case WR_VALUE:
		if(copy_from_user(&val,(int32_t *) arg,	sizeof(val)))
		{
			pr_err("Data write : ERROR!\n");
		}
		pr_info("VAlue : %d\n",val);
		break;
		case RD_VALUE:
		if(copy_to_user((int32_t *) arg,&val,sizeof(val)))
		{
			pr_err("Data read : ERROR!\n");
		}
		break;
		default : pr_info ("Default\n");
		break;
	}
	return 0;
}
static int __init fun_init(void)
{
	if(alloc_chrdev_region(&dev,0,1,"ioctl_calls") <0)
	{
		pr_info("Cannot allocate major & minor number\n");
		return -1;
	}
	pr_info("MAjor num:%d\n",MAJOR(dev));
	pr_info("MInor num:%d\n",MINOR(dev));
	
	cdev_init(&etx_cdev,&fops);
	
	if(cdev_add(&etx_cdev,dev,1) <0)
	{
		pr_info("Cannot allocate device to system\n");
		goto r_class;
	}
	if(IS_ERR(dev_class = class_create(THIS_MODULE,"etx_class")))
	{	
		pr_info("Cannot create dev_class \n");
		goto r_class;
	}
	if(IS_ERR(device_create(dev_class,NULL,dev,NULL,"etx_device")))
	{
		pr_info("cannot create device \n");
		goto r_device;
	}
	pr_info("Inserted successfullt..\n");
	return 0;
	r_class: class_destroy(dev_class);
	r_device:
			unregister_chrdev_region(dev,1);
			return -1;
	
}


void __exit fun_exit(void)
{
	class_destroy(dev_class);
	device_destroy(dev_class,dev);
	cdev_del(&etx_cdev);
	unregister_chrdev_region(dev,1);
	pr_info("Remnoved...\n");
}

module_init(fun_init);	
module_exit(fun_exit);
