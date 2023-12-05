#include<stdio.h>
#include <math.h>
#include<stdlib.h>
void Armstrong(int num,int ndigit)
{
	int rem,sum=0,n=num;
	printf("num:%d\n",num);
	printf("n:%d\n",n);
	while(num > 0)
	{
		rem = num%10;
		sum = sum +pow(rem, ndigit);
		num = num/10;
	}
	if(sum == n) printf("%d is armstrong\n",n);
	else printf("%d is not armstrong\n",n);
}
int main()
{
	int ndigit,num,m;
	printf("Enter no.of digits in num:");
	scanf("%d",&ndigit);
	printf("Enter num:");
	scanf("%d",&num);
	m=num;
	int count=0;
	while(m!=0)
	{
		m = m /10;
		count ++ ;
	}
	
	if(count == ndigit)
	{
		Armstrong(num, ndigit);
	}
	else 
	{
		printf("you've entered wrong number\n");
		exit(1);
	}
	return 0;
}

