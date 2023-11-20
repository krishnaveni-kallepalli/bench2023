#include<iostream>
using namespace std;

class A
{
	int x,y;
	public:
	A()
	{
		cout << "class A constructor\n";
		cout << x << "," << y << endl;
	}
}
class B
{
	public:
	A()
	{
		cout << "class B constructor\n";
	}
}

int main() {
    Sum x;
    x.input(2, 3);
    sum(x);
    return 0;
}
