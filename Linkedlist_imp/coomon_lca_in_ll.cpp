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
	int a[5]={7,8,4,9,2};
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
	node *head2=new node;
	head2=NULL;
	int b[6]={1,0,3,4,9,2};
	t=NULL;
	for(int i=0;i<6;i++){
		if(head2==NULL){
			node *p=new node;
			p->data=b[i];
			p->next=NULL;
			head2=p;
			t=p;
		}
		else{
			node *p=new node;
			p->data=b[i];
			p->next=NULL;
			t->next=p;
			t=p;
		}
	}
	cout<<endl;
	node *p=head;
	node *q=head2;
	int k=0;
	while(p!=NULL){
		p=p->next;
		k++;
	}
	int kk=0;
	while(q!=NULL){
		q=q->next;
		kk++;
	}
	int dd;
	node *temp;
	if(k>kk){
		dd=k-kk;
		temp=head;
	}
	else{
		dd=kk-k;
		temp=head2;
	}
	int kl=0;
	while(temp!=NULL){
		if(kl==dd){
			break;
		}
		temp=temp->next;
		kl++;
	}
	node *t1=head;
	node *t2=temp;
	while(t1->data!=t2->data){
		t1=t1->next;
		t2=t2->next;
	}
	cout<<t1->data;
	return 0;
}
