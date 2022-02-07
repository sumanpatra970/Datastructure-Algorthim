#include<iostream>
#include<vector>
using namespace std;
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
		vector<int> display(node *ptr,vector<int> v){
			if(ptr==NULL){
				return v;
			}
			v=display(ptr->left,v);
			v.push_back(ptr->data);
			v=display(ptr->right,v);
			return v;
		}
};
int main(){
	tree t;
	node *ptr=new node;
	ptr->data=4;
	ptr->left=NULL;
	ptr->right=NULL;
	int a[5]={4,2,3,6,7};
	for(int i=1;i<5;i++){
		t.insert(ptr,a[i]);
	}
	vector<int> v;
	int l=2;
	int h=6;
	v=t.display(ptr,v);
	vector<int>::iterator it;
	int c=0;
	int n=5;
	int k=2;
	for(it=v.begin();it!=v.end();it++){
		c++;
		if(c==n-k+1){
			cout<<*it;
		}
	}
	return 0;
}
