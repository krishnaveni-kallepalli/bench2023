#include<iostream>

using namespace std;
int main()
{
	int a[100],temp,j,n,i,ele,lb,ub,mid,found=0;
	cout << "Enter no.of elements\n";
	cin >> n;
	cout << "Enter elements into array\n";
	for(i=0;i<n;i++)
		cin >> a[i];
		
	cout << "Enter element to search:";
	cin >> ele;
	
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
	cout << "Sorted array:\n";
	for(i=0;i<n;i++)
		cout << a[i] << "\t";
	cout << endl;
	lb = 0;
	ub = n-1;
	
	while(!found)
	{
		mid = (lb+ub)/2;
		if(ele == a[mid])
		{
			found = 1;
		}
		else if(ele > a[mid])
		{
			lb = mid+1;
		}
		else if(ele < a[mid])
		{
			ub = mid-1;
		}
	}
	if(found) cout << ele << " found at " << mid+1 << endl;
	else cout << "not found\n";
	return 0;
}
