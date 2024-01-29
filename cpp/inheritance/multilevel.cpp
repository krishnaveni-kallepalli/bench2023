#include<iostream>
using namespace std;
class A
{
	protected : int x;
	public :
	A()
	{
		cout << "class A constructor\n";
	}
};
	
class B: public A
{
	public :
	B()
	{
		cout << "class B constructor\n";
	}
};
class C: public B
{
	public :
	C()
	{
		cout << "class C constructor\n";
	}
};
void Display()
{
	cout << "Display:" << endl;
}
int main()
{
	class A a;
	class B b;
	class C c;
	return 0;
}
