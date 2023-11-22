#include<iostream>
using namespace std;
class Constructor
{
	public:
	Constructor();
};
class Constructor2
{
	public:
	Constructor2();
};
Constructor :: Constructor()
{
	cout << "constructor\n";
}
Constructor2 :: Constructor2()
{
	cout << "Constructor2\n";
}
int main()
{
	Constructor obj;
	Constructor2 obj1;
	return 0;
}

