#include<iostream>
using namespace std;
int linear(int a[],int size,int ele)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(a[i] == ele)
			return i+1;
	}
}
int main()
{
	int a[10],size,ele,i,x;
	cout << "Enter size of array:";
	cin >> size;
	cout << "Enter elements:\n";
	for(i=0;i<size;i++)
		cin >>a[i];
	cout << "ENter element to check:";
	cin >> ele;
	
	x = linear(a,size,ele);
	cout <<"Found at "<<x <<" position\n";
	
	
}
