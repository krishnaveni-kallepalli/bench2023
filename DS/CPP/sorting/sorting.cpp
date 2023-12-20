#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct Sort
{
	void (*fp)(int [],int) ;
	void (*fp1)(int [],int);
	void (*fp2)(int [],int);
	void (*fp3)(void (*fun)(int [],int));
	
}sorting;
enum option
{
	BUBBLE=1,
	INSERT,SELECT,DISPLAY,EXIT,
};

void bubble(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	cout << "After Sorting:\n";
	for(i=0;i<n;i++)
		cout << a[i] << endl;
}
void insert(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp = a[i];
		while(j>=0 && temp >=a[j])
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1] = temp;
		j++;
	}
	cout << "After Sorting:\n";
	for(i=0;i<n;i++)
		cout << a[i] << endl;
}
void select(int a[],int n)
{
	int i,j,min,temp;
	for(i=0;i<n;i++)
	{
		min  = i;
		for(j=i+1;j<n;j++)
		{
			if(a[min] >a[j])
				min  = j;
		}
		temp = a[min];
		a[min] = a[i];
		a[i] = temp;
	}
	cout << "After Sorting:\n";
	for(i=0;i<n;i++)
		cout << a[i] << endl;
}

int main()
{
	sorting sort;
	enum option op;
	sort.fp  = bubble;
	sort.fp1 = insert;
	sort.fp2 = select;
	
	int a[10],n,i;

	
	cout << "\n1)BUBBLE\n2)INSERT\n3)SELECT\n4)EXIT\n\n";
	cout << "Enter choice:\n";
	scanf("%d",&op);
	switch(op)
	{
		case BUBBLE:
		cout <<"Enter no.of elements:";
		cin >> n;
		cout << "Enter elements into arrray:\n";
		for(i=0;i<n;i++)
			cin >> a[i];
		sort.fp(a,n);
		break;
		
		case INSERT:
		cout <<"Enter no.of elements:";
		cin >> n;
		cout << "Enter elements into arrray:\n";
		for(i=0;i<n;i++)
			cin >> a[i];
		sort.fp1(a,n);
		break;
		
		case SELECT:
		cout <<"Enter no.of elements:";
		cin >> n;
		cout << "Enter elements into arrray:\n";
		for(i=0;i<n;i++)
			cin >> a[i];
		sort.fp2(a,n);
		break;
		
		case DISPLAY:
		sort.fp3(bubble);
		
		case EXIT:
		exit(0);

		default:
		cout <<"Invalid\n";
		exit(1);
	}
}
