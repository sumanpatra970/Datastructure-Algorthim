//program for hash fun with chaining
#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
};
class hash{
	public:
	node *hash[10];
	void hashfun(int a[],int n){
		for(int s=0;s<10;s++)
		{
			hash[s]=NULL;
		}
		for(int x=0;x<n;x++)
		{
			int c=a[x]%10;
			node *p=hash[c];
			node *pt;
			if(p!=NULL)
			{
				node *t=new node;
				t->data=a[x];
				t->next=p;
				hash[c]=t;
				node *u=hash[c];
			}
			else
			{
				node *r=new node;
				r->data=a[x];
				r->next=NULL;
				hash[c]=r;
			}
		}
		for(int k=0;k<10;k++)
		{
			node *ptr=hash[k];
			while(ptr!=NULL)
			{
				cout<<ptr->data<<" ";
				ptr=ptr->next;	
			}
		}
	}
	void search(int val){
		int m=val%10;
		node *t=hash[m];
		while(t!=NULL)
		{
			if(t->data==val)
			{
				break;
			}
			else
			{
				t=t->next;
			}
		}
		if(t==NULL)
		{
			return ;
		}
	}
};

int main(){
	int a[6]={2,33,4,23,6,16};
	int n=6;
	hash h;
	cout<<"array : ";
	for(int v=0;v<n;v++)
	{
		cout<<a[v]<<" ";
	}
	cout<<endl;
	cout<<"hashed array : ";
	h.hashfun(a,n);
	h.search(33);
	h.search(90);
	return 0;
}
