
#include<stdio.h>
int main()
{
	int num,isprime,i,range;
	printf("Enter range:");
	scanf("%d",&range);
	for(num=2;num<range;num++)
	{
	isprime=1;
		for(i=2;i<num;i++)
		{			
			if(num%i==0)
			{
				isprime = 0;
				break;
			}
		}
		if(isprime == 1) printf("%d ",num);
	}
}

