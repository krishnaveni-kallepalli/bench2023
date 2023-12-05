#include<iostream>
using namespace std;
union details
{
	int i;
	double d;
	//string str;
};
int main()
{
	union details dt;
	cout << sizeof(dt) << endl;
}
