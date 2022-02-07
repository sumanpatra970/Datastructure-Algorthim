#include<iostream>
using namespace std;
class node{
	public:
		char data;
		node *left;
		node *right;
};
class tree{
	public:
		void display(node *p){
			if(p==NULL){
				return ;
			}
			cout<<p->data;
			display(p->left);
			display(p->right);
		}
		int search(char in[],int l,int h,char data){
			for(int i=l;i<=h;i++){
				if(in[i]==data){
					return i;
				}
			}
		}
	node* buildtree(char in[],char pre[],int l,int h){
		static int preindex=0;
		if(l>h){
			return NULL;
		}
		node *tnode=new node;
		tnode->data=pre[preindex];
		preindex++;
		tnode->left=NULL;
		tnode->right=NULL;
		if(l==h){
			return tnode;
		}
		int index=search(in,l,h,tnode->data);
		tnode->left=buildtree(in,pre,l,index-1);
		tnode->right=buildtree(in,pre,index+1,h);
		return tnode;
	}
};
int main(){
	char in[]={'D','B','E','A','F','C'};
	char pre[]={'A','B','D','E','C','F'};
	int len=sizeof(in)/sizeof(in[0]);
	tree t;
	node *root=t.buildtree(in,pre,0,len-1);
	cout<<"preorder traversal ";
	t.display(root);
}
