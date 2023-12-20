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
	Circular()
	{
		head = NULL;
	}
};
int main()
{
	
}
