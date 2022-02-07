#include<iostream>
#include<vector>
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
	int a[5]={7,8,4,4,2};
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
	node *p=head->next;
	node *q=head;
	vector<node*> v;
	cout<<"duplicate ele ";
	while(p!=NULL){
		if(p->data==q->data){
			cout<<p->data;
			q->next=p->next;
			p=p->next;
		}
		else{
			q=p;
			p=p->next;
		}
	}
	return 0;
}
