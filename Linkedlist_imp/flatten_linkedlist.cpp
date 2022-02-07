#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node *bottom;
};
void display(node *p){
	while(p!=NULL){
		cout<<p->data<<" ";
		p=p->next;
	}
}
node * merging(node *ptr1,node *ptr2){
	node *q=new node;
	q=NULL;
	node *p;
	while(ptr1!=NULL && ptr2!=NULL){
			node *t=new node;
			t->next=NULL;
			if(ptr2->data<ptr1->data){
				t->data=ptr2->data;
			}
			else{
				t->data=ptr1->data;
			}
			if(q==NULL){
				q=t;
			}
			if(p==NULL){
				p=t;	
			}
			else{
				p->next=t;
				p=t;
			}
			if(ptr2->data<ptr1->data){
				ptr2=ptr2->bottom;
			}
			else{
				ptr1=ptr1->bottom;
			}
	}
	while(ptr1!=NULL){
		node *t=new node;
		t->data=ptr1->data;
		t->next=NULL;
		ptr1=ptr1->bottom;
		p->next=t;
		p=t;
		display(p);
		cout<<endl;
	}
	while(ptr2!=NULL){
		node *t=new node;
		t->data=ptr2->data;
		t->next=NULL;
		ptr2=ptr2->bottom;
		p->next=t;
		p=t;
	}
	return q;
}
node * solve(node *p){
	while(p->next!=NULL){
		node *ptr1=p;
		node *ptr2=p->next;
		cout<<ptr1->data<<" "<<ptr2->data<<endl;
		node *t;	
		if(p->next->next!=NULL){
			t=p->next->next;
		}
		else{
			t=NULL;
		}
		cout<<t->data<<endl;
		node *q=merging(ptr1,ptr2);
		q->next=t;
		p=q;
		display(p);
	}
	return p;
}
int main(){
	node *head=new node;
	head=NULL;
	int a[3]={7,8,12};
	node *t;
	for(int i=0;i<3;i++){
		if(head==NULL){
			node *p=new node;
			p->data=a[i];
			p->next=NULL;
			p->bottom=NULL;
			head=p;
			t=p;
		}
		else{
			node *p=new node;
			p->data=a[i];
			p->next=NULL;
			p->bottom=NULL;
			t->next=p;
			t=p;
		}
	}
	display(head);
	node *pp=head;
	while(pp!=NULL){
		int n;
		cout<<"enter no of elements for bottom";
		cin>>n;
		for(int i=0;i<n;i++){
			cout<<"enter value";
			cin>>a[i];
		}
		node *btm=new node;
		btm=NULL;
		node *tt=NULL;
		for(int i=0;i<n;i++){
			if(btm==NULL){
				node *p=new node;
				p->data=a[i];
				p->next=NULL;
				p->bottom=NULL;
				btm=p;
				t=p;
			}
			else{
				node *p=new node;
				p->data=a[i];
				p->next=NULL;
				p->bottom=NULL;
				t->next=p;
				t=p;
			}
		}
		pp->bottom=btm;
		pp=pp->next;
	}
	node *pt=head;
	while(pt!=NULL){
		cout<<pt->data<<endl;
		node *bot=pt->bottom;
		while(bot!=NULL){
			cout<<bot->data<<" ";
			bot=bot->next;
		}
		cout<<endl;
		pt=pt->next;
	}
	head=solve(head);
	//display(head);
	return 0;
}
