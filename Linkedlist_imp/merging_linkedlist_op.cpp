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
	cout<<"elements are ";
	node *ptrr=first;
	while(ptrr!=NULL)
	{
		cout<<ptrr->data<<" ";
		ptrr=ptrr->next;
	}
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
	cout<<"elements are ";
	node *ptr=second;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	int l=0;
	node *p=first;
	node *pp=second;
	int c[20];
	while(p!=NULL && pp!=NULL)
	{
		if(p->data>pp->data
		{
			c[l]=pp->data;
			pp=pp->next;
			l++;
		}
		else
		{
			c[l]=p->data;
			p=p->next;
			l++;
		}
	}
	while(p!=NULL)
	{
		c[l]=p->data;
		l++;
		p=p->next;
	}
	while(pp!=NULL)
	{
		c[l]=pp->data;
		l++;
		pp=pp->next;
	}
	cout<<endl;
	cout<<"elements after merging are ";
	for(int ll=0;ll<l;ll++)
	{
		cout<<c[ll]<<" ";
	}
	return 0;
}
