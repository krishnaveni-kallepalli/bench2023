#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/moduleparam.h>


MODULE_LICENSE("GPL");
MODULE_VERSION("2:1.0");
MODULE_DESCRIPTION("passing array as argument\n");

int a[10]={1,2,3,4,5,6,7,8,9,0};	
module_param_array(a,int,NULL, S_IRUSR|S_IWUSR);

static int __init array_init(void)
{
	int i,size;
	size = sizeof(a)/sizeof(a[0]);
	printk(KERN_INFO "Display array elements:\n");
	for(i=0;i<size;i++)
	{
		printk("a[%d]:%d\n",i,a[i]);
	}
	return 0;
}
module_init(array_init);
void __exit array_exit(void)
{	
	printk("Done...!\n");
}
module_exit(array_exit);
