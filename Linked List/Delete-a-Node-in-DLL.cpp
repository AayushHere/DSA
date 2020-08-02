//To delete a node from a Doubly Linked List

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

void Delete(int position ,int n)
{
	struct Node *p=head;
	if(position==1)
	{
		p=p->next;
		cout<<"Deleted Element is = "<<head->data<<"\n";
		delete head;
		head=p;
	}
	else if(position>1 && position<=n)
	{
		int i=1;
		struct Node*q;
		while(p!=NULL)
		{
			if(i==position)
			{
				q->next=p->next;
				p->next->prev=q;
				cout<<"Deleted element is = "<<p->data<<"\n";
				delete p;
				break;
			}
			q=p;
			p=p->next;
			i++;
		}
		if(p==NULL && position==n)
		{
			q->prev->next=NULL;
		cout<<"Deleted Element is = "<<q->data<<"\n";
		delete q;
		}
		
	}
	else
	{
		cout<<"Wrong position";
	}
	
}

void display()
{
	struct Node*temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"<->";
		temp=temp->next;
	}
	cout<<"NULL";
}


int main()
{
	int n,position;
	cin>>n;
	cout<<"Enter the position";
	cin>>position;
	create(n);
	Delete(position ,n);
	display();
}

// Time Complexity is depend on the element which you want to delete 

// if we delete the head node i.e first node than time Complexity is O(1) 

// Best Case O(1), worst case O(n)
