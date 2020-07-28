// To Reverse a Linked List using auxilliary array 

// We use two method to reverse an Array

// 1-> In this method we first create a linked list than we copy all the  element into the array
// now after travesrse we reach last index  of the array now from last index we copy 
// back element int the linked list from an array

// 2-> In this method we use three pointer we actually reverse the link i.e The node which 
// is last node in the statrting but by using pointer that last node now become head node 
  

#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node*next=NULL;
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
			temp= new Node;
			if(p==NULL)
			{
				cout<<"Memory is not allocated";
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

// This method i.e Reverse1 is the Ist Method

void Reverse1(int n)
{
	struct Node *temp;
	temp=head;
	int i=0;
	int count=0;
	int a[n];
	
	while(temp!=NULL)
	{
		a[i]=temp->data;
		temp=temp->next;
		i++;
	}
	temp=head;
	i--;
	while(temp!=NULL)
	{
		temp->data=a[i];
		temp=temp->next;
		i--;
		
	}	
}

// This method i.e Reverse2 is the 2nd Method

void Reverse2()
{
	struct Node*p,*q,*r;
	p=head;
	q=NULL;
	r=NULL;
	while(p!=NULL)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	head=q;
}

void display()
{
	struct Node *temp;
	temp=head;
	while(temp)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main()
{
	int n;
	cin>>n;
	create(n);
	Reverse1(n);
	Reverse2();
	display();
}

// Time Complexity in case of Reverse1 is  O(2n)=> O(n)

// Time Complexity in case of Revserse2 is O(n)=> O(n)

