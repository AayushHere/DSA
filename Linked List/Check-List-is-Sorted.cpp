// Check whether the Linked List is sorted or not

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
	head=new Node;
	if(head==NULL)
	{
		cout<<"Memory is not Allocated";
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

void checkSorted()
{
	struct Node *temp=head;
	int z=0;                  
	int x=-99999;    
	while(temp!=NULL)
	{
		if(temp->data<x)
		{
			z=1;
			break;
		}
		else
		{
			x=temp->data;
			temp=temp->next;
		}
	}
	if(z==0)
	{
		cout<<"List is Sorted";
	}
	else if(z==1)
	{
		cout<<"List is Not Sorted";
	}
}

int main()
{
	int n;
	cin>>n;
	create(n);
	checkSorted();
}

// Time Complexity is O(n)

// if 1st Node data is smaller than the x than O(1)
