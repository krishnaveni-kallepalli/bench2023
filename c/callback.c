#include<stdio.h>
void add(int a ,int b)
{
	printf("a+b=%d\n",a+b);
}
void sub(int a,int b)
{
	printf("a-b=%d\n",a-b);
}
void function(void (*ptr)(int,int))
{
	int a,b;
	printf("Enter a,b:");
	scanf("%d %d",&a,&b);
	(*ptr)(a,b);
}
int main()
{
	function(add);
	function(sub);
	return 0;
}
