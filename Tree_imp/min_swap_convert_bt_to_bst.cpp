#include<iostream>
#include<map>
#include<set>
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
		int findswap(int *b){
			int swap=0;
			for(int j=0;j<5;j++){
				int minn=b[j];
				int pp=minn;
				int l=0;
				for(int i=j+1;i<5;i++){
					if(b[i]<minn){
						minn=b[i];
						l=i;
					}
				}
				if(minn!=pp){
					b[j]=minn;
					b[l]=pp;
					swap++;	
				}		
			}
			return swap;
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
	cout<<endl;
	int b[5]={6,4,7,2,5};
	cout<<t.findswap(b)<<endl;
	for(int k=0;k<5;k++){
		cout<<b[k]<<" ";
	}
	return 0;
}
