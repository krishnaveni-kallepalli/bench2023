#include<iostream>
using namespace std;
class Con
{
	public:
	Con(int a)
	{
		cout << "a:" << a << endl;
	}
	Con(int a ,int b)
	{
		a=25;
		cout << "a:" << a << endl;
		cout << "b:" << a << endl;
	}
	Con(float a ,float b)
	{
		a=25;
		cout << "a:" << a << endl;
		cout << "b:" << a << endl;
	}
	Con()
	{
		cout << "Hello...\n";
	}
};
int main()
{
	 Con obj(2),obj1(2,3.6);
	 Con obbject;
}
