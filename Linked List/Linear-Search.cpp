#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};
struct Node*head=NULL;

void create(int n)
{
	struct Node *p,*temp;
	int data,i;
	head=new Node;
	if(head==NULL)
	{
		cout<<"Memeory is not allocated";
	}
	else
	{
		cin>>data;
		head->data=data;
		head->next=NULL;
		p=head;
		
		for(int i=2;i<=n;i++)
		{
			temp= new Node;
			if(temp==NULL)
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

struct Node* search(Node *temp,int key)
{
		while(temp)
		{
			if(key==temp->data)
			{
				return temp;
			}
			
			temp=temp->next;
		}
		return NULL;
				
}
int main()
{
	struct Node*temp;
	int n,key;
	cin>>n;
	cout<<"Enter the key to be searched";
	cin>>key;
	create(n);
	
	temp= search(head,key);
	cout<<temp;
}

// Time Complexity is based the element which we want to search
// Time Complex in worst case is O(n), in best case is O(1)

// if element is not found than also time complexity is O(n)


