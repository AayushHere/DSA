// Reverse a Doubly Linked list

#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *prev;
	struct Node*next;
};
struct Node*head=NULL;

void create(int n)
{
	struct Node *newnode,*lastnode;
	head=new Node;
	int data;
	if(head==NULL)
	{
		cout<<"memory is not allocated";
	}
	else
	{
		cin>>data;
		head->data=data;
		head->next=NULL;
		head->prev=NULL;
		lastnode=head;
	}
	
	for(int i=2;i<=n;i++)
	{
		newnode=new Node;
		newnode->prev=NULL;
		newnode->next=NULL;
		if(lastnode==NULL)
		{
			cout<<"Memory is not allocate";
			break;
		}
		else
		{
			cin>>data;
			newnode->data=data;
			newnode->prev=lastnode;
			lastnode->next=newnode;
			lastnode= newnode;
		}
	}
}

void reverseDLL()
{
	struct Node *p=head;
	struct Node*temp;
	if(head==NULL)
	{
		cout<<"No Node in the linked list";
	}
	else
	{
		while(p)
		{
			temp=p->next;  
			p->next=p->prev;
			p->prev=temp;
			head=p;
			p=temp;
		}
	}
}

void display()
{
	struct Node*temp;
	temp=head;
	while(temp)
	{
		cout<<temp->data<<"<->";
		temp=temp->next;
	}
	cout<<"NULL";
}

int main()
{
	int n;
	cin>>n;
	create(n);
	reverseDLL();
	display();
}

// Time Complexity is O(n)
