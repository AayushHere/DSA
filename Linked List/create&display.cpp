#include<iostream>
using namespace std;
struct Node
{
	
	int data;
	struct Node *next;
};
struct Node *head=NULL;

void create(int n)
{
	struct Node *p, *temp;
	int data ,i;
	head= new Node;
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
			p= new Node;
			
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
				
				temp->next=p;
				temp=temp->next;
			}
		}
		
	}
	
}

void display()
{
	
	struct Node *temp;
	if(temp==NULL)
	{
		cout<<"List is empty";
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}	
}

int main()
{
	int n;
	cin>>n;
	create(n);
	display();
}


