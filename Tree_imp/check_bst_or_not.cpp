#include<iostream>
#include<vector>
int x=0;
using namespace std;
class node{
	public:
		node *left;
		node *right;
		int data;
};
class tree{
	public:
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
	int data[10]={0,1,0,0,0,1};
	for(int i=1;i<5;i++){
		t.insert(ptr,a[i],data);
	}
	cout<<"end"<<endl;
	vector<int> v;
	int l=2;
	int h=6;
	v=t.display(ptr,v);
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++){
		if(*it>++*it){
			cout<<"not a bst ";
		}
	}
	if(it==v.end()){
		cout<<"bst ";
	}
	return 0;
}
