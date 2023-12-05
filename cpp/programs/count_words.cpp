/*
#include<iostream>
using namespace std;
int main()
{
	char s[30];
	int count = 0,i,word = 0;
	
	cout << "Enter s:";
	scanf("%[\n]s",s);

	for(i=0;s[i]!='\0';i++)
	{
		if(s[i] == ' ' || s[i+1] == '\n' || s[i+1] == '\t')
		{
			word = 0;
		}
		else if(word == 0)
		{
			word = 1;
			count ++;
		}
	}
	cout << "No.of Words:" << count << endl;
	return 0;
}
*/



