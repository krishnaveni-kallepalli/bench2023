#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void arm(int num,int ndigit)
{
	int x = num,sum=0,rem;
	while(num!=0)
	{
		rem = num%10;
		sum = sum +pow(rem,ndigit);
		num = num/10;
	}
	if(sum == x) printf("Armstrong\n");
	else printf("Not Armstrong\n");
}
void callback(void(*fp)(int,int))
{
	int num,ndigit;
	printf("Enter ndigits:");
	scanf("%d",&ndigit);
	
	printf("ENter num:");
	scanf("%d",&num);
	
	int x = num;
	int count = 0;
	while(x!=0)
	{
		x=x/10;
		count ++;
	}
	if(count == ndigit) arm(num,ndigit);
	else printf("Enter correctly\n"),exit(1);
}
int main()
{
	callback(arm);
	return 0;
}
