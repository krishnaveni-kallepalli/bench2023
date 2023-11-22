#include<iostream>
using namespace std;
class A
{
	
	public:
	A()
	{
		cout << "A Constructor\n";
	}
	void func()
	{
		cout << "Fun\n";
	}
};
class B : public A
{
	public:
	B()
	{
		cout << "B Constructor\n";
	}
	void fun()
	{
		cout << "FunB\n";
	}
};

int main()
{
	A a;
	a.func();
	
	B b;
	b.fun();
	b.func();
	
}
