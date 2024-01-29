#include<stdio.h>
#include<math.h>
void arm(int num,int count)
{
	int sum=0,rem,x;
	x = num;
	while(num!=0)
	{
		rem = num%10;
		sum = sum + pow(rem,count);
		num = num/10;
	}
	if(x==sum) printf("Armstrong\n");
	else printf("Not Armstrong\n");
}
int main()
{
	int num,x,count=0;
	printf("Enter num:");
	scanf("%d",&num);
	
	x = num;
	printf("x:%d\n",x);
	while(x!=0)
	{
		x=x/10;
		count++;
	}
	printf("Count:%d\n",count);
	arm(num,count);
}
