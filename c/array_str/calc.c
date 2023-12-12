
#include<stdio.h>
#include<stdlib.h>
struct Calculator
{
	int (*fp1)(int,int);
	int (*fp2)(int,int);
	int (*fp3)(int,int,int);
	int (*fp4)(int,int);
	
};
enum Options
{
	ADDITION=1,
	SUBTRACT,
	MULTIPLY,
	DIVISION
};
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b,int c)
{
	return a*b*c;
}
int divi(int a,int b)
{
	return a/b;
}

int main()
{
	struct Calculator calc;
	enum Options op;
	int result,a,b,c;
	calc.fp1 = add;
	calc.fp2 = sub;
	calc.fp3 = mul;
	calc.fp4 = divi;
	printf("1.ADD\n2.SUBTRACT\n3.MULTIPLY\n4.DIVISION\nEnter choice:\n");
	scanf("%d",&op);
	switch(op)
	{
		case ADDITION:
		printf("Enter a,b:");
		scanf("%d %d",&a,&b);
		result = calc.fp1(a,b);
		printf("Add:%d\n",result);
		break;
		
		case SUBTRACT:
		printf("Enter a,b:");
		scanf("%d %d",&a,&b);
		result = calc.fp2(a,b);
		printf("Sub:%d\n",result);
		break;
		
		case MULTIPLY:
		printf("Enter a,b,c:");
		scanf("%d %d %d",&a,&b,&c);
		result = calc.fp3(a,b,c);
		printf("Mul:%d\n",result);
		break;
		
		case DIVISION:
		printf("Enter a,b:");
		scanf("%d %d",&a,&b);
		result = calc.fp4(a,b);
		printf("Div:%d\n",result);
		break;
	
		default: 
		printf("Invalid option\n");
		exit(0);
	}
	return 0;
}
