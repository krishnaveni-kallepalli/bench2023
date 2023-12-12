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
	DETAILS,
};

void my_strlen(char s1[],char s2[])
{
	int i;
	for(i=0;s1[i];i++);
	printf("%d",i);
}

void my_strcpy(char s1[],char s2[])
{
	int i;
	for(i=0;s1[i];i++)
	{
		s2[i] = s1[i];
	}
	s2[i]='\0';
	printf("%s\n",s1);	
	printf("%s\n",s2);
}
void my_strcmp(char s1[],char s2[])
{
	int i;
	while(s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	if(s2[i]!=s1[i])
		printf("Both srtings are different\n");
	else
		printf("Both are equal\n");
}
void details(char s1[],char s2[])
{
	printf("%s\n",s1);
	printf("%s\n",s2);
}
int main()
{
	struct Input ip;
	enum Manipulations op;
	void (*fp[4])(char [],char []) = {my_strlen, my_strcpy, my_strcmp,details};
	printf("Enter choice:");
	scanf("%d",&op);
	
	switch(op)
	{
		case MY_STRLEN:
		printf("Enter string:");
		scanf("%s",ip.s1);
		//my_strlen(ip.s1,0);
		fp[0](ip.s1,0);
		break;
		
		case MY_STRCPY:
		printf("Enter string s1:");
		scanf("%s",ip.s1);
		printf("Enter string s2:");
		scanf("%s",ip.s2);
		//my_strcpy(ip);
		fp[1](ip.s1,ip.s2);
		break;
		
		case MY_STRCMP:
		printf("Enter string s1:");
		scanf("%s",ip.s1);
		printf("Enter string s2:");
		scanf("%s",ip.s2);
		//my_strcmp(ip);
		fp[2](ip.s1,ip.s2);
		break;
		
		case DETAILS:
		printf("Enter string s1:");
		scanf("%s",ip.s1);
		printf("Enter string s2:");
		scanf("%s",ip.s2);
		fp[3](ip.s1,ip.s2);
		break;
	
		default: 
		printf("Invalid option\n");
		exit(0);
	}
}
