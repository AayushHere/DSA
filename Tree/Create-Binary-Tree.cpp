// Create a Binary Tree using Queue 


#include<iostream>
#include<stack>
using namespace std;
class Node
{
	public:
		Node *lchild;
		int data;
		Node *rchild;
};

class Queue
{
	private:
		int size;
		int front;
		int rear;
		Node **Q;
	public:
		Queue(int size);
		bool isFull();
		bool isEmpty();
		void enqueue(Node *x);
		Node *dequeue();
};

Queue :: Queue(int size)
{
	this->size=size;
	front =-1;
	rear=-1;
	Q= new Node* [size];
}

bool Queue :: isEmpty()
{
	if(front == rear)
		return true;
	else
		return false;	
}

bool Queue :: isFull()
{
	if(rear==size-1)
		return true;
	else
		return false;
}

void Queue :: enqueue(Node *x)
{
	if(isFull())
	{
		cout<<"Queue is Overflow"<<"\n";
	}
	else
	{
		rear++;
		Q[rear]= x;
	}
}

Node * Queue :: dequeue()
{
	Node *x=NULL;
	if(isEmpty())
	{
		cout<<"Queue is Underflow"<<"\n";
	}
	else
	{
		front++;
		x=Q[front];
	}
	return x;
}

Node* root = new Node;

 
void createTree(){    // Create Function 
    Node* p;
    Node* t;
    int x;
    Queue q(10);
 
    cout << "Enter root value: " << flush;
    cin >> x;
    root->data = x;
    root->lchild = NULL;
    root->rchild = NULL;
    q.enqueue(root);    // insert address of root node into queue
 
    while (! q.isEmpty()){
        p = q.dequeue();     // pop the address from the queue
        cout << "Enter left child value of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1){
            t = new Node;
            t->data = x;
            t->lchild = NULL;
            t->rchild = NULL;
            p->lchild = t; 
            q.enqueue(t);   //insert the address of the new node into the queue for left child
        }
 
        cout << "Enter right child value of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1){
            t = new Node;
            t->data = x;
            t->lchild = NULL;
            t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);   // insert the address of the new node into the queue for right child
        }
    }
}

void preorder(Node *p)      // Recursive function the print the element of tree in PreOrder
{
	if(p)
	{
		cout<<p->data<<" ";
		preorder(p->lchild);
		preorder(p->rchild);
	}
}

void IterativePreorder(Node *t)     // Iterative function to print the element in preorder
{
	stack<Node *>st;       // use stack 
	while(t!=NULL || !st.empty())
	{
		if(t!=NULL)
		{
			cout<<t->data<<" ";
			st.push(t);
			t=t->lchild;
		}
		else
		{
			t = st.top();
			st.pop();
			t=t->rchild;
		}
	}
}

void inorder(Node *p)     // recursive function for Inorder
{
	if(p)
	{
		inorder(p->lchild);
		cout<<p->data<<" ";
		inorder(p->rchild);
	}
}

void IterativeInorder(Node *t)     // Iterative function of Inorder
{
	stack<Node *>st;
	while(t!=NULL || !st.empty())
	{
		if(t!=NULL)
		{
		st.push(t);
		t=t->lchild;
		}
		else
		{
			t= st.top();
			st.pop();
			cout<<t->data<<" ";
			t=t->rchild;
			
		}
	}
}

void postorder(Node *p)     // Recursive Function  of PostOrder
{
	if(p)
	{
		postorder(p->lchild);
		postorder(p->rchild);
		cout<<p->data<<" ";
	}	
}

int main()
{
	createTree();
	cout<<"PreOrder : ";
	preorder(root);
	cout<<"\n";
	cout<<"InOrder : ";
	inorder(root);
	cout<<"\n";
	cout<<"PostOrder : ";
	postorder(root);
	cout<<"\n";
	cout<<"PreOrder";
	IterativePreorder(root);
	cout<<"\n";
	cout<<"InOrder";
	IterativeInorder(root);
	cout<<"\n";	
}

