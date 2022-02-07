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
node * solve(node *p){
	node *even=new node;
	node *odd=new node;
	even=NULL;
	odd=NULL;
	node *tt=NULL;
	node *ts=NULL;
	while(p!=NULL){
		if((p->data)%2==0){
			node *t=new node;
			t->data=p->data;
			t->next=NULL;
			if(even==NULL){
				even=t;
			}
			if(tt==NULL){
				tt=t;
			}
			else{
				tt->next=t;
				tt=t;
			}
		}
		else{
			node *t=new node;
			t->data=p->data;
			t->next=NULL;
			if(odd==NULL){
				odd=t;
			}
			if(ts==NULL){
				ts=t;
			}
			else{
				ts->next=t;
				ts=t;
			}
		}
		p=p->next;
	}
	tt->next=odd;
	return even;
}
int main(){
	node *head=new node;
	head=NULL;
	int a[5]={7,1,3,8,2};
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
	head=solve(head);
	display(head);
	return 0;
}
