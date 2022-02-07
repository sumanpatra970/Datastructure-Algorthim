#include<iostream>
#include<vector>
int c=0;
int flag=0;
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
			cout<<p->data;
			display(p->right);
			return ;
		}
		void insert(node *root,int i,int *b){
			node *p=root;
			node *q=NULL;
			int cc;
			while(p!=NULL){
				int c;
				c=b[flag];
				flag++;
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
		vector<int> check(int b,node *ptr,vector<int> v1){
			vector<int> :: iterator it;
			for(it=v1.begin();it!=v1.end();it++){
				cout<<ptr->data<<" "<<*it<<" ";
			}
			cout<<endl;
			if(ptr==NULL){
				return v1;
			}
			if(ptr->data==b){
				c=1;
				return v1;
			}
			if(ptr->left==NULL && ptr->right==NULL){
				return v1;
			}
			if(c==0 && ptr->left!=NULL){
				v1.push_back(ptr->left->data);
				v1=check(b,ptr->left,v1);
				if(c==0){
					v1.pop_back();
				}
			}
			if(c==0 && ptr->right!=NULL){
				v1.push_back(ptr->right->data);
				v1=check(b,ptr->right,v1);
				if(c==0){
					v1.pop_back();	
				}
			}
			return v1;	
		}
		
};
int main(){
	node *ptr;
	ptr=new node;
	ptr->data=2;
	ptr->left=NULL;
	ptr->right=NULL;
	tree t;
	int a[8]={2,4,5,6,7};
	int b[]={0,1,0,0,0,1};
	for(int i=1;i<5;i++){
		t.insert(ptr,a[i],b);
	}
	t.display(ptr);
	cout<<endl;
	vector<int> v;
	v.push_back(2);
	v=t.check(6,ptr,v);
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++){
		cout<<*it;
	}
	return 0;
}
