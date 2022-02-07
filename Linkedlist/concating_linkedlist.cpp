//program is to concante two linkedlist
#include<iostream>
using namespace std;
class node{
	public:
	node *next;
	int data;
};
int main(){
	int a[5]={3,4,5,6,7};
	int n=5;
	node *first;
	first=new node;
	first->data=2;
	first->next=NULL;
	node *temp;
	temp=first;
	for(int i=0;i<5;i++)
	{
		node *y=new node;
		temp->next=y;
		y->next=NULL;
		y->data=a[i];
		temp=y;
	}
	cout<<"elements in first ll are ";
	node *p=NULL;
	node *ptrr=first;
	while(ptrr!=NULL)
	{
		p=ptrr;
		cout<<ptrr->data<<" ";
		ptrr=ptrr->next;
	}
	cout<<endl;
	int b[5]={1,10,11,12,13};
	node *second;
	second=new node;
	second->data=0;
	second->next=NULL;
	node *tempp;
	tempp=second;
	for(int j=0;j<5;j++)
	{
		node *z=new node;
		tempp->next=z;
		z->next=NULL;
		z->data=b[j];
		tempp=z;
	}
	cout<<"elements in second ll are ";
	node *ptr=second;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<endl;
	p->next=second;
	node *op=first;
	cout<<"elemnts after merging ll are ";
	while(op!=NULL)
	{
		cout<<op->data<<" ";
		op=op->next;
	}
	return 0;
}
