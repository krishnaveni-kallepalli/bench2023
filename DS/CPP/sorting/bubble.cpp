#include<iostream>
using namespace std;
void bubble(int a[],int n)
{
	int i,j;
	int temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
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
		
	bubble(a,n);
	
	cout << "After sorting:\n";
	for(i=0;i<n;i++)
		cout << a[i];
	return 0;
}
