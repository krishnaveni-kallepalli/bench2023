#include<iostream>
using namespace std;
int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,0};
	int (*ptr)[10],i;
	
	
	ptr = &a;
	
	for(i=0;i<10;i++)
		cout << *(*ptr+i)	 << " ";
	cout << endl;
	
}
