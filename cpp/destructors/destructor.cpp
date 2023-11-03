
// Destructor doesn't take argument and doesn't return a value 
#include<iostream>
using namespace std;
int count = 0;
class num
{
	public:
	num()
	{
		count ++ ;
		cout << "Constructor called\n" << count << endl;
	}
	
	
	~num()
	{
		cout << "Destructor called\n" << count << endl;
		count --;
	}
	
};
int main()
{
	cout << "Main:\n";
	cout << "Creating 1st object n1:\n";
	num n1;
	{
		cout <<"ENtering block\n";
		cout << "Creating 2 more objs within\n";
		num n2,n3;
		cout <<"Exiting block\n";
	}
	cout << "Back to main\n";
	return 0;
}



 
