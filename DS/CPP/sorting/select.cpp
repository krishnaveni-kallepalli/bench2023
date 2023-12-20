#include<iostream>
using namespace std;
void select(int a[],int n)
{
	int i,j,min,temp;
	for(i=0;i<n;i++)
	{
		min = i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
				min = j;

		}
		temp = a[min];
		a[min] = a[i];
		a[i] = temp;
	}
}

int main()
{
	int a[10],n,i;
	cout <<"Enter no.of elements:";
	cin >> n;
	cout << "Enter elements into arrray:\n";
	for(i=0;i<n;i++)
		cin >> a[i];
	
	select(a,n);
	
	for(i=0;i<n;i++)
		cout << a[i];
}
