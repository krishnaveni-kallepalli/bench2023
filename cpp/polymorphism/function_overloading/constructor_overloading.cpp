#include<iostream>
using namespace std;
class fun
{
	fun()
	{
		cout << "Function\n";
		cout << endl;
	}
	fun(int a)
	{
		cout << "a:" << a << endl;
		cout << endl;
	}
	fun(int a,float b)
	{
		cout << "a:" << a  << endl;
		cout << "b:" << b  << endl;
		cout << endl;
	}
	fun(float a,int b)
	{
		cout << "a:" << a  << endl;
		cout << "b:" << b  << endl;
		cout << endl;
	}

};
int main()
{
	fun a,b(2),c(2,3.4),d(33.4,5);
}


