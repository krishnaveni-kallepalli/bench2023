#include<stdio.h>
int main()
{
	int num,x,rev=0,rem=0;
	printf("Enter num:");
	scanf("%d",&num);
	
	x = num;
	
	for(;num!=0;num=num/10)
	{
		rem = num%10;
		rev = rem+rev*10;
	}
	printf("%d\n",rev);
}
