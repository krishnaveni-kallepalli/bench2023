#include<iostream>
using namespace std;
void chk_sorted(int a[],int n)
{
	int yes = 1;
	if(n==0|n==1);
	else
	{
		cout << "n:" << n;
		for(int i=0;i<n;i++)
		{
			if(a[i] > a[i+1])
			{
				yes = 0;
				break;
			}
		}
	}	
	if(yes==1) cout << "Sorted\n";
	else cout << "Not sorted\n";	
}

int main()
{
	int a[100],n,i;
	cout << "Enter no.of elements\n";
	cin >> n;
	cout << "Enter elements into array\n";
	for(i=0;i<n;i++)
		cin >> a[i];
	
	chk_sorted(a,n);

}
