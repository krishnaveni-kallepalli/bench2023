#include<iostream>
using namespace std;
int top = -1,size=10;
class Stack
{
	int data;
	public:
	
	void stack_top(int a[]);
	void push(int a[]);
	void display(int a[]);
	void pop(int a[]);
};
void Stack :: push(int a[])
{
	cout << "Enter data to push:";
	cin >> data;
	
	if(top == size-1) 
		cout << "Stack overflow\n";
	else
	{
		top = top+1;
		a[top] = data;
	}
	
}
void Stack :: pop(int a[])
{
	if(top == -1)
		cout << "Stack is empty\n";
	else
	{

		cout << "pop element:" << a[top] << endl;
		top = top -1;
	}
}
void Stack :: stack_top(int a[])
{
	cout << "top most element in stack is:" << a[top] << endl;
}
void Stack :: display(int a[])
{
	int i;
	cout << endl;	
	cout << "Display:\n";
	for(i=top;i>=0;i--)
	{
		cout << "|" << a[i] << "|" << "\n";
	}
	cout << endl;
}
int main()
{
	int a[100],n,i,ch;
	cout << "Enter no.of elements:";
	cin >> n;
	cout << "Enter elements into stack:\n";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		top ++;
	}
	
	Stack s;
	s.display(a);
	while(1)
	{
	cout << endl;
	cout << "1)push\n2)pop\n3)top element\n4)display\n5)Exit\n";
	cout << endl;
	cout << "Enter choice:";
	cin >> ch;
	switch(ch)
	{
	 case 1:
		 s.push(a);
		 s.display(a);
		 break;
	 case 2:
		 s.pop(a);
		 s.display(a);
		 break;
	 case 3:
	  	 s.display(a);
		 s.stack_top(a);
		 break;
	 case 4:
		 s.display(a);
		 break;
	 case 5: 
	 	exit(0);
	 default : cout << "invalid choice\n";
	}
	}
	
	return 0;
}
