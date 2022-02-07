//program to traverse tree level order-wise
#include<iostream>
using namespace std;
class node{
	public:
	node *lchild;
	node *rchild;
	int data;
};
class queue{
	public:
	node **a;
	node *root;
	node *t;
	int size=9;
	int rear=-1;
	int front=-1;
	void enque(node *val){
		rear=(rear+1)%size;
		a[rear]=val;
	}
	node* deque(){
		node *val;
		front++;
		val=a[front];
		return val;
	}
	void levelorder(){
		while(!is_empty())
		{
			node *s=deque();
			if(s->lchild)
			{
				cout<<s->lchild->data<<" ";
				enque(s->lchild);
			}
			if(s->rchild)
			{
				cout<<s->rchild->data<<" ";
				enque(s->rchild);
			}	
		}
	}
	int is_empty(){
		if(front==rear)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	void createtree(){
		int l,r,v;
		cout<<"root "<<root->data<<endl;	
		while(!is_empty())
		{
			t=deque();
			cout<<"enter 1 for lchild";
			cin>>l;
			if(l>0)
			{
				cout<<"enter value";
				cin>>v;
				node *temp=new node;
				temp->data=v;
				temp->lchild=NULL;
				temp->rchild=NULL;
				t->lchild=temp;
				enque(temp);
			}
			cout<<"enter 1 for rchild";
			cin>>l;
			if(l>0)
			{
				cout<<"enter value";
				cin>>v;
				node *tempp=new node;
				tempp->data=v;
				tempp->lchild=NULL;
				tempp->rchild=NULL;
				t->rchild=tempp;
				enque(tempp);
			}
		}
	}
};
int main(){
	queue q;
	q.a=new node*[q.size];
	node *t=new node;
	t->data=8;
	t->lchild=NULL;
	t->rchild=NULL;
	q.enque(t);
	q.root=t;
	q.createtree();
	q.enque(t);
	cout<<"levelorder traversal = "<<q.root->data<<" ";
	q.levelorder();
	cout<<endl;
	return 0;
}
