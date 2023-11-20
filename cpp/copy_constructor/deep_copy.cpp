#include<iostream>
using namespace std;
class Con
{
	public: 
	int *ptr;
	int a;
	Con()
	{
		ptr = new int;
		cout << "*ptr:" << *ptr << endl;
	}
	Con(Con &obj)
	{
		a=obj.a;
		ptr = new int ;
		*ptr = *(obj.ptr);
	}
	
	void data(int x, int y)
	{
		a=x;
		*ptr = y;
	}
	void display();
	
};
void Con :: display()
{
	cout << a<< endl;
	cout << *ptr<< endl;
}

int main()
{
	Con obj;
	obj.data(2,3);
	Con obj2(obj);
	obj2.display();
} 
