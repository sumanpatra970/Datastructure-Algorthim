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
		void levelorder(node *ptr,queue<node*> q,node* v[5]){
			int l=1;
			while(!q.empty()){
				node *p=q.front();
				q.pop();
				p1->right=NULL;
				v[l]=p1;
				cout<<p->data<<" ";
				if(p->left!=NULL){
					node *p1=new node;
					p1->data=p->left->data;
					p1->right=0;
					q.push(p->left);
				}
				if(p->right!=NULL){
					node *p2=new node;
					p2->data=p->right->data;
					p2->right=0;
					p1->right=p2;
					q.push(p->right);
				}
			}
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
	int a[5]={2,4,5,6,7};
	for(int i=1;i<5;i++){
		t.insert(ptr,a[i]);
	}
	t.display(ptr);
	queue<node*> q;
	q.push(ptr);
	cout<<endl;
	node  *v[5];
	t.levelorder(ptr,q,v);
	return 0;
}
