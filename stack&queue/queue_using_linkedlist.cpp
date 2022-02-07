//program to create queue using ll
#include<iostream>
using namespace std;
class node{
	public:
	int n=5;
	node *next;
	int data;
	int counter=0;
	node *first;
	void enque(int val){
		if(counter<n)
		{
			node *ptr=first;
			node *pt=NULL;
			while(ptr!=NULL)
			{
				pt=ptr;
				ptr=ptr->next;
			}
			node *n= new node;
			n->data=val;
			n->next=NULL;
			pt->next=n;
			counter++;	
		}
		else
		{
			cout<<"queue is full";
		}
	}
	void display(){
		node *p=first;
		while(p!=NULL)
		{
		cout<<p->data<<" ";
		p=p->next;
		}
	}
	int deque(){
		if(counter==0)
		{
			cout<<"queue is empty";
			return 0;
		}
		else
		{
			int r=first->data;
			first=first->next;
			counter--;
			return r;	
		}
	}
	void is_full(){
		if(counter==n)
		{
			cout<<"queue is full";
		}
		else
		{
			cout<<"queue is not full";
		}
	}
	void is_empty(){
		if(counter==0)
		{
			cout<<"queue is empty";
		}
		else
		{
			cout<<"queue is not empty";
		}
	}
};
int main(){
	node nn;
	int ab;
	nn.first=new node;
	nn.first->data=9;
	nn.first->next=NULL;
	nn.counter++;
	cout<<"enter element to enque ";
	cin>>ab;
	nn.enque(ab);
	cout<<"displaying queue ";
	nn.display();
	cout<<endl;
	cout<<"deque element is ";
	cout<<nn.deque();
	cout<<endl;
	cout<<"displaying queue ";
	nn.display();
	cout<<endl;
	cout<<"deque element is ";
	cout<<nn.deque();
	cout<<endl;
	cout<<"queue status ";
	nn.is_empty();
	return 0;
}
