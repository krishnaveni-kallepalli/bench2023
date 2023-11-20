#include<iostream>
using namespace std;
int ADD(int a,int b)
{
	return a+b;
}
string ADD(string s1,string s2)
{
	return s1+s2;
}
int main()
{
	string s1="krishna",s2="veni";
	int a=2,b=3;
	
	cout << ADD(s1,s2) << endl;
	cout << ADD(a,b) << endl;
	return 0;
}
