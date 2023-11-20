#include<iostream>
using namespace std;
int main()
{
	int a = 23,b=25;
	int *const ptr=&a;
	

	cout << "a address:  " << &a << endl;
	cout << "ptr value:  " << *ptr << endl;
	cout << "ptr address:" << ptr << endl;
	
	*ptr = 225;// change value --> valid
	
	
//	ptr = &b;// ERROR: read-only var --> invalid
	cout << "b address:  " << &b << endl;
	cout << "ptr value:  " << *ptr << endl;
	cout << "ptr address:" << ptr << endl;
		
}
