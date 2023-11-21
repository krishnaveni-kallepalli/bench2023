#include<iostream>
using namespace std;
class myclass
{
	int x;
	myclass(int val)
	{
		x = val;
		cout << "constructor\n";
		cout << "x:" << x << endl;
	}
	myclass(const myclass & obj)
	{
		cout << "copy constructor\n";
	}
	public:
	static myclass & copy_constructor(int val)
	{
		cout << "copy\n";
		static myclass constructor(val);

		return constructor;
	}
};

int main()
{
	myclass &obj = myclass :: copy_constructor(23);

	return 0;
}
