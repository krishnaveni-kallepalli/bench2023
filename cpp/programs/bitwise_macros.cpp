#include<iostream>
using namespace std;
class Number
{
	int a=0;
	public:
	Number(){}
	Number(int num)
	{
	a=num;
	}
	void display()
	{
		cout << "Number :" << a << endl;
	}
};
int main()
{
	Number x,y,z(45);
	x.display();
	z.display();
	return 0;
}
