#include<iostream>
using namespace std;
class node{
	public:
		node *left;
		node *right;
		int data;
};
class tree{
	public:
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
		void display(node *ptr){
			if(ptr==NULL){
				return ;
			}
			display(ptr->left);
			cout<<ptr->data;
			display(ptr->right);
			return ;
		}
		int check(node *ptr){
			if(ptr==NULL){
				return 0;
			}
			int ll=check(ptr->left);
			int rr=check(ptr->right);
			if(ptr->left!=NULL && ptr->right!=NULL){
				if(ptr->data>ptr->left->data && ptr->data<ptr->right->data){
					return ll+rr+1;
				}
				else{
					return ll+rr;
				}
			}
			else if(ptr->left==NULL && ptr->right!=NULL){
					if(ptr->data<ptr->right->data){
						return rr+1;
					}
					else{
						return rr;
					}
				}
			else if(ptr->left!=NULL && ptr->right==NULL){
					if(ptr->data>ptr->left->data){
						return ll+1;
					}
					else{
						return ll;
					}
				}
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
	t.display(ptr);
	node *qtr=NULL;
	cout<<t.check(ptr);
	return 0;
}
