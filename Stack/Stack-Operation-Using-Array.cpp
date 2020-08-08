#include<iostream>
using namespace std;
struct stack{
	int size;
	int top;
	int *s;
};

void create(struct stack *st)
{
	cout<<"Enter the size of stack";
	cin>>st->size;
	st->top=-1;
	st->s= new int [st->size];
}

void push (struct stack *st,int x)
{
	if(st->top==st->size-1)
	{
		cout<<"Stack Overflow"<<"\n";
	}
	else
	{
		st->top++;
		st->s[st->top]=x;
	}
}

int pop(struct stack *st)
{
	int x=-1;
	if(st->top==-1)
	{
		cout<<"Stack Underflow"<<"\n";
	}
	else
	{
		x=st->s[st->top--];
	}
	return x;
	
}
int peek(struct stack st, int index)
{
	int x=-1;
	if(st.top-index+1<0)
		cout<<"Position is Invalid";
	else
	x= st.s[st.top-index+1];	
	return x;
}

int is_empty(struct stack st)
{
	if(st.top==-1)
		return 1;
	else
		return 0;	
}

int is_full(struct stack st)
{
	if(st.size==st.top-1)
		return 1;
	else
		return 0;
}

int stack_Top(struct stack st)
{
	if(st.top==-1)
		return -1;
	else
		return st.s[st.top];
}



void display(struct stack *st)
{
	int i;
	for(i=st->top;i>=0;i--)
	{
		cout<<st->s[i]<<" ";
	}
	cout<<"\n";
}

int main()
{
	struct stack st;
	
	create(&st);
	push(&st,1);
	push(&st,2);
	push(&st,3);
	push(&st,4);
	push(&st,5);
	cout<<"pop element is = "<<pop(&st)<<"\n";
	cout<<"Peak element is = "<<peek(st,2)<<"\n";
	cout<<is_empty(st)<<"\n";
	cout<<is_full(st)<<"\n";
	cout<<"Top Element is = "<<stack_Top(st)<<"\n";
	display(&st);
	
}

