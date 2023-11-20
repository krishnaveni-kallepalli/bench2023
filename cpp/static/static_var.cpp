#include<iostream>
using namespace std;
static int y=23;
static void fun(int y)
{
	int x=34;
	cout << x << endl;
	cout << y << endl;
	y = y+3;
	cout << y << endl;
}
int main()
{
	fun(y);
	//cout << x << endl;
	cout << y << endl;
}
