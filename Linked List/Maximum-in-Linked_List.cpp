#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node*next;
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

void maxx()
{
	struct Node *temp;
	temp=head;
	int max=-99999;
	while(temp)
	{
		if(temp->data>max)
		{
			max=temp->data;
		}
		temp=temp->next;
		
	}
	cout<<"Maximum Element is = "<<max;
	
}
int main()
{
	int n;
	cin>>n;
	create(n);
	maxx();
	
}

