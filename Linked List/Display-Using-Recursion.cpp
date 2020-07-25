#include<iostream>
using namespace std;
struct Node
{
	
	int data;
	struct Node *next;  // Self Referential i.e pointer to its own type 
};
struct Node *head=NULL;  // Global pointer 

void create(int n)
{
	struct Node *p, *temp;
	int data ,i;
	head= new Node;        // create a memory for a node 
	if(head==NULL)
	{
		cout<<"Memeory Not Allocated";
	}
	else
	{
		cin>>data;
		head->data= data;
		head->next=NULL;
		temp=head;
		
		for(int i=2;i<=n;i++)
		{
			p= new Node;          // create a memory  for a node 
			
			if(p==NULL)
			{
				cout<<"Memory Not allocted";
				break;
			}
			else
			{
				cin>>data;
				p->data=data;
				p->next=NULL;
				
				temp->next=p; // This will connect the  current node with the previous node 
				temp=temp->next;       // Now temp will point to next node 
			}
		}
		
	}
	
}
void RDisplay(struct Node *temp)
{
		if(temp!=NULL) // if we write (temp->next!=NULL) than it will not print the last node
		{
			cout<<temp->data<<" ";
			RDisplay(temp->next);      // Using Recursion
		}
}	


int main()
{
	int n;
	cin>>n;
	create(n);
	RDisplay(head);
}
