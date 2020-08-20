// Implementation of Queue uisng Linked List

#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
}; 

class Queue{
	private:
		Node *front;
		Node *rear;
	public:
		Queue();
		bool isEmpty();
		void enqueue(int x);
		int dequeue();
		void display();		
};

Queue :: Queue()
{
	front =NULL;
	rear=NULL;
}

bool Queue :: isEmpty()
{
	if(front==NULL)
		return true;
	else
		return false;
}
void Queue :: enqueue(int data)
{
	Node *temp= new Node;
	if(temp==NULL)
	{
		cout<<"Queue is Overflow";
	}
	else
	{
		temp->data=	data;
		temp->next=NULL;
		if(front == NULL)
		{
			front= temp;
			rear= temp;
		}
		else
		{
			rear->next=temp;
			rear=temp;
		}
	}
}


int Queue ::  dequeue()
{
	int x=-1;
	Node *p;
	if(isEmpty())
	{
		cout<<"Queue is Empty";
	}
	else
	{
		p=front;
		front=front->next;
		x=p->data;
		delete p;
		
	}
	return x;
}

void Queue ::  display()
{
	Node*p=front;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}

int main()
{
	Queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.display();
}







