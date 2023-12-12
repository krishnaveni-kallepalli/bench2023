#include<stdio.h>
void palindrome(int num)
{
	int x = num;
	int rev=0,rem;
	while(num!=0)
	{
		rem = num%10;
		rev = rem+rev*10;
		num = num/10;
	}
	if(rev == x) printf("Plaindrome\n");
	else printf("Not palindrome");
}
void callback(void (*fp)(int))
{
	int num;
	printf("Enter num:");
	scanf("%d",&num);
	fp(num);
}
int main()
{
	callback(palindrome);
	return 0;
}
