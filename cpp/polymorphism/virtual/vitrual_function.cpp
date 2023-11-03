
//base class and is re-defined (overridden) by a derived class
/*
#include<iostream>
using namespace std;

class A
{
	public:
	void display() //virtual void display()
	{
		cout << "A Display\n";
	}
	void show()
	{
		cout << "A show\n";
	}
};
class B : public A
{
	public:
	void display()
	{
		cout << "B Display\n";
	}
	void show()	//virtual void show()
	{
		cout << "B show\n";
	}
};

int main()
{
	class A *a;
	class B b;
	a = &b;
 
	a->display();
	a->show();
	
}


/*
in above example if you put virtual before function 
that function content is getting over ridden by the content of the function with the same name in derived class
*/




