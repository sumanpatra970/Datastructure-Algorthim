//program to find duplicate element in a ll
#include<iostream>
using namespace std;
class node{
	public:
	node *next;
	int data;
};
int main(){
	int a[5]={2,3,5,2,7};
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
	int max=0;
	node *ptrr=first;
	while(ptrr!=NULL)
	{
		if(max<ptrr->data)
		{
			max=ptrr->data;
		}
		ptrr=ptrr->next;
	}
	int b[max];
	for(int j=0;j<max;j++)
	{
		b[j]=0;
	}
	node *ptr=first;
	while(ptr!=NULL)
	{
		b[ptr->data]++;
		ptr=ptr->next;
	}
	for(int k=0;k<max;k++)
	{
		if(b[k]>1)
		{
			cout<<"repeat element is "<<k;
		}
	}
	return 0;
}
