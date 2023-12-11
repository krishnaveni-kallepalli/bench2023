#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *head = NULL;
void insert(struct node sll,int d)
{
	struct node *new = malloc(sizeof(struct node));
	struct node *ptr = head;
	new->data = d;
	new->link = NULL;
	
	if(head == NULL)
		head = new;			
	else if(head->link == NULL)
		head->link = new;
	else 
	{
		while(ptr->link != NULL)
			ptr = ptr->link;
		ptr->link = new; 
	}
}

void display(struct node sll)
{
	struct node *ptr=head;
	printf("\nDisplay:\n");
	if(head == NULL) printf("No nodes\n");	
	else
	{
		while(ptr != NULL)
		{
			printf("%d\n", ptr->data);
			ptr = ptr -> link;	
		}
	}
}

void find_middle(struct node sll)
{
	struct node *p=head,*q=head;
	if(p == head && q == head) printf("No nodes\n");
	else
	{
		while(q->link !=NULL && q->link != NULL)
		{
			q = q->link->link;
			p = p->link;	
		}
		printf("%d\n",p->data); 
	}
}
void count_printmiddle(struct node sll)
{
	int count = 0;
	struct node *ptr = head;
	while(ptr != NULL)
	{
		count ++;
		ptr = ptr->link;
		if(count % 2 == 0)
		{
			printf("%d\n",ptr->data);
		}
		else if(count == 1)
		{
			ptr = ptr->link;
			printf("%d\n",ptr->data);
		}
		else printf("no nodes\n");
	}
	
	//printf("Middle element : %d\n",ptr->data);
}
void count_nodes(struct node sll)
{
	int count = 0;
	struct node *ptr = head;
	while(ptr != NULL)
	{
		count ++;
		ptr = ptr->link;
	}
	printf("Count: %d\n",count);
	//printf("Middle element : %d\n",ptr->data);
}
int main()
{
	struct node sll;
	int n,d,i,ch;
	
	printf("Enter no.of nodes:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&d);
		insert(sll,d);
		
	}
	while(1)
	{
		printf("\n1)Insert\n2)display\n3)Find middle\n4)count and print mid\n5)Count nodes\n6)exit\n\n");
		printf("Enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: 
			printf("Enter data:");
			scanf("%d",&d);
			insert(sll,d);
			break;
			case 2:
			display(sll);
			break;
			case 3:
			find_middle(sll);
			break;
			case 4:
			count_printmiddle(sll);
			break;
			case 5:
			count_nodes(sll);
			break;
			exit(0);
			break;
			default:printf("Invalid\n");
			exit(1);
		}
	}
}
