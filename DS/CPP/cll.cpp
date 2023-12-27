#include<iostream>
#include<stdlib.h>
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
	int count();

	void insert(int);
	void delete_begin();
	void insert_begin(int);
	void insert_last(int);
	void insert_pos(int);
	void delete_last();
	void display();
	void delete_pos();
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
		while(ptr->link!= head)
			ptr = ptr->link;
		ptr->link = newnode;
		newnode->link = head;
	}
}

void Circular :: insert_begin(int data)
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
		while(ptr->link!=head)
			ptr = ptr->link;
		ptr->link = newnode;
		newnode->link = head;
		head = newnode;
	}
}
void Circular :: insert_last(int data)
{
	Node *newnode = new Node(data);
	Node *ptr = head;
	while(ptr->link!=head)
		ptr= ptr->link;
	ptr->link = newnode;
	newnode->link = head;
}
void Circular :: insert_pos(int data)
{
	Node *newnode = new Node(data);
	Node *ptr = head;
	
	
	int pos;
	cout << "Enter pos:";
	cin >> pos;
	pos--;
	while(pos!=1)
	{
		ptr = ptr->link;
		pos--;
	}
	newnode->link = ptr->link;
	ptr->link = newnode;
}
void Circular :: delete_begin()
{
	Node *ptr = head;
	Node *q = head;
	cout << "Delete First node:" << head->data << endl;
	while(q->link!=head)
		q=q->link;
	q->link = head->link;
	head = head->link;
	delete ptr;
}
void Circular :: delete_last()
{
	Node *p = head,*q=NULL;
	
	while(p->link->link!=head)
	{
		p = p->link;
	}
	q = p->link;
	cout << "Delete Last element:" << q->data << endl;
	p->link = head;
	delete q;
}
void Circular :: delete_pos()
{
	Node *p = head,*q=NULL;
	int pos;
	cout << "Enter pos:";
	cin >> pos;
	pos--;
	while(pos!=1)
	{
		p = p->link;
		pos --;
	}
	q = p->link;
	
	p->link = p->link->link;
	cout << "Deleted element : "<< q->data << endl; 
	delete q;
}
int Circular :: count()
{
	int count = 1;
	Node *ptr = head;
	
	while(ptr->link!=head)
	{
		count ++;
		ptr=ptr->link;
	}
	//cout << "No.of nodes:" << count << endl;
	return count;
}
void Circular :: display()
{
	cout << "Display:\n";
	Node *ptr = head;

 	do
    {
      printf ("%d ", ptr->data);
      ptr = ptr->link;
    }  while (ptr != head);
  cout << endl;
}

int main()
{
	Circular cll;	
	int x;
	x = cll.count();
	cout << "No.of nodes :" << x;
	
	
	cll.insert(22);
	cll.insert(23);
	cll.insert(67);
	cll.insert(55);
	cll.insert_begin(88);
	cll.insert_last(20);
	cll.display();
	
	cll.delete_begin();
	cll.display();
	
	cll.delete_last();
	cll.display();
	
	cll.insert_pos(99);
	cll.display();
	cll.count();
	cll.delete_pos();
	cll.display();
	cll.count();
	int ch,data;
	while(1)
	{
		cout << "\n\n1)Insert\n2)Insert at start\n3)Insert at End\n4)Insert at position\n5)Delete at begin\n\
6)Delete at End\n7)Delete at Position\n8)Display\n";
		cout << "Enter choice:";
		cin >> ch;
		
		
		switch(ch)
		{
			case 1:
			cout << "Enter data:";
			cin >> data;
			cll.insert(data);
			break;
			case 2:
			cout << "Enter data:";
			cin >> data;
			cll.insert_begin(data);
			break;
			case 3:
			cout << "Enter data:";
			cin >> data;
			cll.insert_last(data);
			break;
			case 4:
			cout << "Enter data:";
			cin >> data;
			cll.insert_pos(data);
			break;
			case 5:
			cll.delete_begin();
			break;
			case 6:
			cll.delete_last();
			break;
			case 7:
			cll.delete_pos();
			break;
			case 8:
			cll.display();
			break;
			case 9:
			exit(0);
			default:
			cout << "Invalid choice\n";
			exit(1);
			
		}
	}
}
