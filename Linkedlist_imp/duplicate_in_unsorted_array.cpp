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
	int a[5]={9,8,4,9,2};
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
	int maxx=-1;
	while(p!=NULL){
		maxx=max(maxx,p->data);
		p=p->next;
	}
	int v[maxx+1];
	for(int i=0;i<maxx+1;i++){
		v[i]=0;
	}
	p=head;
	while(p!=NULL){
		v[p->data]++;
		p=p->next;
	}
	cout<<"duplicates are ";
	for(int i=0;i<maxx+1;i++){
		if(v[i]>1){
			cout<<i;
		}
	}
	return 0;
}
