#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
void display(node *p){
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}
node * solve(node *t,node *p){
	if(p->next==NULL){
		return p;
	}
	node *q=solve(p,p->next);
	if(p->data>q->data){
		return p;
	}
	else{
		if(t!=NULL){
			t->next=q;
		}
		return q;
	}
}
int main(){
	node *head=new node;
	head=NULL;
	int a[5]={7,18,4,9,2};
	node *t;
	for(int i=0;i<5;i++){
		if(head==NULL){
			node *p=new node;
			p->data=a[i];
			p->next=NULL;
			head=p;
			t=p;
		}
		else{
			node *p=new node;
			p->data=a[i];
			p->next=NULL;
			t->next=p;
			t=p;
		}
	}
	node *p=head;
	node *tt=NULL;
	display(head);
	head=solve(tt,p);
	cout<<endl;
	display(head);
	return 0;
}
