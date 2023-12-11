#include<iostream>
using namespace std;
int main()
{
	int a[10],count ,i,j,n;
	cout << "Enter size:";
	cin >> n;
	
	cout << "Enter elements into array:\n";
	for(i=0;i<n;i++)
		cin >> a[i];
	
	for(i=0;i<n;i++)
	{
		count = 1;
		if(a[i]>0)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i] == a[j])
				{
					count ++;
					a[j] = 0;
				}
			}
			cout << a[i] << " : " << count <<endl;
			count = 0;
		}
	}
	
}
