//program is to element head element in a ll
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
	first=first->next;
	node *ptr=first;
	cout<<"deleted element from head pos"<<endl;
	cout<<"Now elements in linkedlist are ";
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	return 0;
}
