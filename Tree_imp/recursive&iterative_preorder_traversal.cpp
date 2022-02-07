#include<iostream>
#include<stack>
using namespace std;
int x=0;
class node{
	public:
		int data;
		node *left;
		node *right;
};
class tree{
	public:
		void preorder(node *p){
			if(p==NULL){
				return ;
			}
			cout<<p->data;
			preorder(p->left);
			preorder(p->right);
		}
		void preorder_itr(node *p){
			stack<node*> st;
			st.push(p);
			while(!st.empty()){
				node *t=st.top();
				st.pop();
				cout<<t->data;
				if(t->left!=NULL){
					st.push(t->left);
				}
				if(t->right!=NULL){
					st.push(t->right);
				}
			}
		}
		void insert(node *root,int i,int *data){
			node *p=root;
			node *q=NULL;
			int cc;
			while(p!=NULL){
				int c;
				c=data[x];
				x++;
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
	};
int main(){
	node *ptr;
	ptr=new node;
	ptr->data=2;
	ptr->left=NULL;
	ptr->right=NULL;
	tree t;
	int a[5]={2,4,5,6,7};
	int data[10]={0,1,0,0,0,1};
	for(int i=1;i<5;i++){
		t.insert(ptr,a[i],data);
	}
	t.preorder(ptr);
	cout<<endl;
	t.preorder_itr(ptr);
	return 0;
}
