// Inserted a node in a sorted Doubly Linked List

#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node*prev;
	struct Node *next;
};
struct Node*head=NULL;

void create(int n)
{
	struct Node*newnode,*lastnode;
	int data;
	head= new Node;
	if(head==NULL)
	{
		cout<<"Memory is not alloctaed";
	}
	else
	{
		cin>>data;
		head->data=data;
		head->prev=NULL;
		head->next=NULL;
		lastnode=head;
		
		for(int i=2;i<=n;i++)
		{
			newnode=new Node;
			if(lastnode==NULL)
			{
				cout<<"Memeory is not allocated";
				break;
			}
			else
			{
				cin>>data;
				newnode->data=data;
				newnode->prev=lastnode;
				newnode->next=NULL;
				lastnode->next=newnode;
				lastnode=newnode;
			}
		}
	}
}

void sortedInsert(int data)
{
	struct Node*temp=new Node;
	temp->data=data;
	temp->prev=NULL;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		
	}
	else if(data<head->data)    // in the beginning i.e the node which we going to insert is smallest
	{
		temp->next=head;
		head->prev=temp;
		head=temp;
	}
	else 
	{
		struct Node*p=head;
		struct Node*q;
		while(p!=NULL && p->data<data)
		{
			q=p;
			p=p->next;
		}
		if(p==NULL)        // to insert at the last node i.e node which we going to insert having largest data value
		{
			q->next=temp;
			temp->prev=q;
		}
		else            // in between the  first node and  last node
		{
			q->next = temp;
            p->prev = temp;
            temp->prev = q;
            temp->next = p;
		}
	}
}




void display()
{
	struct Node*temp;
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"<->";
		temp=temp->next;
	}
	cout<<"NULL";
}

int main()
{
	int n,data;
	cin>>n;
	cout<<"Enter the data you want to insert";
	cin>>data;
	create(n);
	sortedInsert(data);
	display();
}

// Time complexity is depend on the where you are going to insert.

// Best Case O(1) worst case O(n)

