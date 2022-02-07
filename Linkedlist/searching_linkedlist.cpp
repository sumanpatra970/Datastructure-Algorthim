//program to search element in ll(linear search)
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
	cout<<"elements in linkedlist are ";
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<endl;
	node *ptrr=first;
	while(ptrr!=NULL)
	{
		if(ptrr->data==element)
		{
			cout<<"element found";
			count++;
			break;
		}
		ptrr=ptrr->next;
	}
	if(count==0)
	{
		cout<<"element not found";
	}
	return 0;
}
