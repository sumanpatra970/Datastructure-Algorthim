//program is to insert an element in desired pos in a ll
#include<iostream>
using namespace std;
class node{
	public:
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
	cout<<"elemnts before insertion are";
	node *u=first;
	while(u!=NULL)
	{
		cout<<u->data<<" ";
		u=u->next;
	}
	cout<<endl;
	int val,pos;
	cout<<"enter position to insert";
	cin>>pos;
	cout<<"enter value to insert";
	cin>>val;
	int count=1;
	node *ptr=first;
	while(ptr!=NULL)
	{
		if(count==pos)
		{
			node *r=new node;
			r->next=ptr->next;
			ptr->next=r;
			r->data=val;
		}
		ptr=ptr->next;
		count++;
	}
	node *ptrr=first;
	cout<<"elements after insertion are ";
	while(ptrr!=NULL)
	{
		cout<<ptrr->data<<" ";
		ptrr=ptrr->next;
	}
	return 0;
}
