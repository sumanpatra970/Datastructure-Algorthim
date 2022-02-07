//program for radix-sort
#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
int main(){
	int a[9]={237,146,259,348,152,163,235,48,36};
	node *c[10];
	node *d[5];
	int n=9;
	int f=0;
	cout<<"array : ";
	for(int v=0;v<9;v++)
	{
		cout<<a[v]<<" ";
	}
	for(int y=0;y<10;y++)
	{
		c[y]=NULL;
	}
	for(int i=0;i<n;i++)
	{
		int b=a[i]%10;
		if(c[b]==NULL)
		{
			node *t=new node;
			t->data=a[i];
			t->next=NULL;
			c[b]=t;	
		}
		else
		{
			node *r=new node;
			r->data=a[i];
			r->next=NULL;
			c[b]->next=r;
		}
	}
	int m=0;
	for(int yy=0;yy<10;yy++)
	{
		c[yy]=NULL;
	}
	for(int ii=0;ii<n;ii++)
	{
		int b=(a[ii]/10)%10;
		if(c[b]==NULL)
		{
			node *t=new node;
			t->data=a[ii];
			t->next=NULL;
			c[b]=t;	
		}
		else
		{
			node *r=new node;
			r->data=a[ii];
			r->next=c[b];
			c[b]=r;
		}
	}
	for(int yy=0;yy<10;yy++)
	{
		c[yy]=NULL;
	}
	for(int ii=0;ii<n;ii++)
	{
		int b=(a[ii]/100)%10;
		if(c[b]==NULL)
		{
			node *t=new node;
			t->data=a[ii];
			t->next=NULL;
			c[b]=t;	
		}
		else
		{
			if(c[b]->next==NULL)
			{
				node *r=new node;
				r->data=a[ii];
				r->next=NULL;
				c[b]->next=r;	
			}
			else
			{
				node *h=new node;
				h->data=a[ii];
				h->next=NULL;
				c[b]->next->next=h;
			}
		}
	}
	cout<<endl;
	cout<<"sorted array : ";
	for(int uu=0;uu<10;uu++)
	{
		node *s=c[uu];
		while(s!=NULL)
		{
			cout<<s->data<<" ";
			s=s->next;
		}
	}
	return 0;
}
