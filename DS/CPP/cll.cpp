#include<iostream>
using namespace std;

class Node
{
	public:
	int data;
	Node *link;
	Node()
	{
		data = 0;
		link = NULL;
	}
	Node(int data)
	{
		this->data = data;
		this->link = NULL;
	}
};

class Circular
{
	public:
	Node *head;
	Circular()
	{
		head = NULL;
	}
	void insert(int);
	void display();
};
void Circular :: insert(int data)
{
	Node *newnode = new Node(data);
	Node *ptr = head;
	
	if(head == NULL)
	{
		head = newnode;
		newnode->link = head;
	}
	else
	{
		while(ptr != head)
			ptr = ptr->link;
		ptr->link = newnode;
		newnode->link = head;
	}
}
void Circular :: display()
{
	Node *ptr = head;
	while(ptr != head)
	{
		cout << ptr->data << endl;
		ptr = ptr->link;
	}
}
int main()
{
	Circular cll;
	cll.insert(22);
	cll.insert(23);
	cll.insert(67);
	cll.insert(25);
	cll.display();
}
