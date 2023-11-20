#include<iostream>
using namespace std;
void printval(int &a)
{
	cout << a << endl;
}
int main()
{
	int a=23;
	int *ptr;
	ptr = &a;
	printval(*ptr);
	cout << *ptr << endl;
	cout << &a << endl;
}
