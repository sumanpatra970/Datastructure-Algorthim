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
	node *ptr=first;
	cout<<"elements in linkedlist before reverse are ";
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<endl;
	node *firstt=first;
	node *second=first->next;
	node *third= second->next;
	first->next=NULL;
	while(third!=NULL)
	{
		second->next=firstt;
		firstt=second;
		second=third;
		third=third->next;
	}
	second->next=firstt;
	first=second;
	node *pptr=first;
	cout<<"elements in linkedlist after reverse are ";
	while(pptr!=NULL)
	{
		cout<<pptr->data<<" ";
		pptr=pptr->next;
	}
	return 0;
}
