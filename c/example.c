#include<stdio.h>
#include<stdlib.h>
struct Input
{
	int a;
	int b;
};
enum Options
{
	ADD=1,
	SUB,
};
int add(struct Input ip)
{
	return (ip.a+ip.b);
}
int sub(struct Input ip)
{
	return (ip.a-ip.b);
}
int main()
{
	struct Input ip;
	enum Options op;
	int result,option;
	printf("Enter choice:");
	scanf("%d",&op);
	switch(op)
	{
		case ADD:
		printf("Enter a,b:");
		scanf("%d %d",&ip.a,&ip.b);
		result = add(ip);
		printf("%d",result);
		break;
		case SUB:
		printf("Enter a,b:");
		scanf("%d %d",&ip.a,&ip.b);
		result = sub(ip);
		printf("%d",result);
		break;
		default: 
		printf("Invalid option\n");
		exit(0);
	}
return 0;
}



