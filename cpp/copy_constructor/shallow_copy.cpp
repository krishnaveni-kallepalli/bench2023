#include<iostream>
using namespace std;
class Con
{
	int *ptr;
	public: 
	int a;
	Con()
	{
		ptr = new int ;
		cout << &ptr << endl;
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
}
int main()
{
	Con obj;
	obj.data(2,3);
	Con obj2 = obj;
	obj2.display();

} 
