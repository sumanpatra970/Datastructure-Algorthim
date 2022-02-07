#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *left;
		node *right;
};
class tree{
	public:
		void display(node *p){
			if(p==NULL){
				return ;
			}
			display(p->left);
			cout<<p->data<<" ";
			display(p->right);
		}
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
		void sumcheck(node *ptr,int m,int n){
			if(m==n){
				cout<<"got dead end";
			}
			if(ptr==NULL){
				return ;
			}
			sumcheck(ptr->left,m,ptr->data-1);
			sumcheck(ptr->right,ptr->data+1,n);
			return ;
		}
};
int main(){
	node *ptr;
	ptr=new node;
	ptr->data=8;
	ptr->left=NULL;
	ptr->right=NULL;
	tree t;
	int a[6]={8,7,2,9,10,1};
	for(int i=1;i<5;i++){
		t.insert(ptr,a[i]);
	}
	t.display(ptr);
	cout<<endl;
	int m=88000;
	int n=88000;
	t.sumcheck(ptr,m,n);
	t.display(ptr);
}
