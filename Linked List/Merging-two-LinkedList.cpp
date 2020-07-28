// Merging of Two Linked List

//  NOTE-> Linked List must be sorted  //

#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node*next;
};
struct Node *headA=NULL;
struct Node *headB=NULL;
struct Node* third=NULL;

void create1(int m)
{
	struct Node*p,*temp;
	int data;
	headA= new Node;
	if(headA==NULL)
	{
		cout<<"Memory is not allocated";
	}
	else
	{
		cin>>data;
		headA->data=data;
		headA->next=NULL;
		p=headA;
		
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
	
}


void create2(int n)
{
	struct Node*p,*temp;
	int data;
	headB= new Node;
	if(headB==NULL)
	{
		cout<<"Memory is not allocated";
	}
	else
	{
		cin>>data;
		headB->data=data;
		headB->next=NULL;
		p=headB;
		
		for(int i=2;i<=m;i++)
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
	
}

void merging(struct Node *p,struct Node*q)   // p is 1st Linked list , q is the 2nd linked list
{
	struct Node *last;
	if(p->data<q->data)    // check for first node 
	{
		third=last=p;
		p=p->next;
		third->next=NULL;
	}
	else
	{
		third=q=q;
		q=q->next;
		third->next=NULL;
	}
	while(p!=NULL && q!=NULL)     // check for other node 
	{
		if(p->data>q->data)
		{
			last->next=q;
			last=q;
			q=q->next;
			last->next=NULL;
		}
		else if(headA->data<headB->data)
		{
			last->next=p;
			last=p;
			p=p->next;
			last->next=NULL;
		}
		
		if(p!=NULL)    // if node left in p Linked list than add into the main linked list
		{
			last->next=p;
		}
		else          // if node left in q linked list than add into the main linked list
		{
			last->next=q;
		}
	}
}

void display(struct Node *temp)
{
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main()
{
	int n,m;
	cin>>n>>m;
	create1(m);
	create2(n);
	merging(headA,headB);
	display(third);
}

// if Linked list 1 contain 'm' elements and Linked List 2 contain 'n' elements than Time Complexity is theta(m+n)
// Space Complexity is O(1) 

