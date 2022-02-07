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
int count(node *p){
	int c=0;
	while(p!=NULL){
		c++;
		p=p->next;
	}
	return c;
}
void solve(node *p,int c){
	int k=0;
	while(p!=NULL){
		if(k==c){
			cout<<p->data;
			break;
		}
		k++;
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
	display(head);
	cout<<endl;
	int c=count(head);
	solve(head,c/2);
	return 0;
}
