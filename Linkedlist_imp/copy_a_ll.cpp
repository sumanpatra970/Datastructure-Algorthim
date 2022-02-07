#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		node *random;
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
			p->random=NULL;
			head=p;
			t=p;
		}
		else{
			node *p=new node;
			p->data=a[i];
			p->next=NULL;
			p->random=NULL;
			t->next=p;
			t=p;
		}
	}
	display(head);
	int n=5;
	node *c1;
	node *p;
	p=head;
	while(p!=NULL){
		if(p->data==7){
			c1=p;
			break;
		}
		p=p->next;
	}
	cout<<endl;
	cout<<c1->data<<endl;
	p=head;
	node *c2;
	while(p!=NULL){
		if(p->data==4){
			c2=p;
			break;
		}
		p=p->next;
	}
	cout<<c2->data<<endl;
	c1->random=c2;	
	node *c3;
	p=head;
	while(p!=NULL){
		if(p->data==8){
			c3=p;
			break;
		}
		p=p->next;
	}
	cout<<c3->data<<endl;
	p=head;
	node *c4;
	while(p!=NULL){
		if(p->data==9){
			c4=p;
			break;
		}
		p=p->next;
	}
	cout<<c4->data<<endl;
	c3->random=c4;
	node *c5;
	p=head;
	while(p!=NULL){
		if(p->data==2){
			c5=p;
			break;
		}
		p=p->next;
	}
	cout<<c5->data<<endl;
	c5->random=c1;
	p=head;
	while(p!=NULL){
		cout<<p->data<<" ";
		if(p->random==NULL){
			cout<<0<<" ";
		}
		if(p->random!=NULL){
			cout<<p->random->data<<" ";
		}
		cout<<endl;
		p=p->next;
		
	}
	p=head;
	while(p!=NULL){
		node *temp=new node;
		temp->data=p->data;
		temp->next=NULL;
		temp->random=NULL;
		temp->next=p->next;
		p->next=temp;
		//cout<<p->data<<p->next->data<<endl;
		p=p->next->next;
	}
	p=head;
	while(p!=NULL){
		cout<<p->data;
		p=p->next;
	}
	p=head;
	while(p!=NULL){
		cout<<p->data<<" ";
		if(p->random!=NULL){
			p->next->random=p->random->next;	
		}
		else{
			p->next->random=NULL;	
		}
		p=p->next->next;
	}
	p=head;
	node *head2=NULL;
	cout<<endl;
	while(p->next!=NULL){
		cout<<p->data<<" ";
		node *t=p->next;
		p->next=p->next->next;
		t->next=p->next->next;
		if(head2==NULL){
			head2=t;
		}
		cout<<p->next->data<<endl;
		p=p->next;
		if(p->next->next==NULL){
			p->next=NULL;
		}
	}
	cout<<"done";
	p->next=NULL;
	t->next=NULL;
	display(head);
	cout<<endl;
	p=head2;
	while(p!=NULL){
		cout<<p->data<<" ";
		if(p->random==NULL){
			cout<<0<<" ";
		}
		if(p->random!=NULL){
			cout<<p->random->data<<" ";
		}
		cout<<endl;
		p=p->next;
		
	}
	return 0;
}
