#include<iostream>
using namespace std;
class Number
{
	int a=0;
	public:
	Number(){  a =9;}
	Number(int num)
	{
		cout << "constructor\n";
		a=num;
	}
/*
	Number(Number &obj)
	{
		cout << "copy constructor\n";
		a=obj.a;
	}

 Compiler suplies its own copy constructor 
*/ 
	void display()
	{
		cout << "Number :" << a << endl;
	}
};
int main()
{
	//constructor
	Number x,y,z(45),z3;
	x.display();
	y.display();
	z.display();
	
	// copy constructor -  NO ERROR even comment out copy constructor
	Number z1(x);
	z1.display();// z1 resembling x
	Number z2(z);
	z2.display();// z2 resembling z
	
	z3=z2;

	return 0;  
}
