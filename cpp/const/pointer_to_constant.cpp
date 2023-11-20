#include<iostream>
using namespace std;
int main()
{
	int a = 23,b=25;
	int const *ptr;
	ptr = &a;
	cout << "a address:  " << &a << endl;
	cout << "ptr value:  " << *ptr << endl;
	cout << "ptr address:" << ptr << endl;
	
	ptr = &b; // change address --> valid 
	cout << "b address:  " << &b << endl;
	cout << "ptr value:  " << *ptr << endl;
	cout << "ptr address:" << ptr << endl;
	
	
	//*ptr = 245;// ERROR --> read-only loc 
	//cout << "ptr value:  " << *ptr << endl;
}
