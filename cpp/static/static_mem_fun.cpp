#include<iostream>
using namespace std;
class Static
{
	public:
	static int a;
	static void fun()
	{
		cout << a << endl;
	}
};
int Static :: a=20;
int main()
{
	Static s;
	Static :: fun();
}
