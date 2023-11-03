#include<iostream>
using namespace std;
class Employee
{
	private :
		int a,b,c;
	public:
		int d,e;
		void setData(int a1,int b1,int c1);
		void getdata();
};

void Employee :: setData(int a1,int b1,int c1)
{
	a = a1;
	b = b1;
	c = c1;
}
void Employee :: getdata()
{
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	cout << "c:" << c << endl;
	cout << "d:" << d << endl;
	cout << "e:" << e << endl;
}
int main()
{
	Employee emp;
	emp.d = 24;
	emp.e = 77;
	//emp.a=123; private and cannot acces --> Error!
	emp.setData(11,22,53);
	emp.getdata();
	return 0;
}
