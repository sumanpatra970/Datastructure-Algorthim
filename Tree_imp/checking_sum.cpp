#include<iostream>
#include<vector>
#include<map>
int v[8]={0,0,0,0,0,0,0,1};
using namespace std;
vector<string> v1;
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
			cout<<p->data;
			display(p->right);
			return ;
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
		void check(node *ptr,int sum,int k){
			cout<<ptr->data<<" "<<sum<<endl;
			if(sum==k){
				cout<<"true set";
				return ;
			}
			if(ptr->left==NULL && ptr->right==NULL){
				return ;
			}
			if(ptr==NULL){
				return ;
			}
			if(ptr->left!=NULL){
				check(ptr->left,sum+ptr->left->data,k);
			}
			if(ptr->right!=NULL){
				check(ptr->right,sum+ptr->right->data,k);
			}
			return ;
		}
		void solve(node *ptr,int k){
			if(ptr==NULL){
				return ;
			}
			check(ptr,ptr->data,k);
			solve(ptr->left,k);
			solve(ptr->right,k);
			return ;
		}
};
int main(){
	node *ptr;
	ptr=new node;
	ptr->data=1;
	ptr->left=NULL;
	ptr->right=NULL;
	tree t;
	int a[8]={1,2,3,4,5,1,7,3};
	for(int i=1;i<8;i++){
		t.insert(ptr,a[i]);
	}
	t.display(ptr);
	cout<<endl;
	int k=8;
	t.solve(ptr,k);
	cout<<endl;
	return 0;
}
