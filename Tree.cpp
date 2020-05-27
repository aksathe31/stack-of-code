#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class Node
{public:
	int data;
	Node* lchild;
	Node* rchild;
	Node()
	{
		lchild=rchild=NULL;		
	}
};
Node* root=NULL;

class Tree
{
public:
	void create();
	void inorder(Node*);
	void preorder(Node*);
	void postorder(Node*)
	void iterativepreorder(Node*);
};

void Tree::create()
{
	Node *t,*p;
	queue<Node*> q;
	int x;
	
		cout<<"\n\tEnter Root node: ";
		cin>>x;
		root=new Node;
		root->data=x;	
			
	q.push(root);	
	
	while(!q.empty())
	{	
		p=q.front();
		q.pop();	
		cout<<"\n\tEnter left child of "<<p->data<<" ";
		cin>>x;
		if(x!=-1)
		{
			t=new Node;
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->lchild=t;	
			q.push(t);								
			
		}
		cout<<"\n\tEnter right child of "<<p->data<<" ";
		cin>>x;
		if(x!=-1)
		{
			t=new Node;
			t->data=x;
			t->lchild=t->rchild=NULL;
			p->rchild=t;
			q.push(t);
		}		
		
	}

}

void Tree::preorder(Node* t)
{
	if(t!=NULL)
	{
		cout<<t->data<<" ";
		preorder(t->lchild);
		preorder(t->rchild);
	}
}

void Tree::iterativepreorder(Node* t)
{
	stack<Node*> stk;
	while(t!=NULL ||  )	
}

void Tree::inorder(Node* t)
{
	if(t!=NULL)
	{
		inorder(t->lchild);
		cout<<t->data<<" ";
		inorder(t->rchild); 
	}
}


void Tree::postorder(Node* t)
{
	if(t!=NULL)
	{
		postorder(t->lchild);
		postorder(t->rchild);
		cout<<t->data<<" "; 
	}
}

int main()
{
Tree T;
	T.create();
	cout<<"\n\tPreorder: ";
	 T.preorder(root);
	cout<<"\n\tInorder: ";
	 T.inorder(root);
	cout<<"\n\tPostorder: ";
	 T.postorder(root);
return 0;				
}
