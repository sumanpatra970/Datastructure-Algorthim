//program to create a ll and print elements
#include<iostream>
using namespace std;
class node{
	public:
	node *a;
	int data;
};
int main(){
	node* first;
	first=new node;
	int val,val2;
	cout<<"enter value ";
	cin>>val;
	first->data=val;
	first->a=NULL;
	cout<<"enter value ";
	cin>>val2;
	node *y=new node;
	first->a=y;
	first->a->data=val2;
	first->a->a=NULL;
	node *temp;
	temp=first;
	cout<<"elements are ";
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->a;
	}
	return 0;
}
