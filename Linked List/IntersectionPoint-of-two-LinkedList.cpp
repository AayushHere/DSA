// Find the Intersection Point of two Linked List

#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};
struct Node*head1=NULL;
struct Node*head2=NULL;

void create1(int n)
{
	struct Node *p,*temp;
	int data;
	head1=new Node;
	if(head1==NULL)
	{
		cout<<"Memory is not allocted";
	}
	else
	{
		cin>>data;
		head1->data=data;
		head1->next=NULL;
		p=head1;
		
		for(int i=2;i<=n;i++)
		{
			temp=new Node;
			if(p==NULL)
			{
				cout<<"Memeory is not allocted";
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

void create2(int m)
{
	struct Node *p,*temp;
	int data;
	head2=new Node;
	if(head2==NULL)
	{
		cout<<"Memory is not allocted";
	}
	else
	{
		cin>>data;
		head2->data=data;
		head2->next=NULL;
		p=head2;
		
		for(int i=2;i<=m;i++)
		{
			temp=new Node;
			if(p==NULL)
			{
				cout<<"Memeory is not allocted";
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

void IntersectionPoint()
{
	struct Node *p=head1;
	struct Node *q=head2;
	int len1,len2=0;
	int diff=0;
	while(p!=NULL)
	{
		len1++;
		p=p->next;
	}
	
	while(q!=NULL)
	{
		len2++;
		q=q->next;
	}
	
	p=head1;
	q=head2;
	
	if(len1>len2)
	{
		diff=len1-len2;
		for(int j=0;j<diff;j++)
		{
			p=p->next;
		}
	}
	else if(len1<len2)
	{
		diff=len2-len1;
		for(int k=0;k<diff;k++)
		{
			q=q->next;
		}
	}
	while(p!=NULL && q!=NULL)
	{
		if(p->data==q->data)
		{
			cout<<"Intersection Point is = "<<p->data;
			break;
		}
		p=p->next;
		q=q->next;
	}	
}

int main()
{
	int n,m;
	cin>>n>>m;
	create1(n);
	create2(m);
	IntersectionPoint();
}

// If list one contain 'm' elements and list 2nd contain 'n' element than Time Complexity is O(m+n)


