#include<iostream>
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
		int height(node *ptr){
			if(ptr==NULL){
				return 0;
			}
			int p=height(ptr->left);
			int q=height(ptr->right);
			return max(p,q)+1;
		}
		void balancecheck(node *ptr){
			if(ptr==NULL){
				return ;
			}
			int l=height(ptr->left);
			int h=height(ptr->right);
			int bf;
			if(l>h){
				bf=l-h;
			}
			else{
				bf=h-l;
			}
			if(bf>1){
				cout<<"not balanced";
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
	cout<<endl;
	t.balancecheck(ptr);
	return 0;
}
