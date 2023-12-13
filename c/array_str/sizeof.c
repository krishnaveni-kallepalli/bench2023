#include<stdio.h>
#define my_sizeof(var) (char *)(&var+1)-(char*)(&var)
int main()
{
	double x;
	printf("%ld", my_sizeof(x));
	return 0;
}
