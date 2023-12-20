//Can calloc be implemented using malloc, even if there is no constrain wrt contiguous memory? 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void* mycalloc(size_t n_ele, size_t ele_size)
{
	size_t size = n_ele * ele_size;
	void *ptr = malloc(size);
	if(ptr!=NULL)
		memset(ptr,0,size);
	return ptr;
}
int main()
{
	int *x = (int*)mycalloc(5,sizeof(int));
	printf("%ld\n",sizeof(x));
	free(x);
	return 0;
}
