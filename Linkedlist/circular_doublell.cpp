//program to create circular ll and traverse that
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
	node *ptrr=first;
	node *ptr=NULL;
	while(ptrr!=NULL)
	{
		ptr=ptrr;
		ptrr=ptrr->next;
	}
	ptr->next=first;
	first->prev=ptr;
	cout<<"previous "<<"element "<<"Next "<<endl;
	cout<<first->prev<<" "<<first->data<<" "<<first->next<<endl;
	node *p=first->next;
	while(p!=NULL)
	{
		if(p!=first)
		{
				cout<<p->prev<<" "<<p->data<<" "<<p->next<<endl;
				p=p->next;
		}
	};
	return 0;
}
