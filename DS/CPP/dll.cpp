#include<iostream>
#include<stdlib.h>
using namespace std;
class Node
{
	public:
	int data;
	Node *prev,*next;
	Node()
	{
		data = 0;
		prev = NULL;
		next = NULL;
	}
	Node(int data)
	{
		this->data = data;
		this->prev = NULL;
		this->next = NULL;
	}
};
class Double : public Node
{
	public:
	Node *head;
	Double()
	{
		head = NULL;
	}
	void insert(int);
	void insert_begin(int);
	void display();
	void delete_begin();
	void delete_end();
	void find_middle();
};

void Double :: insert(int data)
{
	Node *newnode = new Node(data);
	Node *ptr = head;
	if(head == NULL)
	{
		head = newnode;
	}
	else
	{
		while(ptr->next != NULL)
		{
			ptr = ptr->next;
		} 
		ptr->next = newnode;
		newnode->prev = ptr;
	}
}
void Double :: insert_begin(int data)
{
	Node *newnode = new Node(data);
	newnode->next = head;
	head->prev = newnode;
	head = newnode;
}
void Double :: delete_begin()
{
	cout << "Deleted first element:" << head->data << endl;
	head = head->next;
	head->prev = NULL;
}
void Double :: delete_end()
{
	Node *ptr = head;
	while(ptr->next->next !=NULL)
		ptr = ptr->next;
	cout << "Deleted last element:" << ptr->next->data << endl;
	ptr->next = NULL;
}
void Double :: find_middle()
{
	Node *p = head,*q=head;
	while(q!=NULL && q->next!=NULL)
		p = p->next,q = q->next->next;
	cout << "Middle element :" << p->data<<endl;
}
void Double :: display()
{
	Node *ptr = head;
	cout << "\n	Display:\n";
	if(head == NULL) cout << "No nodes\n";
	while(ptr != NULL)
	{
		cout << ptr->data << endl;
		ptr = ptr->next;
	}
}
int main()
{
	Double dll;
	dll.insert(23);
	dll.insert(45);
	dll.insert(33);
	dll.insert_begin(11);
	dll.insert_begin(56);
	dll.display();
	dll.find_middle();
	
	dll.insert(255);
	dll.display();
	dll.find_middle();
	
	dll.delete_begin();
	dll.display();
	dll.delete_end();
	dll.delete_end();
	dll.display();
	
	int ch,data;
	while(1)
	{
		cout << "\n1)Insert\n2)Insert at begin\n3)Delete at begin\n4)Delete at end\n5)Find Middle\n6)Display\n7)Exit\n\n";
		cout << "Enter choice:";
		cin >> ch;
		switch(ch)
		{
			case 1:
			printf("Enter data:");
			cin >> data;
			dll.insert(data);
			break;
			
			case 2:
			cout << "Enter data:";
			cin >> data;
			dll.insert_begin(data);
			break;
			case 3:
			dll.delete_begin();
			break;
			case 4:
			dll.delete_end();
			break;
			case 5: 
			dll.display();
			dll.find_middle();
			break;
			case 6:
			dll.display();
			break;
			case 7:
			cout << "Exit..!\n";
			exit(0);
			default: cout << "Invalid option\n";
			exit(1);
		}
	}
}
