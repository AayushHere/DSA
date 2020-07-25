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
int RMax(Node *temp)
{
	int max=-99999;
	if(temp==0)
	{
		return max;
	}
	else
	{
		max=RMax(temp->next);     // Head Recursion
		return(max>temp->data)?max:temp->data;
	}
}
int main()
{
	int n,result;
	cin>>n;
	create(n);
	result =RMax(head);
	cout<<"Maximum element is ="<<result;
}

// Time Complexity is O(n)

// Space Complexity is O(n+1) => O(n)
