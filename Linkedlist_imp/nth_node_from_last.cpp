#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
int display(node *p){
	int k=0;
	while(p!=NULL){
		cout<<p->data;
		p=p->next;
		k++;
	}
	return k;
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
	int k=display(head);
	int n=2;
	int vv=0;
	node *p=head;
	cout<<endl;
	while(p!=NULL){
		if(vv==k-n){
			cout<<p->data;
			break;
		}
		p=p->next;
		vv++;
	}
	return 0;
}
