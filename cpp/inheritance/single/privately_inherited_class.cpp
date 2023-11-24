#include<iostream>
using namespace std;
class A
{
	int y =22;
	protected:
	int z =2;
	public:
	int x=23;
	void func()
	{
		cout << "Fun A\n";
		cout << "In class A:" << x << endl;
	}
};
class B : private A 
{
	public:
	void fun()
	{
		func();
		cout << "Fun B\n";
		cout << "In class B:" << x << endl;
		x = x+5;
		func();
		cout << z << endl;
		//cout << y;
	}
};

int main()
{

	B b;
	b.fun();
	//b.func(); // ERROR -- > cannot access A is private 
	// cannot modify / hiding data .
	A a;	
	a.func();
	
}
