// Create a stack of given size and input the element of the stack from user and print them

#include<iostream>
using namespace std;
struct stack
{
	int size;
	int top;
	int *s;
};

void create(struct stack *st)
{
	int element;
	if(st->top==st->size)
	{
		cout<<"overflow";
	}
	else
	{
		st->s= new int [st->size];
		for(int i=0;i<st->size;i++)
		{

			cin>>element;
			st->top++;
			st->s[st->top]=element;	
		}	
	}	
}
void display(struct stack *st)
{
	if(st->top==-1)
	{
		cout<<"underflow";
	}
	else
	{
		for(int i=0;i<=st->top;i++)
		{
			cout<<st->s[i];
		}
	}
}

int main()
{
	struct stack st;
	st.top=-1;
	cout<<"Enter the size of stack";
	cin>>st.size;
	create(&st);
	display(&st);
}

