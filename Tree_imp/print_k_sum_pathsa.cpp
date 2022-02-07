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
		void display(node *p,int s,int k,vector<int> v){
			if(s==k){
				vector<int>::iterator it;
				for(it=v.begin();it!=v.end();it++){
					cout<<*it;
				}
				cout<<endl;
				cout<<"got it";
				return ;
			}
			if(p==NULL){
				return ;
			}
			if(p->left!=NULL){
				v.push_back(p->left->data);
				display(p->left,s+p->left->data,k,v);
				v.pop_back();
			}
			if(p->right!=NULL){
				v.push_back(p->right->data);
				display(p->right,s+p->right->data,k,v);
				v.pop_back();
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
	int a[5]={2,4,10,6,7};
	int data[10]={0,1,0,0,0,1};
	for(int i=1;i<5;i++){
		t.insert(ptr,a[i],data);
	}
	vector<int> v;
	v.push_back(2);
	t.display(ptr,2,12,v);
	return 0;
}
