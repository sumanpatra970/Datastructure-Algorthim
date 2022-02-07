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
		int sumcheck(node *ptr){
			cout<<ptr->data<<endl;
			if(ptr->left==NULL && ptr->right==NULL){
				int nn=ptr->data;
				ptr->data=0;
				return nn;
			}
			int s;
			s=ptr->data;
			int m=0;
			int n=0;
			if(ptr->left!=NULL){
				ptr->left->data;
				m=sumcheck(ptr->left);
			}
			if(ptr->right!=NULL){
				ptr->right->data;
				n=sumcheck(ptr->right);
			}	
			ptr->data=m+n;
			cout<<"val "<<ptr->data<<endl;
			return m+n;
		}
};
int main(){
	node *ptr;
	ptr=new node;
	ptr->data=2;
	ptr->left=NULL;
	ptr->right=NULL;
	tree t;
	int a[5]={2,4,5,6,7};//010001
	for(int i=1;i<5;i++){
		t.insert(ptr,a[i]);
	}
	t.display(ptr);
	cout<<endl;
	cout<<t.sumcheck(ptr)<<endl;
	t.display(ptr);
}
