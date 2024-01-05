#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/ioctl.h>
#include<linux/fs.h>
#include<linux/kdev_t.h>
#include<linux/cdev.h>
#include<linux/err.h>
#include<linux/proc_fs.h>
#include<linux/slab.h>      
#include<linux/uaccess.h> 
#include<linux/device.h>

#define WR_VALUE _IOW('a','a',int32_t *)
#define RD_VALUE _IOR('b','b',int32_t *)



MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("create procfs entry\n"); 

int32_t val;
char etx_array[20] = "try_proc_fs\n";
static int len = 1;

dev_t dev = 0;
static struct class *dev_class;
static struct cdev	etx_cdev;
static struct proc_dir_entry *parent;


static int etx_open(struct inode *inode,struct file *file);
static int etx_release(struct inode *inode, struct file *file);
static ssize_t etx_read(struct file *file, char __user *buf, size_t len, loff_t *off);
static ssize_t etx_write(struct file *file, const char __user *buf,size_t len , loff_t *off);
static long etx_ioctl(struct file *file,unsigned int cmd,unsigned long arg);

static int open_proc(struct inode *inode,struct file *file);
static int release_proc(struct inode *inode, struct file *file);
static ssize_t read_proc( struct file *file, char __user *buffer, size_t length, loff_t *offset);
static ssize_t write_proc(struct file *file, const char __user *buff, size_t len, loff_t *off);

static struct file_operations fops = 
{
	.owner = THIS_MODULE,
	.open = etx_open,
	.release = etx_release,
	.unlocked_ioctl = etx_ioctl,
	.read = etx_read,
	.write = etx_write,
	
};

static struct file_operations proc_fops = 
{
	.open = open_proc,
	.release = release_proc,
	.read  =read_proc,
	.write = write_proc,
};


static int etx_open(struct inode *inode,struct file *file)
{
	pr_info("File open success..\n");
	return 0;
}
static int etx_release(struct inode *inode, struct file *file)
{
	pr_info("File release ..!\n");
	return 0;
}
static ssize_t etx_read(struct file *file, char __user *buf, size_t len, loff_t *off)
{
	pr_info("Read......\n");
	return 0;
}
static ssize_t etx_write(struct file *file, const char __user *buf,size_t len , loff_t *off)
{
	pr_info("Writing ,..\n");
	return 0;
}
static long etx_ioctl(struct file *file,unsigned int cmd,unsigned long arg)
{
	switch(cmd)
	{
		case WR_VALUE:
			if(copy_from_user(&val,(int32_t *) arg,sizeof(val)))
			{
				pr_err("Data write: ERROR!\n");
			}
			pr_info("Value:%d\n",val);
			break;
		case RD_VALUE:
			if(copy_to_user(&val,(int32_t *)arg,sizeof(val)))
			{
				pr_err("Read data: ERROR!\n");
			}
			break;
		default:
			pr_info("Default\n");
			break;
	}
	return 0;
}
static int open_proc(struct inode *inode, struct file *file)
{
	pr_info("File proc open ...\n");
	return 0;
}
static int release_proc(struct inode *inode, struct file *file)
{
	pr_info("File proc release ..\n");
	return 0;
}
static ssize_t read_proc(struct file *file,char __user *buffer, size_t length,loff_t *offset)
{
	pr_info("File proc read..\n");
	
	if(len)
	{
		len=0;
	}
	else
	{
		len=1;
		return 0;
	}
	if(copy_to_user(buffer,etx_array,20))
	{
		pr_err("Data send : ERROR!\n");
	}
	return length;
}
static ssize_t write_proc(struct file *file, const char __user *buff,size_t len, loff_t *off)
{
	pr_info("File proc write ..\n");
	if(copy_from_user(etx_array,buff,len))
		pr_err("data write : ERROR!\n");
	return len;
}
static int __init fun_init(void)
{
	if(alloc_chrdev_region(&dev,0,1,"procfs_dev")<0)
	{
		pr_info("Cannot allocate major num & minor number..!\n");
		return -1;
	}
	pr_info("MAjor num:%d\n",MAJOR(dev));
	pr_info("Minor num:%d\n",MINOR(dev));
	
	cdev_init(&etx_cdev,&fops);
	if(cdev_add(&etx_cdev,dev,1)<0)
	{
		pr_info("cannot add device to system\n");
		goto r_class;
	}
	if(IS_ERR(dev_class = class_create(THIS_MODULE,"etx_class")))
	{
		pr_info("Cannot create dev_class ..\n");
		goto r_class;
	}
	if(IS_ERR(device_create(dev_class,NULL,dev,NULL,"etx_device")))
	{
		pr_info("Canot create device..\n");
		goto r_device;	
	}	
	
	//creating procfs entry
	parent = proc_mkdir("etx",NULL);
	if(parent == NULL)
	{
		pr_info("Error in creating procfs entry\n");
		goto r_device;
	}
	proc_create("etx_proc",0666,parent,&proc_fops);
	
	pr_info("Successfully inserted\n");
	r_class : 
		class_destroy(dev_class);
	r_device:
		unregister_chrdev_region(dev,1);
		return -1;
	return 0;
}
void __exit fun_exit(void)
{
	proc_remove(parent);
	device_destroy(dev_class,dev);
	class_destroy(dev_class);
	cdev_del(&etx_cdev);
	unregister_chrdev_region(dev,1);
	pr_info("Removed..!\n");
}

module_init(fun_init);
module_exit(fun_exit);
