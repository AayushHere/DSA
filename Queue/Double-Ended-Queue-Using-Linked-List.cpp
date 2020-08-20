// Implementation of Double Ended Oueue

// Double Ended Queue-> In DEQueue we can insert and delete the element from both the end i.e from front and rear

#include<iostream>
using namespace std;
class Node
{
	public: 
		int data;
		Node *next;	
};
class DEQueue
{
	private:
		int size;
		int rear;
		int front;
		int *Q;
	public:
		DEQueue(int size);
		bool isEmpty();
		bool isFull();
		void enqueueFront(int x);    // Method for insert from front end
		void enqueueRear(int x);     // Method for insert from rear end
		int dequeueFront();          // Method for delete from front end
		int dequeueRear();          // Method for delete  from rear end
		void display();
};

DEQueue :: DEQueue(int size)
{
	this->size=size;
	front= rear=-1;
	Q= new int[size];	
}

bool DEQueue :: isEmpty()
{
	if(front==rear)
		return  true;
	else
		return false;
}

bool DEQueue :: isFull()
{
	if(rear==size-1)
		return true;
	else
		return false;	
}

void DEQueue :: enqueueRear(int x)
{
	if(isFull())
	{
		cout<<"Queue is Overflow"<<"\n";
	}
	else
	{
		rear++;
		Q[rear]=x;
	}
}

void DEQueue :: enqueueFront(int x)
{
	if(front ==-1)
	{
		cout<<"Queue is Overflow "<<"\n";
	}
	else
	{
		Q[front]=x;
		front--;
	}
}

int DEQueue :: dequeueRear()
{
	int x = -1; 
	if(rear==-1)
	{
		cout<<"Queue is underflow "<<"\n";
	}
	else
	{
		x=Q[rear];
		rear--;
	}
	return x;
}
int DEQueue :: dequeueFront()
{
	int x = -1;
	if(isEmpty())
	{
		cout<<"Queue is Underflow "<<"\n";
	}
	else
	{
		front++;
		x= Q[front];
	}
	return x;
}

void DEQueue :: display()
{
	for(int i=front+1;i<=rear;i++)
	{
		cout<<Q[i]<<" ";
	}
}
int main()
{
	DEQueue q(5);
	q.enqueueRear(1);
	q.enqueueRear(6);
	q.dequeueFront();
	q.enqueueFront(4);
	q.dequeueRear();
	q.display();
}
