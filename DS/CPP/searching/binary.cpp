#include<iostream>
using namespace std;
int main()
{
	int a[10]={23,11,32,54,20,16,77,98,56,85};
	int size,i,j,temp;
	size = sizeof(a)/sizeof(a[0]);
	cout << "Given array:\n";
	for(i=0;i<size;i++)
		cout << a[i] << "\t";
	
	cout << endl;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size-i-1;j++)
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
	for(i=0;i<size;i++)
		cout << a[i] << "\t";
	
	cout << endl;
	
	float mid;
	int ele,beg,end;
	begin = 0;
	end = size;
	mid = (begin+end)/2;
	
	cout << "Enter element to search:";
	cin >> ele;
	
	for(i=0;i<=mid;i++)
	{
		if(a[mid] == ele)
			cout << ele << " found at " << mid+1 << endl;
		else if(a[mid] < ele)
		{
			mid = mid/2;
		}
	}
}
