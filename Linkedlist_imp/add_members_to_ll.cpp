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
	int b[5]={1,0,9,8,7};
	t=NULL;
	node *head2=new node;
	head2=NULL;
	for(int i=0;i<5;i++){
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
	display(head2);
	node *p=head;
	node *q=head2;
	vector<int> v;
	while(p!=NULL && q!=NULL){
		int s=0;
		int d1=p->data;
		int d2=q->data;
		p=p->next;
		q=q->next;
		s=d1+d2;
		v.push_back(s);
	}
	while(p!=NULL){
		v.push_back(p->data);
		p=p->next;
	}
	while(q!=NULL){
		v.push_back(q->data);
		q=q->next;
	}
	cout<<endl;
	vector<int>::iterator itr;
	for(itr=v.begin();itr!=v.end();itr++){
		cout<<*itr<<" ";
	}
	return 0;
}
