//program to search element in a BST tree
#include<iostream>
using namespace std;
class node{
	public:
	node *lchild;
	node *rchild;
	int data;
	node *root;
	void create(node *p,int val){
		node *pt=NULL;
		while(p!=NULL)
		{
			if(val<p->data)
			{
				pt=p;
				p=p->lchild;
			}
			else
			{
				pt=p;
				p=p->rchild;
			}
		}
		node *d=new node;
		d->data=val;
		d->lchild=NULL;
		d->rchild=NULL;
		if(pt->data>val)
		{
			pt->lchild=d;
		}
		else
		{
			pt->rchild=d;
		}
	}
	void display(node *ptr){
		if(ptr)
		{
			display(ptr->lchild);
			cout<<ptr->data<<" ";
			display(ptr->rchild);
		}
	}
	void search(node *ptr,int v){
		while(ptr!=NULL)
		{
			if(v<ptr->data)
			{
				ptr=ptr->lchild;
			}
			else if(v>ptr->data)
			{
				ptr=ptr->rchild;
			}
			else if(v==ptr->data)
			{
				cout<<"found elemnt ";
				break;
			}	
		}
		if(ptr==NULL)
		{
			cout<<"sorry, elementnot found";
		}
	}
};
int main(){
	node n;
	node *temp=new node;
	n.root=temp;
	n.root->data=8;
	n.root->lchild=NULL;
	n.root->rchild=NULL;
	n.create(n.root,4);
	n.create(n.root,9);
	n.create(n.root,5);
	cout<<"displaying tree ";
	n.display(n.root);
	int s,t;
	cout<<"enter element to search ";
	cin>>s;
	n.search(n.root,s);
	cout<<endl;
	cout<<"enter element to search ";
	cin>>t;
	n.search(n.root,t);
	return 0;
}
