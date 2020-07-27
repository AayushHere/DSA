// Delete a node either first node or any node from the Linked List


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
		cout<<"memeory is not Alloctaed";
	}
	else
	{
		cin>>data;
		head->data=data;
		head->next=NULL;
		p=head;
		for(int i=2;i<=n;i++)
		{
			if(p==NULL)
			{
				cout<<"Memeory is not Alloctaed to head Node";
				break;
			}
			else
			{
				temp= new Node;
				cin>>data;
				temp->data=data;
				temp->next=NULL;
				p->next=temp;
				p=p->next;
			}
		}
	}
	
}

void Delete(int position)
{
	struct Node*temp,*q;
	int x;
	if(position==0)
	{
		temp=head;
		x=head->data;
		cout<<"Element Deleted is = "<<x<<"\n";
		head=head->next;
		delete temp;       // Deallocate the node from the memeory 
	}
	else
	{
		temp=head;
		q=NULL;
		for(int i=0;i<position-1&& temp;i++)
		{
			q=temp;
			temp=temp->next;
		}
		q->next=temp->next;
		x=temp->data;
		cout<<"Element Deleted is= "<<x<<"\n";
		delete temp;   // Deallocate the node from the memeory 
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
	int n,position;
	cin>>n;
	cout<<"Enter the  position to be deleted";
	cin>>position;
	create(n);
	Delete(position);
	display();
}

// Time Complexity is depend upon the position from where you want to delete

// if position 1 or 2 than Time Complexity is O(1)

// Best case is O(1) , Worst Case O(n)
