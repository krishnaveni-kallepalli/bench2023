// using friend fun
#include<iostream>
using namespace std;
class Complex
{
	int a,b;
	public:
	void set_nums(int n1,int n2);
	void print_nums();
	friend Complex add_nums(Complex o1, Complex o2);
};	
void Complex :: set_nums(int n1,int n2)
{
	a = n1;
	b = n2;
}
void Complex :: print_nums()
{
	cout << a << "+" << b << "i" << endl;
}

Complex add_nums(Complex o1, Complex o2)
{
	Complex o3;
	o3.set_nums(o1.a+o2.a,o1.b+o2.b);
	return o3;
}

int main()
{
	Complex c1,c2,add;
	c1.set_nums(2,3);
	c1.print_nums();
	c2.set_nums(2,3);
	c2.print_nums();
	add = add_nums(c1,c2);
	cout << "----\n";
	add.print_nums();
	return 0;
	
}
