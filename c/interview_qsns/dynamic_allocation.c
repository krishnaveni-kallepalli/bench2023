/*
What part of memory is used for dynamic allocation of variables? - HEAP
Write a program to call malloc inside a function and return the array to main. Where will the memory be allocated for this array?
*/



#include<stdio.h>
#include<stdlib.h>
int fun(int size)
{
	int *arr;
	arr = malloc(sizeof(int) * size);
	return *arr;
}
int *func(int size)
{
	 int *a = malloc(sizeof(int)*size);
	 return a;
}
int main()
{
	int size;
	printf("ENter no.of elements\n");
	scanf("%d",&size);
	int x = fun(size);
	int *y = func(size);
	printf("%ld",sizeof(x));
	free(x);
	printf("%ld",sizeof(y));
	free(y);
	return 0;
}
