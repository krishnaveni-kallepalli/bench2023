#include<iostream>
using namespace std;
class Number
{
	int a;
	public:
	Number()
	{  
		a = 9;
	}
	Number(int num)
	{
		cout << "constructor\n";
		a=num;
	}
	Number(Number &obj)
	{
		cout << "copy constructor\n";
		obj.a=100;
		cout << "Number3333 :" << obj.a << endl;
		a=obj.a;
	}
	void display()
	{
		cout << "Number :" << a << endl;
	}
};
int main()
{
	//constructor
	Number x,y,z(45);
	x.display();
	y.display();
	z.display();
	
	// copy constructor
	Number z1(x);
	z1.display();// z1 resembling x
	Number z2(z);
	z2.display();// z2 resembling z
	return 0;  
}
