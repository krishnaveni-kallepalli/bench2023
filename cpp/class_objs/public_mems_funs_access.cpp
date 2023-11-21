#include<iostream>
using namespace std;
class myclass
{
	public:
	int a,b;
	myclass(){}
	void fun()
	{
		cout << "Enter a,b:";
		cin >> a >> b ;
	}
};

int main()
{
	class myclass obj;
	cout << "a:" << obj.a << endl;
	cout << "b:" << obj.b << endl;
	
	obj.fun();
	
	cout << "a:" << obj.a << endl;
	cout << "b:" << obj.b << endl;
	
	return 0;
}
