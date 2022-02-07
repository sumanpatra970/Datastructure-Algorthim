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
	t->next=head;
	node *p=head;
	node *q;
	vector<node*> v;
	while(p!=NULL){
		vector<node*>::iterator itr;
		int f=0;
		for(itr=v.begin();itr!=v.end();itr++){
			if(*itr==p){
				f=1;
			}
		}
		if(f==0){
			v.push_back(p);
		}
		else{
			cout<<"loop present"<<q->data;
			break;
		}
		q=p;
		p=p->next;
	}
	
	return 0;
}
