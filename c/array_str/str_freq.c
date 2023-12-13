#include<stdio.h>
int main()
{
	char ch;
	char str[100];
	
	printf("Enter string\n");
	scanf("%s",str);
	printf("Enter character:\n");
	scanf(" %c",&ch);
	int count=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(ch==str[i])
		{
			++count;	
		}
	}
	printf("occurance of %c is :%d\n",ch,count);
	return 0;
}
