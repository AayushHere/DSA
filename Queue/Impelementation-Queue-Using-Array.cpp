// Implementation of Queue using Array

#include<iostream>
using namespace std;
class Queue
{
	private:
		int size;
		int front;
		int rear;
		int *Q;
	public:
		Queue()         // Non-parametrized Constructor
		{
			front= rear=-1;
			size=10;
			Q= new int[size];
		}
		Queue(int size)        // Parametrized Constructor
		{
			front= rear=-1;
			this->size=size;
			Q= new int[this->size];
		}
	void enqueue(int x);
	int dequeue();
	void display();
};


void Queue :: enqueue(int x)
{
	if(rear==size-1)
	{
		cout<<"Queue is full";
	}
	else
	{
		rear++;
		Q[rear]=x;
	}
}


int Queue :: dequeue()
{
	int x=-1;
	if(front == rear)
	{
		cout<<"Queue is Empty";
	}
	else
	{
		front++;
		x= Q[front];
	}
	return x;
}

void Queue :: display()
{
	for(int i=front+1; i<=rear;i++)
	{
		cout<<Q[i]<<" ";
	}
}

int main()
{
	Queue q(5);
	q.enqueue(1);
	q.dequeue();
	q.dequeue();
	q.display();
}
