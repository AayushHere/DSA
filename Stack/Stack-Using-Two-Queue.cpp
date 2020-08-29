// Implementation of Stack using Two Queue

#include<iostream>
#include<stack>
#include<queue>
using namespace std;
class Stack
{
	private:
		queue<int>q1;
		queue<int>q2;
	public:
		void insert(int x);
		int Delete();	
};

void Stack :: insert(int x)
{
	if(q1.empty())
	{
		q1.push(x);
	}
	else
	{
		while(!q1.empty())
		{
			q2.push(q1.front());
			q1.pop();
		}
		q1.push(x);
		while(!q2.empty())
		{
			q1.push(q2.front());
			q2.pop();
		}
	}	
}
int Stack :: Delete()
{
	int x=-1;
	if(q1.empty())
	{
		return -1;
	}
	else
	{
		x=q1.front();
		q1.pop();
	}
	return x;
}
int main()
{
	Stack st;
	st.insert(1);
	st.insert(2);
	st.insert(3);
	st.insert(4);
	cout<<"Deleted Element is "<<st.Delete();

}

