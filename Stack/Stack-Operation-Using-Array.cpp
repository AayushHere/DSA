// Implement different operation on Stack using Array

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
	st->s= new int [st->size];     // create size for stack in heap memeory
}

void push (struct stack *st,int x)
{
	if(st->top==st->size-1)       // check stack is full or not 
	{
		cout<<"Stack Overflow"<<"\n";
	}
	else
	{
		st->top++;             // Increment the top value
		st->s[st->top]=x;          // if stack is not full  than insert an element into the satck
	}
}

int pop(struct stack *st)
{
	int x=-1;
	if(st->top==-1)               // check stack is empty or not
	{
		cout<<"Stack Underflow"<<"\n";
	}
	else
	{
		x=st->s[st->top--];          // if not empty than than delete the top element 
	}
	return x;           // if stack is empty than return -1 otherwise return top element of the stack and decrement top also
	
}
int peek(struct stack st, int index)
{
	int x=-1;
	if(st.top-index+1<0)        // check the element which we want is taht loaction is valid or not
		cout<<"Position is Invalid";
	else
	x= st.s[st.top-index+1];	    // return the value at that index
	return x;
}

int is_empty(struct stack st)    // check whether stack is empty or not, if empty return 1 else return 0
{
	if(st.top==-1)
		return 1;
	else
		return 0;	
}

int is_full(struct stack st)     // check whether stack is full or not, if full return 1 else return 0
{
	if(st.size==st.top-1)
		return 1;
	else
		return 0;
}

int stack_Top(struct stack st)    // this function return the top value of the stack , if stack emoty than return -1
{
	if(st.top==-1)
		return -1;
	else
		return st.s[st.top];
}
void display(struct stack *st)   // Display the element of the stack
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

// Time Complexity is constant i.e O(1) in every function except display function



