#include<iostream>
using namespace std;
class sms
{
	private:
	static void privatefun()
	{
		cout << "Private fun\n";
	}
	static int pfun(int a,int b,int c)
	{
		cout << a << endl;
		cout << b << endl;
		cout << c << endl;
	}
	public:
	static void publicfun()
	{
		cout << "Public fun\n";
	}
	void fun()
	{
		privatefun();
	}
	void func(int a,int b,int c)
	{
		pfun(a,b,c);
	}
};
int main()
{
	sms s;
	s.fun();
	s.func(2,3,4);
	sms :: publicfun();
}
