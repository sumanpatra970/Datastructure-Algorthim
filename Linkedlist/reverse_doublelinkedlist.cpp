#include<iostream>
using namespace std;
class node{
	public:
	node *prev;
	node *next;
	int data;
};
int main(){
	int a[5]={2,3,5,6,7};
	int n=5;
	node *first;
	first=new node;
	first->data=9;
	first->next=NULL;
	first->prev=NULL;
	node *temp;
	node *ptemp;
	temp=first;
	ptemp=NULL;
	for(int i=0;i<5;i++)
	{
		node *y=new node;
		temp->next=y;
		y->next=NULL;
		y->data=a[i];
		y->prev=temp;
		temp=y;
	}
	cout<<"elements are "<<endl;
	node *p=first;
	while(p!=NULL)
	{
		cout<<p->prev<<" "<<p->data<<" "<<p->next<<endl;
		p=p->next;
	}
	node *ptrr=first;
	node *pt=NULL;
	while(ptrr!=NULL)
	{
		node *temp;
		temp=ptrr->next;
		ptrr->next=ptrr->prev;
		ptrr->prev=temp;
		pt=ptrr;
		ptrr=ptrr->prev;
	}
	first=pt;
	cout<<"reversing done "<<endl;
	cout<<"elements are "<<endl;
	node *ptr=first;
	while(ptr!=NULL)
	{
		cout<<ptr->prev<<" "<<ptr->data<<" "<<ptr->next<<endl;
		ptr=ptr->next;
	}
	return 0;
}
