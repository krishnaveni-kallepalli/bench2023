#include<iostream>
using namespace std;
void printarr(int (&a)[10],int size)
{
	int i;
	for(i=0;i<size;i++)
		cout << a[i] << " ";
}
int main()
{
	int a[10];
	int i,n;
	
	printf("Enter Size:");
	cin >> n;
	
	for(i=0;i<n;i++)
		cin >> a[i];	
	//size = sizeof(a)/sizeof(a[0]);
	printarr(a,n);
}
