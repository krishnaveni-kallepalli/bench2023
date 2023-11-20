#include<iostream>
using namespace std;
void fun(const int &a)
{
	int &temp = const_cast<int&>(a);
//	int temp =a; 
	cout << "Temp: " << temp << endl;
	++temp;
	cout << "a:" << a << endl;
	cout << "Address of a : " << &a << endl;
	cout << "Adrs of temp : " << &temp << endl;
}
int main()
{
	int a=23;
	fun(a);
}
