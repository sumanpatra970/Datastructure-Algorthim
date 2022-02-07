#include<iostream>
#include<vector>
using namespace std;
class node{
	public:
		int data;
		node *left;
		node *right;
};
class tree{
	public:
		vector<int> display(node *p,vector<int> k,int l){
			if(p==NULL){
				return k;
			}
			k=display(p->left,k,l+1);
			k.push_back(p->data);
			cout<<p->data;
			k=display(p->right,k,l+1);
			return k;
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
		bool checkmirror(vector<int> c,vector<int> d){
			bool t=true;
			for(int i=0;i<5/2+1;i++){
				if(c[i]!=d[5-1-i]){
					t=false;
				}
			}
			return t;
		}
	node * solve(node *qtr,vector<int> c,int l){
		node *s=new node;
		while(!c.empty()){
			int x;
			x=c.back();
			c.pop_back();
			if(qtr==NULL){
				node *p=new node;
				p->data=x;
				p->left=NULL;
				p->right=NULL;
				qtr=p;
				s=p;
			}
			else{
				node *p=new node;
				p->data=x;
				p->left=qtr;
				p->right=NULL;
				qtr->right=p;
				qtr=p;
			}
		}
		return s;
	}
	void displayll(node *qtr){
		if(qtr==NULL){
			return ;
		}
		displayll(qtr->right);
		cout<<qtr->data;
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
	vector<int> c;
	vector<int> d;
	int a[5]={2,4,5,6,7};
	for(int i=1;i<5;i++){
		t.insert(ptr,a[i]);
	}
	c=t.display(ptr,c,0);
	node *qtr=NULL;
	qtr=t.solve(qtr,c,0);
	t.displayll(qtr);
	return 0;
}
