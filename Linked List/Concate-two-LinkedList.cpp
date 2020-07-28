// To concate two Linked List

#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node*next;
};
struct Node *head1=NULL;
struct Node *head2=NULL;

void create1(int n)
{
	struct Node*p,*temp;
	int data;
	head1= new Node;
	if(head1==NULL)
	{
		cout<<"Memory is not allocated";
	}
	else
	{
		cin>>data;
		head1->data=data;
		head1->next=NULL;
		p=head1;
		
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


void create2(int m)
{
	struct Node*p,*temp;
	int data;
	head2= new Node;
	if(head2==NULL)
	{
		cout<<"Memory is not allocated";
	}
	else
	{
		cin>>data;
		head2->data=data;
		head2->next=NULL;
		p=head2;
		
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

void concate()
{
	struct Node*temp;
	temp=head1;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=head2;
	head2=NULL;
}
void display()
{
	struct Node*temp;
	temp=head1;
	while(temp)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	create1(n);
	create2(m);
	concate();
	display();
	
}

// Time Complexity depends upon the number of node in the first linked list, if it contain n element
// than O(n)
