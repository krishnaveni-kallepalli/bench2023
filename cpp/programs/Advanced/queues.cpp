#include<iostream>
using namespace std;
int size=10;
int front = -1;
int rear = -1;
class Queue
{
	public:
	void enq(int a[]);
	void dq(int a[]);
	void display(int a[]);
};

void Queue :: enq(int a[])
{
	int data;
	cout << "Enter data:";
	cin >> data;
	if(rear < front)
		cout << "Queue is Empty\n";
	else if(rear>size)
		cout << "Queue is Full\n";
	else
	{
		rear = rear + 1;
		a[rear] = data;
	}
}

void Queue :: dq(int a[])
{
	if(front < 0)
		cout << "Empty Queue\n";
	else 
	{
		cout << a[front] << " is dequeued\n";
		front  = front + 1;	
	}
}
void Queue :: display(int a[])
{
	int i;
	cout << endl;
	cout << "Display:\n";
	for(i=front;i<=rear;i++)
		cout << "|" << a[i] << "|" << "\n";
	cout << endl;
}
int main()
{
	int n,a[100],i,ch;
	cout <<"Enter no.of elements in queue:";
	cin >> n;
	cout << "Enter elements:\n";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		front = 0;
		rear = rear +1;
	}
	
	Queue q;
	while(1)
	{
		cout << "\n1)Enqueue\n2)Dequeue\n3)Display\n4)Exit\n\n";
		cout << "Enter choice:";
		cin >> ch;
		switch(ch)
		{
			case 1:
			q.enq(a);
			q.display(a);
			break;
			case 2:
			q.dq(a);
			q.display(a);
			break;
			case 3:
			q.display(a);
			break;
			case 4:
			exit(0);
			default: cout << "Invalid Choice.Choose valid option\n";
		}
	}
}
