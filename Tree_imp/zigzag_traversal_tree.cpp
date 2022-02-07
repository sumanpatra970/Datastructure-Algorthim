#include<iostream>
#include<queue>
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
		void display(node *p){
			if(p==NULL){
				return ;
			}
			display(p->left);
			cout<<p->data;
			display(p->right);
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
		void levelorder(queue<node*> q,int level){
			stack<node*> st;
			while(level<4){
			while(q.size()!=0){
				cout<<"l "<<level<<endl;
			node *p;
			p=q.front();
			q.pop();
			cout<<p->data;
			if(level%2==0){
				if(p->left!=NULL){
					st.push(p->left);
				}
				if(p->right!=NULL){
					st.push(p->right);
				}
			}
			else{
				if(p->right!=NULL){
					st.push(p->right);
				}
				if(p->left!=NULL){
					st.push(p->left);
				}
			}
		}
			while(!st.empty()){
				q.push(st.top());
				st.pop();
			}
			level++;
			}
		}
	};
int main(){
	node *ptr;
	ptr=new node;
	ptr->data=2;
	ptr->left=NULL;
	ptr->right=NULL;
	tree t;
	queue<node*> q;
	q.push(ptr);
	int a[7]={2,4,5,6,7,8,9};
	int data[14]={0,1,0,0,0,1,1,0,1,1};
	for(int i=1;i<7;i++){
		t.insert(ptr,a[i],data);
	}
	t.display(ptr);
	cout<<endl;
	t.levelorder(q,1);
	return 0;
}
