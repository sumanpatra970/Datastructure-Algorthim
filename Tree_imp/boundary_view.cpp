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
		void leftboundary(node *ptr){
			if(ptr==NULL || ptr->left==NULL || ptr->right==NULL){
				return ;
			}
			cout<<ptr->data<<" ";
			leftboundary(ptr->left);
			return ;
		}
		void leaf(node *ptr,node *q){
			if(ptr->left==NULL && ptr->right==NULL){
				cout<<ptr->data<<" ";
				return ;
			}
			q=ptr;
			leaf(ptr->left,q);
			leaf(ptr->right,q);
		}
		void rightboundary(node *ptr,node *root){
			if(ptr==NULL || ptr->left==NULL || ptr->right==NULL){
				return ;
			}
			rightboundary(ptr->right,root);
			if(ptr!=root){
				cout<<ptr->data<<" ";
			}
			return ;
		}
		void boundaryview(node *ptr){
			leftboundary(ptr);
			cout<<endl;
			leaf(ptr,NULL);
			cout<<endl;
			rightboundary(ptr,ptr);
			return ;
		}
};
int main(){
	node *ptr;
	ptr=new node;
	ptr->data=2;
	ptr->left=NULL;
	ptr->right=NULL;
	tree t;
	int a[7]={2,4,5,6,7,8,9};
	for(int i=1;i<7;i++){
		t.insert(ptr,a[i]);
	}
	t.display(ptr);
	queue<node*> q;
	q.push(ptr);
	cout<<endl;
	node  *v[5];
	//t.levelorder(ptr,q,v);
	t.boundaryview(ptr);
	return 0;
}
