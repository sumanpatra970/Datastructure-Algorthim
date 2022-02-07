//program to check whether ll is sorted or not
#include<iostream>
using namespace std;
class node{
	public:
	node *next;
	int data;
};
int main(){
	int a[5]={2,3,1,6,7};
	int n=5;
	node *first;
	first=new node;
	first->data=1;
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
	int f=0;
	node *ptr=first;
	while(ptr!=NULL)
	{
		if(ptr->next==NULL || ptr->next->data>ptr->data)
		{
			f=2;
			ptr=ptr->next;
		}
		else
		{
			f=1;
			ptr=ptr->next;
			break;
		}
	}
	if(f==2)
	{
		cout<<"array is sorted";
	}
	else
	{
		cout<<"array is not sorted";
	}
	return 0;
}
