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
				cout<<"enter ";
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
		int sumcheck(node *ptr,node *qtr){
			if(ptr->left==NULL && ptr->right==NULL){
				if(qtr->data==0){
					cout<<"true"<<endl;
				}
				else{
					cout<<"false"<<endl;
				}
				return ptr->data;
			}
			int m=sumcheck(ptr->left,qtr->left);
			int n=sumcheck(ptr->right,qtr->right);
			if(m+n==qtr->data)
			{
				cout<<"true"<<endl;
			}
			else{
				cout<<"false"<<endl;
			}
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
	int a[5]={2,4,5,6,7};
	for(int i=1;i<5;i++){
		t.insert(ptr,a[i]);
	}
	t.display(ptr);
	node *qtr;
	qtr=new node;
	qtr->data=19;
	qtr->left=NULL;
	qtr->right=NULL;
	int b[5]={19,13,0,0,0};
	for(int j=1;j<5;j++){
		t.insert(qtr,b[j]);
	}
	t.display(qtr);
	cout<<endl;
	t.sumcheck(ptr,qtr);
	return 0;
}
