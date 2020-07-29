// Insertion in Circular Linked list

#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node*next;
};
struct Node *head=NULL;

void create(int n)
{
	struct Node *p,*temp;
	int data;
	head=new Node;
	if(head==NULL)
	{
		cout<<"Memeory is not allocated";
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
		p->next=head;
	}
}

void insert(int position,int data)
{
	struct Node *temp=new Node;
	
	Node *p;
	if(position==0)
	{
		temp->data=data;
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
			head=head->next;
		}
		else
		{
			p=head;
			while(p->next!=head)   // this while loop for inserting the node before the head node
			{
				p=p->next;
			}
			p->next=temp;
			temp->next=head;
			head=temp;
		}
	}
	else
	{
		Node*p=head;
		temp->data=data;
		temp->next=NULL;
		for(int i=0;i<position-1;i++)
		{
			p=p->next;
		}
		temp->next=p->next;
		p->next=temp;
	}
}

void display(Node *temp)
{
	static int z=0;
	if(temp!=head || z==0)
	{
		z=1;
		cout<<temp->data;
		display(temp->next);
	}
	z=0;
}
int main()
{
	int n,pos,data;
	cin>>n;
	cout<<"Enter the position where you want to insert";
	cin>>pos;
	cout<<"Enter the data you want to insert";
	cin>>data;
	create(n);
	insert(pos,data);
	display(head);

}

// Time Complexity depend on the position where you want to insert,
// if position is 1 than O(1) if in the middle or in the last than O(n) 
 
