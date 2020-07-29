// Create and Display the node of Circular Linked List

// I'm create two display method (i)-> using do while , (ii)-> using Recursion. You can use any one  

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
		cout<<"Memory is not allocated";
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
		p->next=head;      // this line connect the last node with the first node i.e make it circular
	}
}

// Display method using do while loop i.e non recursive method


void Display()
{
	struct Node *temp=head;
	if(head==NULL)
	{
		cout<<"List is empty";
	}
	else
	{
		do{
			cout<<temp->data;
			temp=temp->next;
		}while(temp!=head);	
	}
}


// RDisplay method is a recrsive method. 


void RDisplay(struct Node *temp)
{
	
	static int z=0;
	if(temp!=head || z==0)
	{
		z=1;
		cout<<temp->data;
		RDisplay(temp->next);      // Tail Recursion
	}
	z=0;
}

int main()
{
	int n;
	cin>>n;
	create(n);
	Display();
	RDisplay(head);	
}

// In case of Display method-> Time Complexity is O(n), space complexity is O(1)

// In case of RDisplay method-> Time Complexity is O(n), space complexity is O(n+1) => O(n)
