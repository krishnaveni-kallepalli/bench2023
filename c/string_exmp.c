#include<stdio.h>
#include<stdlib.h>

struct Input 
{
	char s1[10];
	char s2[10];
};
enum Manipulations
{
	MY_STRLEN=1,
	MY_STRCPY,
	MY_STRCMP,
	//DETAILS,
};

void my_strlen(struct Input ip)
{
	int i;
	for(i=0;ip.s1[i];i++);
	printf("%d",i);
}

void my_strcpy(struct Input ip)
{
	int i;
	for(i=0;ip.s1[i];i++)
	{
		ip.s2[i] = ip.s1[i];
	}
	ip.s2[i]='\0';
	printf("%s\n",ip.s1);
	printf("%s\n",ip.s2);
}
void my_strcmp(struct Input ip)
{
	int i;
	while(ip.s1[i] && ip.s2[i] && (ip.s1[i] == ip.s2[i]))
		i++;
	if(ip.s2[i]!=ip.s1[i])
		printf("Both srtings are different\n");
	else
		printf("Both are equal\n");
}
void details(struct Input ip)
{
	printf("%s\n",ip.s1);
	printf("%s\n",ip.s2);
}
int main()
{
	struct Input ip;
	enum Manipulations op;
	void (*fp[4])(struct Input ip) = {my_strlen, my_strcpy, my_strcmp};
	printf("Enter choice:");
	scanf("%d",&op);
	
	switch(op)
	{
		case MY_STRLEN:
		printf("Enter string:");
		scanf("%s",ip.s1);
		//my_strlen(ip);
		fp[0](ip);
		break;
		
		case MY_STRCPY:
		printf("Enter string s1:");
		scanf("%s",ip.s1);
		printf("Enter string s2:");
		scanf("%s",ip.s2);
		//my_strcpy(ip);
		fp[1](ip);
		break;
		
		case MY_STRCMP:
		printf("Enter string s1:");
		scanf("%s",ip.s1);
		printf("Enter string s2:");
		scanf("%s",ip.s2);
		//my_strcmp(ip);
		fp[2](ip);
		break;
		
		case DETAILS:
		printf("Enter string s1:");
		scanf("%s",ip.s1);
		printf("Enter string s2:");
		scanf("%s",ip.s2);
		fp[3](ip);
		break;
	
		default: 
		printf("Invalid option\n");
		exit(0);
	}
}
