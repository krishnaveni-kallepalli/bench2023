#include<stdio.h>
#include<string.h>
void *mymemcpy(void *des,const void *src,unsigned int n);
int main()
{
    char src[50] = "abcdefghijklmnopqrstuvwxyz";
    char des[50];
    mymemcpy(des,src,strlen(src)+1);
    printf("%s\n",des);
    
}

void * mymemcpy(void *des,void const *src,unsigned int n)
{
    int i =0;
    char *dest = (char *)des;
    char *srce = (char *)src;
    for(i=0;i<n;i++)
    {
        *(dest+i) = *(srce+i);
    }
    
   return des;
}
