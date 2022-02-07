#include<iostream>
using namespace std;
int m=0;
class node{
	public:
		node *left;
		node *right;
		int data;
};
class tree{
	public:
		void insert(node *ptr,int a){
			node *qtr;
			while(ptr!=NULL){
				if(a<ptr->data){
					qtr=ptr;
					ptr=ptr->left;
				}
				else{
					qtr=ptr;
					ptr=ptr->right;
				}
			}
				node *temp=new node;
				temp->data=a;
				temp->left=NULL;
				temp->right=NULL;
				if(a<qtr->data){
					qtr->left=temp;
				}
				else{
					qtr->right=temp;
				}
			}
		void display(node *ptr,int p){
			if(ptr==NULL){
				return ;
			}
			display(ptr->left,p);
			m++;
			if(m==p){
				cout<<"median is "<<ptr->data<<endl;	
			}
			display(ptr->right,p);
			return ;
		}
};
int main(){
	tree t;
	node *ptr=new node;
	ptr->data=4;
	ptr->left=NULL;
	ptr->right=NULL;
	int a[5]={4,2,3,6,7};
	for(int i=1;i<5;i++){
		t.insert(ptr,a[i]);
	}
	cout<<"end"<<endl;
	int n,p;
	n=5;
	if(n%2==0){
		p=(n/2+(n+1)/2)/2;
	}
	else{
		p=(n+1)/2;
	}
	t.display(ptr,p);
	return 0;
}
