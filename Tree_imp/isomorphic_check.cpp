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
		bool solve(node *ptr,node *qtr){
			if(ptr==NULL){
				return true;
			}
			bool c=solve(ptr->left,qtr->left);
			bool d=solve(ptr->right,qtr->right);
			if(c==true && d==true){
				if(ptr->left!=NULL && ptr->right!=NULL)
				{
					if(ptr->left->data==qtr->left->data && ptr->right->data==qtr->right->data || ptr->left->data==qtr->right->data && ptr->right->data==qtr->left->data){
						return true;
					}
					else{
						return false;
					}
				}
				else{
					return true;
				}
			}
			else{
				return false;
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
	int a[5]={2,4,5,6,7};
	int data[10]={0,1,0,0,0,1};
	for(int i=1;i<5;i++){
		t.insert(ptr,a[i],data);
	}
	t.display(ptr);
	cout<<endl;
	node *qtr;
	qtr=new node;
	qtr->data=2;
	qtr->left=NULL;
	qtr->right=NULL;
	int b[5]={2,4,5,8,6};
	x=0;
	for(int j=1;j<5;j++){
		t.insert(qtr,b[j],data);
	}
	t.display(qtr);
	cout<<endl;
	cout<<t.solve(ptr,qtr);
	return 0;
}
