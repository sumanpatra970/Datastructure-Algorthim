//program to create stack using ll
#include<iostream>
using namespace std;
class node{
	public:
	node *next;
	int data;
};
class stackk{
	public:
	node* push(node *first,int val)
	{
		node *kk=new node;
		kk->data=val;
		kk->next=first;
		first=kk;
		return first;
	}
	int pop(node *first)
	{
		int temp;
		temp=first->data;
		*first=*first->next;
		return temp;
	}
};
int main(){
	int n=5;
	node *first;
	first=new node;
	first->data=9;
	first->next=NULL;
	stackk nn;
	node *ptr;
	first=nn.push(first,8);
	first=nn.push(first,7);
	ptr=first;
	cout<<"elements in stack are ";
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<endl;
	cout<<" pop element "<<nn.pop(first)<<endl;
	first=nn.push(first,4);
	cout<<" pop element "<<nn.pop(first)<<endl;
	return 0;
}
