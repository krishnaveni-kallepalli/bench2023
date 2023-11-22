#include<iostream>
using namespace std;
class Con
{
	public: 
	int *ptr;
	
	int a;
	Con()
	{
		ptr = new int ;
		//cout << &ptr << endl;
	}
	void data(int x, int  y)
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
	//cout << &ptr << endl;
}
int main()
{
	Con obj;
	obj.data(2,3);
	cout << obj.ptr << endl;
	Con obj2 = obj;
	obj2.display();
	cout << obj.ptr << endl;
	cout << obj2.ptr << endl;
} 
