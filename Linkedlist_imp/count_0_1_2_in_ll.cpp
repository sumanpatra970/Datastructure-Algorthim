#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
void display(node *p){
	while(p!=NULL){
		cout<<p->data;
		p=p->next;
	}
}
int main(){
	node *head=new node;
	head=NULL;
	int a[5]={0,0,0,1,2};
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
	node *q=head;
	int ck=0,cl=0,cm=0;
	while(q!=NULL){
		if(q->data==0){
			ck++;
		}
		else if(q->data==1){
			cl++;
		}
		else{
			cm++;
		}
		q=q->next;
	}
	for(int i=0;i<ck;i++){
		cout<<0<<" ";
	}
	for(int i=0;i<cl;i++){
		cout<<1<<" ";
	}
	for(int i=0;i<cm;i++){
		cout<<2<<" ";
	}
	return 0;
}
