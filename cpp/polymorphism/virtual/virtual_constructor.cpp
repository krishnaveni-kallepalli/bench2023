// if we make a constructor virtual we'll get error 
#include<iostream>
using namespace std;
class Base
{
public:
	Base()
	{
		cout << "constructor\n";
	}
	Base(int a)
	{
		cout << "Virtual constructor\n";
	}


};
class Derived
{
public:
	virtual Derived()
	{
		cout << "Derived class\n";
	}

};
int main()
{
	class Base b,b1(23);
	class Derived d;
}



