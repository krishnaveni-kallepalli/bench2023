#include<iostream>
using namespace std;
class one
{
	protected:
	int x=223;
	public:
	
	one()
	{
		cout << "This is class A\n";
		cout << x << endl;
	}
};
class two : public one 
{
	public:
	two()
	{
		cout << "This is class B\n";
		cout << x << endl;
	}
};
int main()
{
	class one o1;
	class two o2;
}

