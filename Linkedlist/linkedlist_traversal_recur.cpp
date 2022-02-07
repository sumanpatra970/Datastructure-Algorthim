//program to traverse a ll using recursion
#include<iostream>
using namespace std;
class node{
	public:
	node *next;
	int data;
	void disp(node *p){
		if(p==NULL)
		{
			return ;
		}
		cout<<p->data<<" ";
		p=p->next;
		disp(p);
	}
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
	node *ptr=first;
	node nn;
	cout<<"elements are ";
	nn.disp(ptr);
	return 0;
}
