#include<iostream>
using namespace std;
class myclass
{
	int a,b;
	myclass(){}
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
};

int main()
{
	class myclass obj = myclass :: constructor();

	obj.public_fun();
	
	return 0;
}
