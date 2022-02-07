//program to create graph using ll
#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
int main(){
	int b[5][5]={{0,1,1,1,0},{1,0,0,1,0},{1,0,0,1,0},{1,1,1,0,0},{1,0,0,0,0}};
	int n=5;
	node *c[5];
	for(int d=0;d<n;d++)
	{
		c[d]=NULL;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(b[i][j]==1)
			{
				node *t=new node;
				t->data=j;
				t->next=c[i];
				c[i]=t;
			}
		}
	}
	for(int l=0;l<n;l++)
	{
		node *p=c[l];
		while(p!=NULL)
		{
			cout<<p->data<<" ";
			p=p->next;
		}
		cout<<endl;
	}
}
