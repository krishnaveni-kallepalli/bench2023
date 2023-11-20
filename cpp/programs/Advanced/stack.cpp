#include<iostream>
using namespace std;
int top = -1;
class Stack
{
	int data;
	public:
	
	void stack_top(int a[]);
	void push(int a[],int size);
	void display(int a[]);
	void pop(int a[]);
};
void Stack :: push(int a[],int size)
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
		cout << "|" << a[i] << "|" << "\n";
	cout << endl;		
}
int main()
{
	int a[100],size=10,n,i;
	cout << "Enter no.of elements:";
	cin >> n;
	cout << "Enter elements into stack:\n";
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		top ++;
	}
	Stack s;
	s.stack_top(a);
	s.push(a,size);
	s.push(a,size);
	s.push(a,size);
	s.push(a,size);
	s.stack_top(a);
	s.display(a);
	s.pop(a);
	s.pop(a);
	s.display(a);
	return 0;
}
