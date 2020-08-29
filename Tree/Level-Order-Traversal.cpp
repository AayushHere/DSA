// Level Order Traversing of a Binary Tree

#include <iostream>
#include <queue>
#include <stack>

using namespace std;
 
class Node{
public:
    Node* lchild;
    int data;
    Node* rchild;
};
 
class Tree{

public:
    Tree();
    void CreateTree();
    void Levelorder(Node* p);
};
Node * root;

Tree::Tree() {
}

void Tree::CreateTree() {
    Node* p;
    Node* t;
    int x;
    queue<Node*> q;
 
    root = new Node;
    cout << "Enter root data: ";
    cin >> x;
    root->data = x;
    root->lchild = NULL;
    root->rchild = NULL;
    q.push(root);
 
    while (! q.empty()){
        p = q.front();
        q.pop();
 
        cout << "Enter left child data of " << p->data<<"\n";
        cin >> x;
        if (x != -1){
            t = new Node;
            t->data = x;
            t->lchild = NULL;
            t->rchild = NULL;
            p->lchild = t;
            q.push(t);
        }
 
        cout << "Enter right child data of " << p->data<<"\n";
        cin >> x;
        if (x != -1){
            t = new Node;
            t->data = x;
            t->lchild = NULL;
            t->rchild = NULL;
            p->rchild = t;
            q.push(t);
        }
    }
}

void Tree::Levelorder(Node *p) {
    queue<Node*> q;
    cout << root->data<<" ";
    q.push(root);
 
    while (! q.empty()){
        p = q.front();
        q.pop();
 
        if (p->lchild){
            cout << p->lchild->data<<" ";
            q.push(p->lchild);
        }
 
        if (p->rchild){
            cout << p->rchild->data<<" ";
            q.push(p->rchild);
        }
    }
}

int main()
{
	Tree bt;
	bt.CreateTree();
	bt.Levelorder(root);
}

