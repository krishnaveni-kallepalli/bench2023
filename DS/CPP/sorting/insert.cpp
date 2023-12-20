#include<iostream>
using namespace std;
void insert(int a[],int n)
{
	int temp,i,j;
	for(i=1;i<n;i++)
	{
		temp =   a[i];
		j = i-1;
		while(j>=0 && temp <=a[j])
		{
			a[j+1] = a[j];
			j=j-1;
		}
		a[j+1] = temp;
		j++;
	}
}
int main()
{	
	int a[10],n,i;
	cout << "Enter no.of elements in array:";
	cin >> n;
	
	cout << "Enter elements into array:\n";
	for(i=0;i<n;i++)
		cin >> a[i];
		
	insert(a,n);
	
	cout << "After sorting:\n";
	for(i=0;i<n;i++)
		cout << a[i];
	return 0;
		
}
