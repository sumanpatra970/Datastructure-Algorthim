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
		int check(int x,string in){
			for(int i=0;i<in.length();i++){
				if(in[i]==x){
					return i;
				}
			}
		}
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
		node * solve(node *p,string pre,string in,int m,node* root,int cc){
			if(in.length()==0){
				return root;
			}
			if(p==NULL){
				node *t=new node;
				char ch=pre[0];
				int cc=ch-'0';
				t->data=cc;
				t->left=NULL;
				t->right=NULL;
				root=t;
				cout<<"in "<<in<<endl;
				int xx=check(ch,in);
				cout<<xx<<endl;
				string l=in.substr(0,xx);
				string r=in.substr(xx+1,in.length());
				pre=pre.substr(1,pre.length());
				cout<<"l "<<l<<" r "<<r<<endl;
				root=solve(t,pre,l,0,root,cc);
				root=solve(t,pre,r,1,root,cc);
			}
			else{
				node *tt=new node;
				char ch=pre[0];
				int cc=ch-'0';
				cout<<" cc "<<cc<<endl;
				tt->data=cc;
				tt->left=NULL;
				tt->right=NULL;
				cout<<"in "<<in<<endl;
				int xx=check(ch,in);
				cout<<xx<<endl;
				string l=in.substr(0,xx);
				string r=in.substr(xx+1,in.length());
				cout<<"l "<<l<<" r "<<r<<endl;
				if(m==0){
					p->left=tt;
				}
				else{
					p->right=tt;
				}
				pre=pre.substr(1,pre.length());
				root=solve(tt,pre,l,0,root,cc);
				root=solve(tt,pre,r,1,root,cc);
			}
			return root;
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
	node *p=new node;
	p=NULL;
	node *root;
	string pre="24567";
	string in="64725";
	int m=0;
	root=t.solve(p,pre,in,m,root,0);
	cout<<endl;
	t.display(root);
	return 0;
}
