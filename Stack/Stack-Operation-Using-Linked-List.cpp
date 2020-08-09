// Implement different operation on Stack using Linked List

#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};
struct Node*top=NULL;    // Intitalise top

void push(int data)
{
	struct Node *temp;
	temp= new Node;
	if(temp==NULL)    
	{
		cout<<"Stack is full";
	}
	else
	{
		temp->data=data;
		temp->next=top;
		top=temp;	  
	}
}

int  pop()
{
	int x=-1;
	struct Node *p=top;
	if(top!=NULL)
	{
	top=top->next;
	x=p->data;
	delete p;
	}
	return x;	
}

int is_empty()
{
	return top ? 0 : 1;	
}

int is_full()
{
	struct Node *temp;
	int r = temp ? 1 :0 ; 
	delete temp;
	return r;
}
int peek(int index)
{
	struct Node *temp=top;
	for(int i=0;temp!=NULL && i<index-1;i++)
	{
		temp=temp->next;
	}
	if(temp!=NULL)
	{
		return temp->data;
	}
	else
	{
		return -1;
	}
}

int stack_Top()
{
	if(top)
	{
		return top->data;
	}
	else
	{
		return -1;
	}
}

void display()
{
	struct Node *temp=top;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}	
}

int main()
{
	push(1);
	push(2);
	push(3);
	cout<<"Deleted Element is = "<<pop()<<"\n";
	cout<<is_empty()<<"\n";
	cout<<is_full<<"\n";
	cout<<"Element is = "<<peek(4)<<"\n";
	cout<<"Top Element is = "<<stack_Top()<<"\n";
	display();
}
