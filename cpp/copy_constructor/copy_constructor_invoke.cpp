// When copy constructor is being invoked and when not .
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

	Number(Number &obj)
	{
		cout << "copy constructor\n";
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
	Number x,y,z(45),p;//
	x.display();
	y.display();
	z.display();
	

	//copy constructor
	Number z1(x);
	z1.display();// z1 resembling x
	Number z2(z);
	z2.display();// z2 resembling z
	
	p = z1; // copy constructor not invoked - already being called 
	
	Number P = z; //  invoked 

	p.display();
	P.display();



	return 0;  
}
