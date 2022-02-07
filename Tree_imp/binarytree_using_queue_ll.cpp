//program to create binary tree using queue
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
		int size=6;
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
		void preorder(node *p){
			if(p)
			{
				cout<<p->data<<" ";
				preorder(p->lchild);
				preorder(p->rchild);
			}
			
		}
		void inorder(node *p){
			if(p)
			{
				inorder(p->lchild);
				cout<<p->data<<" ";
				inorder(p->rchild);
			}	
		}
		void postorder(node *p){
			if(p)
			{
				postorder(p->lchild);
				postorder(p->rchild);
				cout<<p->data<<" ";
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
	cout<<"postorder traversal = ";
	q.postorder(q.root);
	cout<<endl;
	cout<<"inorder traversal = ";
	q.inorder(q.root);
	cout<<endl;
	cout<<"poreorder traversal = ";
	q.preorder(q.root);
	cout<<endl;
	return 0;
}
