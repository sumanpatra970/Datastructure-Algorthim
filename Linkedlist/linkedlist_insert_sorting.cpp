//program to search an element and if that is there just insert with sorted manner 
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
	first->data=1;
	first->next=NULL;
	node *temp;
	int count=0;
	int element;
	cout<<"enter element to search";
	cin>>element;
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
	cout<<"elements in linkedlist before searching are ";
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<endl;
	node *ptrrr=NULL;
	node *ptrr=first;
	int counter=0;
	while(ptrr!=NULL)
	{
		if(ptrr->data>=element)
		{
			if(ptrr==first)
			{
				node *z=new node;
				z->data=element;
				z->next=first;
				first=z;
			}
			else
			{
				node *z=new node;
				z->data=element;
				z->next=ptrr;
				ptrrr->next=z;
			}
			break;
			count++;
		}
		ptrrr=ptrr;
		ptrr=ptrr->next;
	}
	if(counter==0)
	{
		cout<<"no element found "<<endl;
	}
	node *pptr=first;
	cout<<"elements in linkedlist after searching are ";
	while(pptr!=NULL)
	{
		cout<<pptr->data<<" ";
		pptr=pptr->next;
	}
	return 0;
}
