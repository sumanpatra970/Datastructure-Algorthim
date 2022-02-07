#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *prev;
		node *next;
};
int main(){
	node *root=new node;
	root=NULL;
	int a[5]={4,6,7,8,9};
	node *p;
	for(int i=0;i<5;i++){
		if(root==NULL){
			node *t=new node;
			t->data=a[i];
			t->prev=NULL;
			t->next=NULL;
			p=t;
			root=p;
		}
		else{
			node *t=new node;
			t->data=a[i];
			t->prev=p;
			t->next=NULL;
			p->next=t;
			p=t;
		}
	}
	p=root;
	node *q;
	while(p!=NULL){
		cout<<p->data;
		q=p;
		p=p->next;
	}
	cout<<endl;
	p=q;
	while(p!=NULL){
		cout<<p->data;
		p=p->prev;
	}
	return 0;
}
