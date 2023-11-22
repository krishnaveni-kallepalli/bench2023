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
		cout << x << endl;
	}
	void fun()
	{
		cout << "I'm class one fun()\n";
	}
};
class two : private one
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
	}
	void fun()
	{
		cout << "I'm class three fun()\n";
	}
};
int main()
{
	one o1;
	o1.fun();
	
	two o2;
	o2.fun();
	
	three o3;
	o3.fun();
}
