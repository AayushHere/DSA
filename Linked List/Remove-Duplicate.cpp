// To Remove duplictae node from sorted Linked List

#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next=NULL;
};

struct Node *head=NULL;

void create(int n)
{
	struct Node*p,*temp;
	int data;
	head= new Node;
	if(head==NULL)
	{
		cout<<"Memeory is not alloacted";
	}
	else
	{
		cin>>data;
		head->data=data;
		head->next=NULL;
		p=head;
		
		for(int i=2;i<=n;i++)
		{
			temp=new Node;
			if(p==NULL)
			{
				cout<<"Memeory is not alloctaed";
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
	}
}

void RemoveDuplicate()
{
	struct Node *p,*q;
	p=head;    // p is pointing to head node 
	q=head->next;    // q is pointing to 2nd node that is node after head node
	while(q!=NULL)
	{
		if(p->data!=q->data)       //  compare the data
		{
			p=q;
			q=q->next;	
		}
		else
		{
			p->next=q->next;
			delete q;
			q=p->next;
		}
	}
}

void display()
{
	struct Node*temp=head;
	while(temp)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main()
{
	int n;
	cin>>n;
	create(n);
	RemoveDuplicate();
	display();
	
}

// Time Complexity is O(n)
