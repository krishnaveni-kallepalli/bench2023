#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>


MODULE_LICENSE("GPL");
MODULE_LICENSE("Dual BSP/GPL");
MODULE_LICENSE("GPL v2");

MODULE_AUTHOR("krishna");

MODULE_DESCRIPTION("program for fibonacci series\n");

MODULE_VERSION("2:1.0");


static int __init fib_init(void)
{
	int n1=0,n2=1,n3;
	int i;
	printk(KERN_INFO "Fibonacci series range of 20\n");
	printk("%d\n%d\n",n1,n2);
	for(i=2;i<20;i++)
	{
		n3 = n1+n2;
		printk("%d\t",n3);
		n1=n2;
		n2=n3;
	}
	return 0;
}
module_init(fib_init);

void __exit fib_exit(void)
{
	printk(KERN_INFO "Done...!\n");
}
module_exit(fib_exit);
