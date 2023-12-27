#include<iostream>
#include<math.h>
using namespace std;
class Node 
{
	public :
	int data;
	class Node *prev;
	class Node *next;
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
class Circular_dll
{
	public:
	Node *head;
	Circular_dll()
	{
		head = NULL;
	}
	void insert(int);
	void display();
	int count();
	void check_loop();
	void insert_begin(int);
	void insert_end(int);
	void insert_pos(int);
	void delete_begin();
	void delete_end();
	void delete_pos();
	void find_middle();	
};
int Circular_dll :: count()
{
	Node *ptr = head;
	int Count =0;
	do
	{
		Count ++;
		ptr = ptr->next;
	}while(ptr != head);
	
	return Count ;
}  
void Circular_dll :: insert(int data)
{
	Node *newnode = new Node(data);
	Node *ptr = head;
	if(head == NULL)
	{
		head = newnode;
		newnode->next = head;
		newnode->prev = head;
	}
	else 
	{
		while(ptr->next!=head)
			ptr = ptr->next;
		newnode->next = ptr->next;
		newnode->prev = ptr;
		ptr->next = newnode;
	}
}
void Circular_dll :: insert_begin(int data)
{
	Node *newnode = new Node(data);
	Node *ptr= head;
	if(head == NULL)
	{
		head = newnode;
		newnode->next = head;
		newnode->prev = head;
	}
	else
	{
		while(ptr->next!=head)
			ptr = ptr->next;
		ptr->next = newnode;
		
		newnode->prev = head->prev;
		head->prev = newnode;
		newnode->next = head;
		head = newnode;
	}
}
void Circular_dll :: insert_end(int data)
{
	Node *newnode = new Node(data);
	Node *ptr =head;
	if(head == NULL)
	{
		head = newnode;
		newnode->next = head;
		newnode->prev = head;
	}
	else
	{
		while(ptr->next!=head)
			ptr = ptr->next;
		newnode->next = ptr->next;
		newnode->prev = ptr;
		ptr->next = newnode;
	}
}
void Circular_dll :: insert_pos(int data)
{
	int pos;
	Node *newnode = new Node(data);
	Node *ptr = head;
	cout << "Enter pos to insert:";
	cin >> pos;
	
	pos--;
	while(pos!=1)
	{
		ptr = ptr->next;
		pos --;
	}
	newnode->prev = ptr;
	newnode->next = ptr->next;
	ptr->next = newnode;
}
void Circular_dll :: delete_begin()
{
	Node *ptr = head;
	Node *p = head;
	if(head == NULL)
		cout << "Empty\n";
	else
	{
		while(ptr->next!=head)
			ptr = ptr->next;
		ptr->next = head->next;
		head->next->prev = head->prev;
		head = head->next;
	}
	cout << "Deleted : " << p->data << endl;
	delete p;
}
void Circular_dll :: delete_end()
{
	Node *ptr = head;
	if(head == NULL)
		cout << "Empty\n";
	else
	{
		while(ptr->next!=head)
			ptr = ptr->next;
		ptr->prev->next = ptr->next; 
	}
	cout << "Deleted : " << ptr->data << endl;
	delete ptr;
}
void Circular_dll :: delete_pos()
{
	int pos;
	Node *ptr = head;
	cout << "Enter pos:";
	cin >> pos;
	while(pos!=1)
	{
		ptr = ptr->next;
		pos --;
	}

	ptr->next->prev = ptr->prev;
	ptr->prev->next = ptr->next;
	
	cout << "Deleted : " << ptr->data << endl;
	delete ptr;
}
void Circular_dll :: display()
{
	Node *ptr = head;
	cout << "\nDisplay:\n";
	if(head == NULL)
		cout << "Empty\n";
	else 
	{
		do
		{
			cout << ptr->data << endl;
			ptr = ptr->next;
		}while(ptr != head);
	}
}
void Circular_dll :: find_middle()
{
	Node *ptr = head;
	Node *p = head;
	float count =0;
	do
	{
		count ++;
		ptr = ptr->next;
	}while(ptr != head);
	
	float mid = round(count/2);
	while(mid!=1)
	{
		p = p->next;
		mid -- ;
	}
	cout << "Middle:" << p->data << endl;
}
void Circular_dll :: check_loop()
{
	Node *p = head;
	Node *q = head;
	
	while(q->next!=p->next)
	{
		p = p->next;
		q = q->next->next;
	}
	if(p == q)
		cout << "Loop Found\nIt is a CLL\n";
	else
		cout << "Loop not Found\nIt is not a CLL\n";
}
int main()
{
	class Circular_dll c;
	int x,ch,data;
	
	while(1)
	{
		cout << "\n1)Insert\n2)Insert at begin\n3)Insert at end\n4)Insert at pos\n5)Delete at begin\n6)delete at end\n7)Delete at pos\n8)Find middle\n9)count\n10)check loop or not\n11)Display\n12)Exit\n\n";
		cout << "Enter choice:";
		cin >> ch;
		switch(ch)
		{
			case 1:
			cout << "Enter data:";
			cin >> data;
			c.insert(data);
			break;
			case 2:
			cout << "Enter data:";
			cin >> data;
			c.insert_begin(data);
			break;
			case 3:
			cout << "Enter data:";
			cin >> data;
			c.insert_end(data);
			break;
			case 4:
			cout << "Enter data:";
			cin >> data;
			c.insert_pos(data);
			break;
			case 5:
			c.delete_begin();
			break;
			case 6:
			c.delete_end();
			break;
			case 7:
			c.delete_pos();
			break;
			case 8:
			c.find_middle();
			break;
			case 9:
			x = c.count();
			cout << "Count :" << x <<  endl; 
			break;
			case 10:
			c.check_loop();
			break;
			case 11:
			c.display();
			break;
			case 12:
			exit(0);
			default:
			cout << "Invalid\n";
			exit(1);
		}
	}
	return 0;
}
