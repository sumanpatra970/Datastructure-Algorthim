#include<iostream>
#include<vector>
#include<map>
int v[8]={0,0,0,0,0,0,0,1};
using namespace std;
vector<string> v1;
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
			return ;
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
		bool adjcent(int a,int b,node *qtr,node *ptr){
			if(ptr==NULL){
				return false;
			}
			if(ptr->data==b){
				if(qtr!=NULL && qtr->data==a){
					return true;
				}
				else if(ptr->left!=NULL && ptr->left->data==a){
					return true;
				}
				else if(ptr->right!=NULL && ptr->right->data==a){
					return true;
				}
				else{
					return false;
				}
			}
			bool dd=adjcent(a,b,ptr,ptr->left);
			bool d=adjcent(a,b,ptr,ptr->right);
			if(dd==false && d==false){
				return false;
			}
			else{
				return true;
			}
		}
		void check(int b,node *ptr){
			cout<<b<<" ";
				int f=0;
				int c=0;
			for(int i=0;i<8;i++){
				cout<<i<<" ";
				cout<<v[i];
				cout<<" "<<adjcent(b,i,NULL,ptr)<<" next ";
				if(v[i]==1){
					f++;
				}
				if(v[i]==1 && adjcent(b,i,NULL,ptr)==false){
					c++;
				}
			}
			if(f==c){
					cout<<" final b "<<b;
					v[b]=1;
			}
			return ;
		}
};
int main(){
	node *ptr;
	ptr=new node;
	ptr->data=1;
	ptr->left=NULL;
	ptr->right=NULL;
	tree t;
	int a[8]={1,2,3,4,5,1,7,6};
	for(int i=1;i<8;i++){
		t.insert(ptr,a[i]);
	}
	t.display(ptr);
	cout<<endl;
	int b[8]={7,6,5,4,3,2,1,1};
	for(int j=1;j<8;j++){
		t.check(b[j],ptr);
		cout<<endl;	
	}
	cout<<endl;
	for(int k=0;k<8;k++){
		cout<<v[k];
	}
	cout<<endl;
	return 0;
}
