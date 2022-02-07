//program is to delete element at desired pos in a ll
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
	cout<<"elemnts are ";
	node *u=first;
	while(u!=NULL)
	{
		cout<<u->data<<" ";
		u=u->next;
	}
	int pos,count=1;
	cout<<"enter position";
	cin>>pos;
	node *io,*ptrr;
	ptrr=first;
	while(ptrr!=NULL)
	{
		if(count==pos)
		{
			io->next=ptrr->next;
			break;
		}
		io=ptrr;
		ptrr=ptrr->next;
		count++;
	}
	node *ptr=first;
	cout<<"elements after deletion are ";
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	return 0;
}
