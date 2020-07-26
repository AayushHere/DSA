// To improve Linear Search we use two method (i)-> Transposition, (ii)-> Movr to head

// I'm using Move to head method, in this method the element which we are going to serach ,if 
// found than we move into front i.e make it head node so for next time if we want to search again
// we found that element in constant time i.e O(1) 

// In transposition method if the elemet is found than  move to left by one ,this process 
//running unless and untill that node become first node i.e head node 


#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};
struct Node *head= NULL;

void create(int n)
{
	struct Node *p,*temp;
	int data;
	head=new Node;
	if(head==NULL)
	{
		cout<<"Memory is not allocated";
	}
	else
	{
		cin>>data;
		head->data=data;
		head->next=NULL;
		p=head;
		
		for(int i=2;i<=n;i++)
		{
			temp=new Node;
			if(p==NULL)
			{
				cout<<"Memoey is not allocated";
				break;
			}
			else
			{
				cin>>data;
				temp->data=data;
				temp->next=NULL;
				p->next=temp;
				p=p->next;
			}
			
		}
		
	}
}

struct Node * improveLinearSearch(Node *temp,int key)
{
	struct Node *q;
	while(temp!=NULL)
	{
		if(key==temp->data)
		{
			q->next=temp->next;   
			temp->next=head;
			head=temp;
			return  temp;     // this will return the address of that node, if found
		}
		else
		{
			q=temp;
			temp=temp->next;
		}
	}
	return NULL;              // if element is not found than return 0
}
void display(struct Node *temp)
{
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main()
{
	struct Node *temp;
	int n,key;
	cin>>n;
	cout<<"Enter the element to be searched";
	cin>>key;
	create(n);
	temp= improveLinearSearch(head,key);
	cout<<temp;
	cout<<"\n";
	display(head);	
}

// Time Complexity is O(n)
// Space complexity is O(1)
// But if we find  that element for the next time than the time complexity is O(1)
