#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp;
	temp =a;
	a=b;
	b=temp;
}
void swap1(int &a,int &b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}
void swap2(int &a,int &b)
{
	a=a^b;
	b=a^b;
	a=a^b;
}
void swap3(int &a,int &b)
{
	a=a*b,b=a/b,a=a/b;
}

int main()
{
	int a,b;
	cout <<"enter a,b:";
	cin >> a >> b;
	
	swap(a,b);
	cout << a << " " << b << endl;
	swap1(a,b);
	cout << a << " " << b << endl;
	swap2(a,b);
	cout << a << " " << b << endl;
	swap3(a,b);
	cout << a << " " << b << endl;
	return 0;
} 
