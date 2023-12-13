//compare the 2 struct [ as above ] and see if they are same  [ they need to compare char[] of 2 structs ]
#include<stdio.h>
#include<stdlib.h>
struct self
{
    char name[20];
    struct self *ptr;
};
struct self1
{
    char name1[20];
};
int main()
{
    struct self *s;
    struct self1 s1;
    s=(struct self*)malloc(sizeof(struct self));
    scanf("%s",s->name);
    printf("Name:%s",s->name);
    printf("\n");
    scanf("%s",s1.name1);
    printf("Name:%s",s1.name1);
    printf("\n");
    int i,flag;
    while(s->name[i]==s1.name1[i])
    {
        i++;
        flag=1;
    }
    if(flag==1)
    {
        printf("Both are same\n");
    }
    else
    {
    	printf("Both are different\n");
    }
}
