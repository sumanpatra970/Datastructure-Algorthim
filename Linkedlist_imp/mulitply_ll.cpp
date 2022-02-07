#include<iostream>
#include<math.h>
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
int size(node *p){
	int k=0;
	while(p!=NULL){
		k++;
		p=p->next;
	}
	return k;
}
int main(){
	node *head=new node;
	head=NULL;
	int a[3]={7,8,4};
	node *t;
	for(int i=0;i<3;i++){
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
	node *head2=new node;
	head2=NULL;
	int b[2]={1,8};
	t=NULL;
	for(int i=0;i<2;i++){
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
	int k=size(head);
	int l=size(head2);
	k=k-1;
	l=l-1;
	cout<<endl<<k<<l<<endl;
	node *p=head;
	int sum=0;
	while(p!=NULL){
		sum=sum+p->data*pow(10,k);
		k--;
		p=p->next;
	}
	int ssum=0;
	p=head2;
	while(p!=NULL){
		ssum=ssum+p->data*pow(10,l);
		l--;
		p=p->next;
	}
	cout<<endl<<sum<<" "<<ssum<<endl;
	cout<<"res "<<sum*ssum;
	return 0;
}
