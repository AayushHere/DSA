// Insert a node in the Doubly Linked List

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

void insert(int position,int data ,int n)
{
	struct Node *p=head;
	struct Node*temp= new Node;
	temp->data=data;
	temp->prev=NULL;
	temp->next=NULL;
	if(position<=0 && position>n)
	{
		cout<<"wrong position";
	}
	
	else if(head==NULL)
	{
		cout<<"first create the node";
	}
	
	else if(position==1)
	{
		temp->next=head;
		head->prev=temp;
		head=temp;
	}
	else if(position>1 && position<=n) 
	{
		for(int i=1;i<position-1;i++)
		{
			p=p->next;
		}
		if(p->next==NULL)
		{
			p->next=temp;
			temp->prev=p;
		}
		else
		{
			temp->next=p->next;
			temp->next->prev=temp;
			p->next=temp;
			temp->prev=p;
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
	int n,position,data;
	cin>>n;
	cout<<"enter the position";
	cin>>position;
	cout<<"enter the data";
	cin>>data;
	create(n);
	insert(position,data,n);
	display();
}


// Time Complexity is depend on where you want to insert a node

// Best Case O(1) worst case O(n)
