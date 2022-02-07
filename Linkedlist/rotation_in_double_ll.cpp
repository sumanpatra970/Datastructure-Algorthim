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
	int n=2;
	int k=0;
	while(p!=NULL){
		q=p;
		p=p->next;
	}
	p=root;
	node *pr=root;
	node *tt;
	while(p!=NULL){
		if(k==n){
			tt->next=NULL;
			p->prev=NULL;
			root=p;
			break;
		}
		cout<<p->data;
		tt=p;
		p=p->next;
		k++;
	}
	q->next=pr;
	pr->prev=q;
	cout<<endl;
	node *temp=root;
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
	}
	return 0;
}
