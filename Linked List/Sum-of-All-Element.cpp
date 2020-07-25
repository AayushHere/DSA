#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};
struct Node *head = NULL;

void create(int n)
{
	struct Node *p, *temp;
	int data ,i;
	head= new Node;        // create a memory for a node 
	if(head==NULL)
	{
		cout<<"Memeory Not Allocated";
	}
	else
	{
		cin>>data;
		head->data= data;
		head->next=NULL;
		temp=head;
		
		for(int i=2;i<=n;i++)
		{
			p= new Node;          // create a memory  for a node 
			
			if(p==NULL)
			{
				cout<<"Memory Not allocted";
				break;
			}
			else
			{
				cin>>data;
				p->data=data;
				p->next=NULL;
				temp->next=p; // This will connect the  current node with the previous node 
				temp=temp->next;       // Now temp will point to next node 
			}
		}
		
	}
	
}

int sum()
{
	struct Node *temp;
	temp=head;
	int summ=0;
	while(temp)
	{
		summ=summ+temp->data;
		temp=temp->next;
	}
	return summ;
}

int main()
{
	int n,result;
	cin>>n;
	create(n);
	result= sum();
	cout<<result;
	
}
