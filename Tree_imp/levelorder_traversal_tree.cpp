#include<iostream>
#include<queue>
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
		void levelorder(queue<node*> q){
			while(q.size()!=0){
			node *p;
			p=q.front();
			q.pop();
			cout<<p->data;
			if(p->left!=NULL){
				q.push(p->left);
			}
			if(p->right!=NULL){
				q.push(p->right);
			}
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
	int a[5]={2,4,5,6,7};
	int data[10]={0,1,0,0,0,1};
	for(int i=1;i<5;i++){
		t.insert(ptr,a[i],data);
	}
	t.display(ptr);
	cout<<endl;
	t.levelorder(q);
	return 0;
}
