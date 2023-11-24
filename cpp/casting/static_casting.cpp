#include<iostream>
using namespace std;
int main()
{
	float f= 22.13;
	cout << static_cast<int>(f) << endl;
	int x = static_cast<int>(f);
	cout << x << endl;
}
