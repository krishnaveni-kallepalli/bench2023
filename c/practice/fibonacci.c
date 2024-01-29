#include<stdio.h>
void fibn(int range)
{
	int n1 = 0,n2 =1,n3,i;
	printf("%d\t%d\t",n1,n2);
	for(i=2;i<range;i++)
	{
		n3 = n1+n2;
		printf("%d\t",n3);
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
}

int fib(int range)
{
	if(range == 0 || range == 1)
		return range;
	else
		return fib(range-1)+fib(range-2);
}
int main()
{
	int range;
	printf("Enter range:");
	scanf("%d",&range);
	fibn(range);
	for(int i=0;i<range;i++)
		printf("%d\t",fib(i));
	printf("\n");	
	return 0;
}
