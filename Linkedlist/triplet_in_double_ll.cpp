#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *prev;
		node *next;
};
int main(){
	node *root=new node;
	root=NULL;
	int a[8]={4,6,7,8,9,1,2,3};
	node *p;
	for(int i=0;i<8;i++){
		if(root==NULL){
			node *t=new node;
			t->data=a[i];
			t->prev=NULL;
			t->next=NULL;
			p=t;
			root=p;
		}
		else{
			node *t=new node;
			t->data=a[i];
			t->prev=p;
			t->next=NULL;
			p->next=t;
			p=t;
		}
	}
	p=root;
	node *q;
	while(p!=NULL){
		cout<<p->data;
		q=p;
		p=p->next;
	}
	int sum=12;
	node *p1,*p2,*p3;
	cout<<endl;
	p1=root;
	while(p1!=NULL){
		int x=p1->data;
		p2=root;
		while(p2!=NULL && p1!=p2){
			int y=p2->data;
			p3=root;
			while(p3!=NULL && p3!=p2 && p3!=p1){
				int z=p3->data;
				if(x+y+z==sum){
					cout<<x<<" "<<y<<" "<<z<<endl;
				}
				p3=p3->next;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}
	return 0;
}
