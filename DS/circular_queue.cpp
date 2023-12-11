#include<iostream>
#include<stdlib.h>
#define SIZE 5
using namespace std;
int front = 0;
int rear = -1;

void enq(int a[],int data)
{
	if(rear > SIZE-1) 
	{
		cout << "Queue is full\n";
	}
	else
	{
		front  = 0;
		rear = rear + 1;
		a[rear] = data;
	}
}

void dq(int a[])
{
	if(front == -1)
		cout << "Empty Queue\n";
	else 
	{
		cout << a[front] << " is dequeued\n";
		front  = front + 1;
	}
}

void display(int a[])
{	
	cout << "\nDisplay:\n";
	for(int i=front;i<=rear;i++)
		cout << a[i] << endl;
}
int main()
{
	int a[10],size,ch,data;
	while(1)
	{
		cout <<	"\n1)Enqueue\n2)Dequeue\n3)Display\n4)Exit\n\n";
		cout << "Enter choice:";
		cin >> ch; 
		switch(ch)
		{
			case 1: 
			cout << "Enter element:";
			cin >> data;
			enq(a,data);
			break;
			
			case 2:
			dq(a);
			break;
			
			case 3:
			display(a);
			break;
			
			case 4:
			exit(0);
			break;
			default : cout << "Incorrect\n";
		}
	}
}
