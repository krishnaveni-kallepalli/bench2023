#include<iostream>
using namespace std;
int chk_sorted(int a[],int n)
{
	if(n==0|n==1) return 1;
	else
	{
		cout << "n:" << n;
		for(int i=0;i<n;i++)
			if(a[i] > a[i+1]) return 0;
	}	
}
void sort(int a[],int n)
{
	int i,j,temp;
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
int binary_search(void (*fp)(int [],int),int a[],int n)
{
	int lb,ub,mid,i,found =0;
	cout << "Sorted array:\n";
	for(i=0;i<n;i++)
		cout << a[i] << "\t";
	cout << endl;
	int ele;
	cout << "Enter element to search:";
	cin >> ele;
	fp(a,n);
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
int main()
{
	int a[10]={23,11,32,54,20,16,77,98,56,85};
	int n,i,j,temp;
	n = sizeof(a)/sizeof(a[0]);
	cout << "Given array:\n";
	for(i=0;i<n;i++)
		cout << a[i] << "\t";
	
	cout << endl;
	
	
	if(chk_sorted(a,n))
		binary_search(sort,a,n);
	else
	{
		sort(a,n);
		binary_search(sort,a,n);
	}
	return 0;
}
