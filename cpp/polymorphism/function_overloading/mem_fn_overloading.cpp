#include<iostream>
using namespace std;
class Overload
{
public:
	void fun()
	{
		cout << "Function\n";
	cout << endl;
	}
	void fun(int a)
	{
		cout << "a:" << a << endl;
		cout << endl;
	}
	void fun(int a,float b)
	{
		cout << "a:" << a  << endl;
		cout << "b:" << b  << endl;
		cout << endl;
	}
	void fun(float a,int b)
	{
		cout << "a:" << a  << endl;
		cout << "b:" << b  << endl;
		cout << endl;
	}

};
int main()
{
	Overload obj;
	obj.fun();
	obj.fun(2);
	obj.fun(22,34.2);
	obj.fun(2.5,3);

}


