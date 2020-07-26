// To insert a node at a given position in Linked List

// This program is also work for if you want to insert a node at the end of the Linked list
#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};
struct Node *head=NULL;
void create(int n)
{
	struct Node *p,*temp;
	int data;
	head= new Node;
	if(head==NULL)
	{
		cout<<"Memeory is not allocated";
	}
	cin>>data;
	head->data=data;
	head->next=NULL;
	p=head;
	
	for(int i=2;i<=n;i++)
	{
		temp=new Node;
		if(p==NULL)
		{
			cout<<"Memeory is not allocated";
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

void  insertGivenPosition(Node *temp,int data,int position)
{
	struct Node *p,*q=head;
	p= new Node;
	p->data=data;
	p->next=NULL;

	for(int i=0;i<position-1;i++)
	{
		temp=temp->next;
	}
	p->next=temp->next;
	temp->next=p;
}	


void display()
{
	struct Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
	
}

int main()
{
	int n,position,data;
	cin>>n;
	cout<<"Enter the position where want to insert";
	cin>>position;
	cout<<"Enter the data want to insert";
	cin>>data;
	create(n);
	insertGivenPosition(head,data,position);
	display();	
}


// Time complexity is based on where you want to insert a node 

// if u insert a node after first node than time complexity is constant i.e O(1)

// In worst Case ime Complexity is O(n), in best case is O(1)
