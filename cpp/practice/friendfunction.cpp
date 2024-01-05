#include<iostream>
using namespace std;
class FF
{
	private: int a;
	protected: int b;
	public:
	FF()
	{
		cout << "Constructor\n";
		a=20;
		b=30;
	}
	friend void fun(FF &obj);
};
void fun(FF &obj)
{
	cout << "Friend Function:\n";
	cout << obj.a << endl;
	cout << obj.b << endl;
}

int main()
{
	FF obj;
	fun(obj);
}
