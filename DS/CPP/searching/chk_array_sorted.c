#include<stdio.h>
int main()
{
	int a[100],n,i;
	cout << "Enter no.of elements\n";
	cin >> n;
	cout << "Enter elements into array\n";
	for(i=0;i<n;i++)
		cin >> a[i];
	
	
	if(n==0|n==1)
		cout << "Sorted\n";
	else
	{
		for(;n!=0;n--)
		{
			if(a[n-1] < a[n-2])
				cout << "Sorted\n";
			else cout << "not soretd\n";
		}
	}
}
