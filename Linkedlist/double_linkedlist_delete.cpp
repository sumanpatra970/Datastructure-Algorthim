//program to delete element from any position
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
	int pos=1;
	int p;
	cout<<"enter pos to delete";
	cin>>p;
	while(ptrr!=NULL)
	{
		if(p==pos)
		{
			ptrr->next->prev=ptrr->prev;
			ptrr->prev->next=ptrr->next;
			delete ptrr;
			break;
		}
		ptrr=ptrr->next;
		pos++;
	}
	cout<<"elements after delete "<<endl;
	node *ptr=first;
	while(ptr!=NULL)
	{
		cout<<ptr->prev<<" "<<ptr->data<<" "<<ptr->next<<endl;
		ptr=ptr->next;
	}
	return 0;
}
