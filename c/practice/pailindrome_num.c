#include<stdio.h>
void pal(int num)
{
	int x,rev=0,rem=0;
	x=num;
	while(num!=0)
	{
		rem = num % 10;
		rev = rem+rev*10;
		num = num/10;
	}
	if(x==rev) printf("Palindrome\n");
	else printf("Not Palindrome\n");
}
int main()
{
	int num;
	printf("Enter num:");
	scanf("%d",&num);
	pal(num);
	return 0;
}
