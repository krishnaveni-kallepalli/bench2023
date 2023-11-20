#include<iostream>
using namespace std;



void fibonacci(int );

int main()
{
	int n;
	cout << "Enter range:";
	cin >> n;

	fibonacci(n);
	return 0;
}


void fibonacci(int n)
{
	int n3, n1=0,n2=1,i;

	cout << n1 << " " << n2 << " ";
	for(i=2;i<n;i++)
	{
		n3 = n1+n2;
		cout << n3 << " ";
		n1 = n2;
		n2 = n3;
	}
	cout << endl;
}
