#include<iostream>
using namespace std;
class myclass
{
	int x;
	myclass(int val)
	{
		x = val;
	}
	myclass(const myclass & obj)
	{
		cout << "copy constructor\n";
	}
	public:
	static myclass & copy_constructor(int val)
	{
		static myclass constructor(val);

		return constructor;
	}
};

int main()
{
	myclass &obj = myclass :: copy_constructor(23);
	cout << obj.a << endl;
	return 0;
}
