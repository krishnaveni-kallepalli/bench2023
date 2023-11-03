
#include<iostream>
using namespace std;
void fun()
{
	cout << "Function\n";
	cout << endl;
}
void fun(int a)
{
	cout << "a:" << a << endl;
	cout << endl;
}
void fun(int a,float b)
{
	cout << "a:" << a  << endl;
	cout << "b:" << b  << endl;
	cout << endl;
}
void fun(float a,int b)
{
	cout << "a:" << a  << endl;
	cout << "b:" << b  << endl;
	cout << endl;
}
void fun(int a,int b)//Parameters should have a different sequence of parameters.
{
	cout << "a:" << a  << endl;
	cout << "b:" << b  << endl;
	cout << endl;
}
int main()
{
	fun();
	fun(2);
	fun(22,34.2);
	fun(2.5,3);
	//fun(2,3);Parameters should have a different sequence of parameters.
}


