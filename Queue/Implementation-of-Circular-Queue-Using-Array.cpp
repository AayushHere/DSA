// Impelementation of Circular Queue using Array

// We use Modulous technique for queue as circular

#include<iostream>
using namespace std;
class CircularQueue
{
	private:
		int size;
		int rear;;
		int front;
		int *Q;
	public:
		CircularQueue(int size);
		bool isFull();
		bool isEmpty();
		void enqueue(int x);
		int dequeue();
		void display();
};
CircularQueue  :: CircularQueue(int size)
{
	this->size=size;
	rear=front=0;
	Q=new int[size];
} 

bool CircularQueue :: isFull()
{
	if((rear+1)%size==front)
		return true;
	else
		return false;	
}
bool CircularQueue :: isEmpty()
{
	if(front == rear)
		return true;
	else
	return false;
}

void CircularQueue :: enqueue(int x)
{
	if(isFull())
	{
		cout<<"Queue is Full "<<"\n";
	}
	else
	{
		rear= (rear+1)%size;
		Q[rear]=x;
	}
}

int CircularQueue :: dequeue()
{
	int x=-1;
	if(isEmpty())
	{
		cout<<"Queue is Empty so u can't delete "<<"\n";
	}
	else{
		front = (front+1)%size;
		x=Q[front];
	}
	return x;
}

void CircularQueue :: display()
{
	int i= front+1;
	do{
		cout<<Q[i]<<" ";
		i=(i+1)%size;
	}
	while(i!=(rear+1)%size);
}

int main()
{
	CircularQueue q(5);
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	cout<<"Deleted Element is = "<<q.dequeue()<<"\n";
	q.display();
	
}
 
 
