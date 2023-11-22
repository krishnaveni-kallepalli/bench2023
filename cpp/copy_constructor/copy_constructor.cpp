#include<iostream>
using namespace std;
class Number
{
	int a;
	public:
	Number()
	{  
		a = 10;
	}
	Number(int num)
	{
		cout << "constructor\n";
		a=num;
		a = a+10;
	}
	Number(Number &obj)
	{
		cout << "copy constructor\n";
		cout << "Number :" << obj.a << endl;
		a=obj.a;
	}
	void display()
	{
		cout << "Val of a :" << a << endl;
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
	Number z2 = z;
	z2.display();// z2 resembling z
	return 0;

}
