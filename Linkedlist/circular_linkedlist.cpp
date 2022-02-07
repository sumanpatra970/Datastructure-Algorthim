//program is to create circular ll and traverse that
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
	cout<<"elements  address  next-address"<<endl;
	node *ptrr=first;
	node *ptr=NULL;
	int l=9;
	do
	{
		cout<<"   "<<ptrr->data<<"     "<<ptrr<<"   "<<ptrr->next<<endl;
		ptrr=ptrr->next;
	}	while(ptrr!=first);
	return 0;
}
