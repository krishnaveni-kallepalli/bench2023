#include<iostream>
using namespace std;
class A
{
	public: 
	void fun()
	{
		cout << "This is fun-> class A\n";
	}
};
class B : virtual public A
{
	public: 
	void fun()
	{
		cout << "This is fun -> class B\n";
	}
};

class C : virtual public A
{
};
int main()
{
	C obj;
	obj.fun();
}
