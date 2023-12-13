#include<stdio.h>
#include<stdlib.h>
#define LEN 5
int display(int **ptr_arg)
{
     for(int i=0;i<LEN;i++)
    {
        printf("%d\n",*(*(ptr_arg+i)));
    }
}
int main()
{
    int *ptr = (int*) malloc(len * sizeof(int));
     for(int i=0;i<LEN;i++)
     {
        scanf("%d",*ptr+i);
     }
     display(&ptr);
    return 0;
}
