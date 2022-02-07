#include<iostream>
#include<map>
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
	int b[5]={4,2,0,1,7};
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
	cout<<endl;
	node *p=head;
	node *q=head2;
	map<int,int> mp;
	while(p!=NULL){
		if(mp.find(p->data)==mp.end()){
			mp[p->data]=1;
		}
		else{
			mp[p->data]++;
		}
		p=p->next;
	}
	while(q!=NULL){
		if(mp.find(q->data)==mp.end()){
			mp[q->data]=1;
		}
		else{
			mp[q->data]++;
		}
		q=q->next;
	}
	map<int,int>::iterator itr;
	for(itr=mp.begin();itr!=mp.end();itr++){
		if(itr->second>1){
			cout<<itr->first<<" ";
		}
	}
	cout<<endl;
	return 0;
}
