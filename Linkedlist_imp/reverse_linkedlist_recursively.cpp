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
node * reverse(node *p,node *q,node *t){
	//cout<<endl<<p->data;
	node *h;
	if(t==NULL && q!=NULL){
		return p;
	}
	q=p;
	if(t==NULL){
		//cout<<"in";
		t=p->next;
		q->next=NULL;
	}
	p=t;
	t=t->next;
	p->next=q;
	h=reverse(p,q,t);
	return h;
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
	display(head);
	node *q=NULL;
	node *tt=NULL;
	head=reverse(head,q,tt);
	cout<<endl;
	display(head);
	return 0;
}
