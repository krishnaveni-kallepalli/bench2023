/*
#include<stdio.h>
struct details 
{
	char s[20];
	double d;
	int i;
};
int main()
{
	struct details dt;
	printf("%d",sizeof(dt));
}

		20	+ 				  4	+	8		+ 4		+4   = 40
____________________________ ____ ________  ____  ____
char						slack double	int   slack
							bytes				  bytes
							
							*/
#include<stdio.h>
struct details 
{
	char s[20];// 20
	int d;		// 4
	int i;		// 4
	//			= 28
};
int main()
{
	struct details dt;
	printf("%d",sizeof(dt));
}
