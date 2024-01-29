#include<stdio.h>
void prime(int num)
{
	int count = 0,i;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			count ++;
	}
	if(count ==0) printf("Prime\n");
	else printf("Nor prime\n");
}
int main()
{
	int num;
	printf("Enter num:");
	scanf("%d",&num);
	
	prime(num);
}
