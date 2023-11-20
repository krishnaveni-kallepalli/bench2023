#include<iostream>
using namespace std;
class Constructor
{
	public:
	Constructor()
	{
		cout << "constructor\n";
	}
};
int main()
{
	Constructor obj;
	return 0;
}
