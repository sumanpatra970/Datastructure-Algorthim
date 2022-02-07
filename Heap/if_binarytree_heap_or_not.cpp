#include<iostream>
#include<queue>
using namespace std;
class node{
	public:
		int data;
		node *left;
		node *right;
};
class tree{
	public:
		int res=0;
		void display(node *p){
			if(p==NULL){
				return ;
			}
			display(p->left);
			cout<<p->data;
			display(p->right);
		}
		void insert(node *root,int i){
			node *p=root;
			node *q=NULL;
			int cc;
			while(p!=NULL){
				int c;
				cout<<"";
				cin>>c;
				q=p;
				if(c==0){
					p=p->left;
				}
				else{
					p=p->right;
				}
				cc=c;
			}
				node *temp=new node;
				temp->data=i;
				temp->left=NULL;
				temp->right=NULL;
				if(cc==0){
					q->left=temp;
				}
				else{
					q->right=temp;
				}
				return ;
		}
		int solve(node *p){
			if(p==NULL){
				return 0;
			}
			int x=solve(p->left);
			int y=solve(p->right);
			if(p->data<x || p->data<y){
				res=1;
			}		
			return p->data;
		}
};
int main(){
	node *ptr;
	ptr=new node;
	ptr->data=12;
	ptr->left=NULL;
	ptr->right=NULL;
	tree t;
	int a[3]={12,4,5};
	for(int i=1;i<3;i++){
		t.insert(ptr,a[i]);
	}
	t.display(ptr);
	t.solve(ptr);
	if(t.res==0){
		cout<<"yes heap";
	}
	else{
		cout<<"no not a heap";
	}
	return 0;
}
