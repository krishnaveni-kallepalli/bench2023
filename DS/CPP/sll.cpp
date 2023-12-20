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

class Linkedlist : public Node
{
	public:
	Node *head;
	Linkedlist()
	{
		head  = NULL;
	}
	void insert(int);
	void delete_first();
	void delete_end();
	void find_middle();
	void display();
	void reverse();
};

void Linkedlist :: insert(int data)
{
	Node *newnode = new Node(data);// Node(data) -- > constructor
	Node * ptr = head;
	if(head == NULL)
		head  = newnode;
	else
	{
		while(ptr->link != NULL)
			ptr = ptr -> link;
		ptr-> link = newnode;
	}
}
void Linkedlist :: find_middle()
{
	Node *p = head,*q = head;
	while(q!=NULL && q->link != NULL)
	{
		q = q->link->link;
		p = p->link;
	}
	cout << "Middle Element:" << p->data << endl;
}
void Linkedlist :: delete_first()
{
	if(head == NULL)
		cout << "Empty list\n";
	else
	{
		cout << "Head data:" << head->data  << " is deleted" << endl;
		head = head->link;
	}
	cout << "After deleting node 1:" << head->data << endl;
}
void Linkedlist :: delete_end()
{
	Node *ptr = head;
	if(head == NULL)
		cout << "Empty list\n";
	else
	{
		while(ptr->link->link != NULL)
		{
			ptr = ptr->link;
		}
		cout << ptr->link->data << " is deleted" << endl;
		ptr->link = NULL;
	}
}
void Linkedlist :: reverse()
{
	Node *cur = head;
	Node *prev = NULL;
	while(cur!=NULL)
	{
		link = cur->link;
		cur->link = prev;
		prev = cur;
		cur = link;
	}
	head = prev;	 
}
void Linkedlist :: display()
{
	cout << "\nDisplay:\n";
	Node *ptr = head;
	while(ptr != NULL)
	{
		cout << ptr->data << endl;
		ptr = ptr -> link;
	}
}
int main()
{
	int ch,d,nodes;
	class Linkedlist l;

	l.insert(23);
	l.insert(12);
	l.insert(44);
	l.display();
	
	while(1)
	{
		cout << "\n1)Insert\n2)Display\n3)Find middle\n4)Delete First\n5)Delete at End\n6)Reverse\n7)Exit\n\n";
		cout << "Enter choice:";
		cin >> ch;
		switch(ch)
		{
			case 1:
			cout << "Enter data:";
			cin >> d;
			l.insert(d);
			break;
			
			case 2:
			l.display();
			break;
			
			case 3: 
			l.find_middle();
			break;
			
			case 4:
			l.delete_first();
			break;
			
			case 5:
			l.delete_end();
			break;
			
			case 6:
			l.display();
			l.reverse();
			cout << "After Reversing\n";
			l.display();
			break;
			
			case 7:
			exit(0);
			break;
			
			default: cout << "Invalid\n";
			exit(1);
		}
	}
	return 0;
}
