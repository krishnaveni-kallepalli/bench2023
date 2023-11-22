#include<iostream>
using namespace std;
class one
{
	protected:
	int x=223;
	public:
	one()
	{
		cout << "This is class 1\n";
		x=x+5;
		cout << x << endl;
	}
	void fun()
	{
		cout << "I'm class one fun()\n";
	}
};
class two : private one // public and protected mems of class one is private to class two
{
	public:
	two()
	{
		cout << "This is class 2\n";
		cout << x << endl;
	}
	void fun()
	{
		cout << "I'm class two fun()\n";
	}
};
class three : private two
{
	public:
	three()
	{
		cout << "This is class 3\n";
	//	cout << x << endl; // ERROR - x is private member of class two
	}
	void fun()
	{
		cout << "I'm class two fun()\n";
	}
};
int main()
{
	one o1;
	two o2;
	three o3;
}
