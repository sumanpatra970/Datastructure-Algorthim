#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int cc=0;
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
		vector<int> findpath(node *ptr,int oliver,vector<int> v){
			if(ptr==NULL){
				return v;
			}
			if(ptr->data==oliver){
				v.push_back(ptr->data);
				cc=1;
				return v;
			}
			if(cc==0){
				v.push_back(ptr->data);
				v=findpath(ptr->left,oliver,v);
				if(v.front()!=oliver){
					v.pop_back();
				}
			}
			if(cc==0){
				v.push_back(ptr->data);
				v=findpath(ptr->right,oliver,v);
				if(v.front()!=oliver){
					v.pop_back();
				}
			}
			return v;
		}
		vector<int> traverse(node *ptr,vector<int> v){
			if(ptr==NULL){
				return v;
			}
			v.push_back(ptr->data);
			v=traverse(ptr->left,v);
			v=traverse(ptr->right,v);
			return v;
		}
		node * address(node *ptr,int oliver){
			if(ptr==NULL){
				node *n=new node;
				n=NULL;
				return n;
			}
			if(ptr->data==oliver){
				return ptr;
			}
			node *l=address(ptr->left,oliver);
			node *h=address(ptr->right,oliver);
			if(l!=NULL){
				return l;
			}
			if(h!=NULL){
				return h;
			}
		}
		bool solve(node *ptr,int oliver,int bob,int k){
			vector<int> v;
			if(k==0){
				v=findpath(ptr,oliver,v);
				vector<int>::iterator itr;
				for(itr=v.begin();itr!=v.end();itr++){
					if(*itr==bob){
						return true;
					}
				}
				return false;
			}
			else{
				node *qtr=address(ptr,oliver);
				v=traverse(qtr,v);
				vector<int>::iterator itr;
				for(itr=v.begin();itr!=v.end();itr++){
					if(*itr==bob){
						return true;
					}
				}
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
	int k=1;
	cout<<t.solve(ptr,2,4,k);
	return 0;
}
