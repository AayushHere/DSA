#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next;
	
};
struct Node *head=NULL;
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


int  count(struct Node *temp)
{

	int c=0;
	
	if(temp==NULL)
	{
		return 0;
	}
	if(temp!=NULL)
	{
		c++;
		return count(temp->next)+1;   // Tail Recursion 
	}
	
}


int main()
{
	int n;
	cin>>n;
	create(n);
	int cc;
	cc= count(head);
	cout<<cc;
}

// Time Complexity is O(n)
//Space Complexity is O(n+1) => O(n)
