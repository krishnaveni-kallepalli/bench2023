#include<stdio.h>
int main()
{
	int a[5];
	int *ptr[5],i;
	for(i=0;i<5;i++)
		ptr[i] = &a[i];
	for(i=0;i<5;i++)
		scanf("%d",ptr+i);
	for(i=0;i<5;i++)
		printf("%d",*(ptr+i));
	
}
