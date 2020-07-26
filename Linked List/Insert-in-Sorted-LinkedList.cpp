// To insert a node in a sorted Linked List
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
		temp= new Node;
		if(temp==NULL)
		{
			cout<<"Memory is not allocated";
		}
		cin>>data;
		temp->data=data;
		temp->next=NULL;
		p->next=temp;
		p=p->next;
	}	
}


void insertSorted(int data)
{
	
	struct Node *p=head;
	struct Node *q=NULL;
	if(data<p->data)    // if the element you want to insert is smallest 
	{
		struct Node *t=new Node;
		t->data=data;
		t->next=head;
		head=t;		
	}
	else
	{
		struct Node *insert= new Node;
		insert->data=data;
		insert->next=NULL;
		while(p!=NULL && p->data<data)   // // this condition is for in between or in the last of the linked list 
		{
			q=p;   // I'm using two pointer q and p  
			p=p->next;	
		}
		insert->next=q->next;
		q->next=insert;		
	}	
}	

void display()
{
	struct Node *temp;
	temp=head;
	while(temp)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}
int main()
{
	int n,data;
	cin>>n;
	cout<<"Enter the element to be inserted";
	cin>>data;
	create(n);
	insertSorted(data);
	display();		
}

// Time Complexity is depend on the element which you want to insert.

// The element you want to insert is smallest in size than Time complexity is O(1) i.e constant

// Best case O(1), worst case O(n)







