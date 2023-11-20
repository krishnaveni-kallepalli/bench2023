#include<iostream>
using namespace std;


int main()
{
	int num,count = 0;
	cout << "enter number:";
	cin >> num;
	cout << num << endl;
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
			count ++;
	}	
	if(count == 0)
		cout << num << " is prime\n";
	else
		cout << num << " is composite\n";
}
