#include<iostream>
using namespace std;
class Sum
{
	int a,b;
	public:
	void input(int n1,int n2)
	{
		a = n1;
		b = n2; 
	}
	friend void add(Sum x);
};

void add(Sum x)
{
	cout << x.a + x.b << endl;
}
int main()
{
	Sum x;
	x.input(2,3);
	add(x);
	return 0;
}	


