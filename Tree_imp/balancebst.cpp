#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
class node{
	public:
		node *left;
		node *right;
		int data;
};
class tree{
	public:
		void insert(node *ptr,int a){
			node *qtr;
			while(ptr!=NULL){
				if(a<ptr->data){
					qtr=ptr;
					ptr=ptr->left;
				}
				else{
					qtr=ptr;
					ptr=ptr->right;
				}
			}
				node *temp=new node;
				temp->data=a;
				temp->left=NULL;
				temp->right=NULL;
				if(a<qtr->data){
					qtr->left=temp;
				}
				else{
					qtr->right=temp;
				}
			}
		void display(node *ptr){
			if(ptr==NULL){
				return ;
			}
			display(ptr->left);
			v.push_back(ptr->data);
			cout<<ptr->data;
			display(ptr->right);
			return ;
		}
		void preorder(node *ptr){
			if(ptr==NULL){
				return ;
			}
			cout<<ptr->data;
			preorder(ptr->left);
			preorder(ptr->right);
			return ;
		}
		node * solve(int l,int n,int b[6]){
			cout<<" l "<<l<<" n "<<n;
			if(l==n){
				node *t=new node;
				t->data=b[l];
				t->left=NULL;
				t->right=NULL;
				return t;
			}
			if(l>n){
				return NULL;
			}
			int m=(l+n)/2;
			node *ptl=solve(l,m-1,b);
			node *ptr=solve(m+1,n,b);
			node *temp=new node;
			temp->data=b[m];
			temp->left=ptl;
			temp->right=ptr;
			//cout<<temp->data<<" "<<temp->left->data<<" "<<temp->right->data<<endl;
			return temp;
		}
};
int main(){
	tree t;
	node *ptr=new node;
	ptr->data=4;
	ptr->left=NULL;
	ptr->right=NULL;
	int a[6]={4,3,2,6,7,1};
	for(int i=1;i<6;i++){
		t.insert(ptr,a[i]);
	}
	cout<<"end"<<endl;
	t.display(ptr);
	cout<<endl;
	int b[6];
	int k;
	vector<int> :: iterator it;
	for(it=v.begin(),k=0;it!=v.end() && k<6;it++,k++){
		b[k]=*it;
	}
	for(int j=0;j<6;j++){
		cout<<b[j];
	}
	node *qtr=t.solve(0,5,b);
	cout<<endl;
	t.preorder(qtr);
	cout<<endl;
	return 0;
}
