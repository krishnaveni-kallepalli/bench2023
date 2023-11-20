#include<iostream>
using namespace std;
class Constructor
{
	public:
	Constructor();
};
Constructor :: Constructor()
{
	cout << "constructor\n";
}
int main()
{
	Constructor obj;
	return 0;
}
