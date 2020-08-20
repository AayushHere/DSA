// Implementaion of Queue using 2 Stack
#include<iostream>
#include<stack>
using namespace std;
class Queue
{
	private:
		stack<int>s1;   
		stack<int>s2;
	public:
		Queue(){};
		void enqueue(int x);
		int dequeue();	
};

void Queue :: enqueue(int x)
{
	s1.push(x);
	cout<<s1.top()<<" ";	
}

int Queue :: dequeue()
{
	int x=-1;
	if(s2.empty())
	{
		if(s1.empty())
		{
			cout<<"Queue is underflow"<<"\n";
		}
		else
		{
			while(!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}		
		}
	}
	x=s2.top();
	s2.pop();
	return x;	
}

int main()
{
	Queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	cout<<"\n Deleted Element is : "<<q.dequeue();
}



