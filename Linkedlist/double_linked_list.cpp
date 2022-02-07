//program to create double ll and traverse that
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
	cout<<"prev  element  next"<<endl;
	node *ptrr=first;
	while(ptrr!=NULL)
	{
		cout<<ptrr->prev<<" "<<ptrr->data<<" "<<ptrr->next<<endl;
		ptrr=ptrr->next;
	}
	return 0;
}
