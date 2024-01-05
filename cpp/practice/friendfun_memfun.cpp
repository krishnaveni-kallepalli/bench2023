// Create a member function of another class
// as a friend function

#include<iostream>
using namespace std;
class C2;
class C1
{
	public:
	void fun(C2 &obj);
};
class C2
{
	private : int a;
	protected: int b;
	public:
	C2()
	{
		cout << "C2 constructor\n";
		a=10;
		b=20;
	}
	friend void C1 :: fun(C2 &obj);
};
void C1::fun(C2 &obj)
{
	cout << "Friend fun in C1\n";
	cout << obj.a << endl;
	cout << obj.b << endl;
}
int main()
{
	C2 o1;
	C1 o2;
	o2.fun(o1);
}
