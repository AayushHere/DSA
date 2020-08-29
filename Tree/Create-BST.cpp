// Create a Binary Search Tree

#include<iostream>
using namespace std;
class Node
{
	public:
		Node *lchild;
		int data;
		Node *rchild;
};

Node*root;

class BST
{
	public:
		BST();
		void Insert(int key);
		void PreOrder(Node *p);
		void InOrder(Node *p);
//		Node *search(int key);
};

BST ::BST()
{
	root=NULL;
}

void BST :: Insert(int key)
{
	Node *t=root;
	Node *p,*r;
	if(root==NULL)    // as root = NULL so create a node and make it as root
	{
		p= new Node;
		p->data=key;
		p->lchild=NULL;
		p->rchild=NULL;
		root=p;
		return;	
	}
	while(t!=NULL)     // this while loop continue until it reaches to leaf node 
	{
		r=t;          
		if(key<t->data)
		{
			t=t->lchild;
		}
		else if(key>t->data)
		{
		t=t->rchild;	
		}
		else
			return;
	}
	p= new Node;       // when t become null create a node 
	p->data=key;
	p->lchild=NULL;
	p->rchild=NULL;
	
	if(p->data<r->data)   // check again where we insert new node, if new node data is smaller to leaf node than inset new node to left side of r node
	{
		r->lchild=p;
	}
	else
	{
		r->rchild=p;   //  if new node data is larger to leaf node than inset new node to right side of r node
	{
	}	
}
}

void BST :: PreOrder(Node *p)
{
	if(p)
	{
		cout<<p->data<<" "; 
		PreOrder(p->lchild);
		PreOrder(p->rchild);
	}
}

void BST :: InOrder(Node *p)
{
	if(p)
	{
		InOrder(p->lchild);
		cout<<p->data<<" ";
		InOrder(p->rchild);
	}
}

int main()
{
	BST b;
	b.Insert(5);
	b.Insert(10);
	b.Insert(3);
	b.Insert(1);
	b.PreOrder(root);
	cout<<"\n";
	b.InOrder(root);	
}



