#include<iostream>
using namespace std;
class Con
{
	public:
	Con()
	{
		cout << "Hello...\n";
	}
	Con(int a)
	{
		cout <<  "Constructor with single param:\n";
		cout << "a:" << a << endl;
	}
	Con(int a ,int b)
	{
		cout <<  "Constructor with 2int params:\n";
		a=25;
		cout << "a:" << a << endl;
		cout << "b:" << b << endl;
	}
	Con(float a ,int b, float c)
	{
		cout <<  "Constructor with 2f params:\n";
		a=255;
		cout << "a:" << a << endl;
		cout << "b:" << b << endl;
		cout << "c:" << c << endl;
	}

};
int main()
{
	 Con obj;
	 Con obj1(2);
	 Con obj2(22,33);
	 Con obj3(2.2,33.3,34.4);
}
