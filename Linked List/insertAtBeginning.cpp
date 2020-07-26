#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node*next;
};
struct Node*head=NULL;

void create(int n){
	
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
				cout<<"Memory is not allocated";
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

void insertAtBeginning(int data)
{
	struct Node*p;
//	struct Node *temp=head;
	p=new Node;
	 if( p == NULL)
    {
        printf(" Memory can not be allocated.");
    }
	else
	{
	p->data=data;
	p->next=head;
	head=p;	
	}
	
		
}
void display()
{
	struct Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}


int main()
{
	
	int n,data;
	cin>>n;
	cout<<"Enter the node data";
	cin>>data;
	create(n);
	 insertAtBeginning(data);
	display();	
}

