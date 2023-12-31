#include<iostream>
#include<stdlib.h>
#include<math.h>
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
	void find_mid();
	void sort_nodes();
	int count_nodes();
	void search();
	void search_node();
	void reverse();
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
int Double :: count_nodes()
{
	int count = 0;
	Node *ptr=head;
	while(ptr!=NULL)
	{
		count ++ ;
		ptr = ptr->next;
	}
	//cout << "Count:" << count << endl;
	return count;
}
void Double :: find_mid()
{
	float count = 0;
	int pos=0;
	float mid;
	Node *ptr = head,*p = head;
	while(ptr!=NULL)
	{
		count ++ ;
		ptr = ptr->next;
	}
	mid  = round(count/2);
	cout << "Mid:" << mid << endl;
	while(p->next!=NULL)
	{
		pos++;
		//cout << " pos :" <<pos << endl;
		if(pos == mid) 
			printf("Middle:%d\n",p->data);
		else 
		{
			p = p->next;
		}
	}
}
void Double :: sort_nodes()
{
	Node *p1 = head,*p2=NULL;
	while(p1!=NULL)
	{
		p2 = p1->next;
		while(p2!=NULL)
		{
			
			if(p1->data > p2->data)
			{
				int temp;
				temp = p1->data;
				p1->data = p2->data;
				p2->data = temp;
			}
			p2 = p2->next;
		}
		p1 = p1->next;
	}
}
void Double :: search()
{
	int ele,pos=0;
	cout << "Enter element to search:";
	cin >> ele;
	Node *ptr = head;
	for(ptr = head;ptr->next!=NULL;ptr = ptr->next)
	{
		pos++;
		if(ele == ptr->data)
			cout << "Found\n";
		else cout << "Not found\n";
	}
	cout << ptr->data << " found at " << pos << endl;
}
void Double :: search_node()
{
	int pos,position;
	cout << "Enter node to search:";
	cin >> pos;
	position = pos;
	Node *ptr = head;
	cout << ptr->data;
	while(pos!=0)
	{
		pos--;
		ptr = ptr->next;
	}
	cout << "Data at pos " << position << " is " << ptr->data << endl;
}
void Double :: reverse()
{
	//int nodes = count_nodes();
	Node *cur = head;
	Node *temp = NULL;
	while(cur != NULL)
	{
		temp = cur->prev;
		cur->prev = cur->next;
		cur->next = temp;
		cur = cur->prev;
	}
	if(ptr!=NULL)
		head = temp->prev;

}
void Double :: display()
{
	Node *ptr = head;
	cout << "\nDisplay:\n";
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
	//dll.find_middle();
	
	dll.insert(25);
	dll.insert(99);
	dll.display();
	dll.count_nodes();
	dll.find_mid();
	
	dll.delete_begin();
	dll.display();
	dll.delete_end();
	dll.delete_end();
	dll.display();
	
	int ch,data,x;
	while(1)
	{
		cout << "\n1)Insert\n2)Insert at begin\n3)Delete at begin\n4)Delete at end\n5)Find Middle\n6)Sort\n7)Count\n\
8)Find mid\n9)Search\n10)Display\n11)Search node and print data\n12)reverse\n13)Exit\n\n";
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
			dll.sort_nodes();
			dll.display();
			break;
			
			case 7:
			x = dll.count_nodes();
			cout << "Count : " << x << endl;
 			break;
			
			case 8:
			dll.find_mid();
			break;
			
			case 9:
			dll.search();
			break;
			
			case 10:
			dll.display();
			break;
			
			case 11:
			dll.search_node();
			break;
			
			case 12:
			dll.reverse();
			dll.display();
			break;
			
			case 13:
			cout << "Exit..!\n";
			exit(0);
			
			default: cout << "Invalid option\n";
			exit(1);
		}
	}

}
