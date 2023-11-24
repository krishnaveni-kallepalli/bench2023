#include <iostream>
using namespace std;
class A
{
	public:
	int x=23;
	void show()
	{
		cout << "In class A:" << x << endl;
		cout << this->y;
	}
};
class B : public A
{
	public:
	void display()
	{
		show();
		cout << "In class B:" << x << endl;
		x = x+5;
	}
};
int main()
{
	b.display();
	b.show();
	cout << b.x << endl;
}

