#include<iostream>
using namespace std;
class myclass
{
	int a,b;
	myclass(){cout << "default_constructor\n";}
	myclass(int x,int y)
	{
		cout << "param_costructor\n";
		a = x;
		b = y;
		cout << "a:" << a << endl;
		cout << "b:" << b << endl;
	}

	void fun()
	{
		cout << "Enter a,b:";
		cin >> a >> b ;
		cout << "a:" << a << endl;
		cout << "b:" << b << endl;
	}
	public:
	void public_fun()
	{
		fun();
	}
	static myclass constructor()
	{
		myclass();
	}
	static myclass param_constructor(int x,int y)
	{
		myclass(x,y);
	}
};

int main()
{
	class myclass obj = myclass :: constructor();
	class myclass obj1 = myclass :: param_constructor(2,3);
	obj.public_fun();
	
	return 0;
}
