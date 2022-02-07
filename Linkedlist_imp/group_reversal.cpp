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
	int a[6]={7,8,4,9,2,1};
	node *t;
	for(int i=0;i<6;i++){
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
	node *p=head;
	node *q=NULL;
	node *tt=NULL;
	int k=0;
	int n=3;
	node *ip=head;
	node *fp=NULL;
	int v=1;
	node *pp,*pk;
	while(p!=NULL){
		//cout<<k<<" "<<p->data<<" "<<p->next->data;
		if(k==n-1){
			pk=pp;
			pp=tt;
			if(v!=3){
				fp=p;
				ip->next=fp;
				ip=fp;
			}
			else{
				head=p;
				cout<<v<<head->data;
			}
			p=tt;
			if(tt!=NULL){
				tt=tt->next;	
			}
			//tt=NULL;
			k=0;
		}
		else{
			q=p;
			if(tt==NULL){
				p=p->next;
			}	
			else{
				p=tt;
			}
			tt=p->next;
			p->next=q;
			k++;
		}
		v++;
	}
	pk->next=NULL;	
	cout<<endl;
	display(head);
	return 0;
}
