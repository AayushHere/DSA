// To Delete a node from circular Linked List

#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node*next;
};
struct Node*head=NULL;

void create(int n)
{
	struct Node *p,*temp;
	int data;
	head=new Node;
	if(head==NULL)
	{
		cout<<"Memory is not allocated";
	}
	else
	{
		cin>>data;
		head->data=data;
		head->next=NULL;
		p=head;
		
		for(int i=2;i<=n;i++)
		{
			temp= new Node;
			if(p==NULL)
			{
				cout<<"Memory is not allocated";
				break;
			}
			else
			{
				cin>>data;
				temp->data=data;
				temp->next=NULL;
				p->next=temp;
				p=p->next;
			}
		}
		p->next=head;
	}
}

void Delete(int position,int n)
{
	struct Node*p,*q;
	p=head;
	if(position<0 || position>n)
	{
		cout<<"Wrong position";
	}
	else if(position==1)   // to delete the first node i.e head node
 	{
		while(p->next!=head)
		{
			p=p->next;	
		}
		cout<<head->data<<"\n";
		if(head==p)
		{
			delete head;
			head=NULL;
		}
		else
		{
			p->next=head->next;
			cout<<head->data;
			delete head;
			head =p->next;    // now first node i.e head node delete and next node become head
		}
 	}
	else if(position>0 && position<n)
	{
		for(int i=0;i<position-2;i++)
		{
			p=p->next;
		}
		q=p->next;
		p->next=q->next;
		cout<<q->data;
		delete q;	
	}
}

void display()
{
	struct Node *temp=head;
	
	do{
		cout<<temp->data;
		temp=temp->next;
	}while(temp!=head);
}
int main()
{
	int n,position;
	cin>>n;
	cin>>position;
	create(n);
	Delete(position,n);
	display();	
}

// Time Complexity is depend on the element which you want to delete.

// Best Case O(1)  worst Case O(n)
