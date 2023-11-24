#include<iostream>
using namespace std;

class A1
{
	int b =2;
	protected:
	int a =3;
	public:
	int c=1;
	void func1()
	{
		cout << "Fun A1\n";
		cout << "In class A1:\n";
		cout << "a:" << a << endl;
		cout << "c:" << c << endl;
	}
};

class A2
{
	int y =5;
	protected:
	int z =6;
	public:
	int x=4;
	void func2()
	{
		cout << "Fun A2\n";
		cout << "In class A2:\n";
		cout << "x:" << x << endl;
		cout << "z:" << z << endl;
	}
};

class A3
{
	int p =8;
	protected:
	int q =9;
	public:
	int r=7;
	void func3()
	{
		cout << "Fun A3\n";
		cout << "In class A3:\n";
		cout << "q:" << q << endl;
		cout << "r:" << r << endl;
	}
};
class B : public A1,public A2, private A3
{
	public:
	void fun()
	{
		cout << "In FunB\n";
		func1();
		cout << "a:" << a << endl;
		cout << "r:" << c << endl;
		cout <<"--------\n";
	}
};
int main()
{
	class B b;
	b.fun();
	b.func1();
	cout << "In main:\n";
	cout << "c:" << b.c << endl;
	cout << "r:" << b.r << endl;
}
