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
		void inorder(node *p){
			if(p==NULL){
				return ;
			}
			inorder(p->left);
			cout<<p->data;
			inorder(p->right);
		}
		void inorder_itr(node *p){
			stack<node*> st;
			st.push(p);
			node *current=p;
			while(!st.empty()){
				if(current!=NULL){
					if(current->left!=NULL){
						st.push(current->left);
					}
					current=current->left;
				}
				else{
					node *r=st.top();
					st.pop();
					cout<<r->data;
					if(r->right!=NULL){
						st.push(r->right);
					}
					current=r->right;
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
	t.inorder(ptr);
	cout<<endl;
	t.inorder_itr(ptr);
	return 0;
}
