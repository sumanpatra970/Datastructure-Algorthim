//program to delete elemnt in circular ll
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
	temp->next=first;
	cout<<"elements are before deletion ";
	node *ptrr=first;
	node *ptr=NULL;
	do
	{
		cout<<ptrr->data<<" ";
		ptr=ptrr;
		ptrr=ptrr->next;
	}	while(ptrr!=first);
	ptr->next=ptrr->next;
	first=ptrr->next;
	node *pp=first;
	cout<<endl;
	cout<<"deleting head element"<<endl;
	cout<<"elements are after deletion ";
	do
	{
		cout<<pp->data<<" ";
		pp=pp->next;
	}	while(pp!=first);
	return 0;
}
