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
node * solve(node *p,int c){
	int k=0;
	int cc=c/2;
	node *q;
	while(p!=NULL){
		if(k==cc){
			q->next=NULL;
			if(c%2==0){
				return p;
			}
			else{
				return p->next;	
			}
		}
		else{
			cout<<p->data;
			k++;
			q=p;
			p=p->next;
		}
	}
}
int main(){
	node *head=new node;
	head=NULL;
	int a[6]={7,8,1,4,8,7};
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
	cout<<endl;
	int c=count(head);
	node *head2=solve(head,c);
	
	display(head2);
	node *p=head2;
	node *q=NULL;
	node *tp=NULL;
	cout<<endl;
	while(p!=NULL){
		if(tp==NULL && q==NULL){
			q=p;
			p=p->next;
			tp=p->next;
			q->next=NULL;
		}
		else{
			q=p;
			p=tp;
			if(tp!=NULL){
				tp=tp->next;	
			}
		}
		if(p==NULL){
				break;
			}
		p->next=q;
	}
	head2=q;
	display(head);
	display(head2);
	p=head;
	q=head2;
	int f=0;
	while(p!=NULL){
		if(p->data!=q->data){
			f=1;
			cout<<"not pallindrome";
			break;
		}
		p=p->next;
		q=q->next;
	}
	if(f==0){
		cout<<"pallindrome";
	}
	return 0;
}
