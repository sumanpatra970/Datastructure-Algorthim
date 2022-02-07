#include<iostream>
#include<vector>
#include<map>
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
		void display(node *p,vector<int> k,int l){
			if(p==NULL){
				return ;
			}
			display(p->left,k,l+1);
			k.push_back(p->data);
			cout<<p->data;
			display(p->right,k,l+1);
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
		bool checkmirror(vector<int> c,vector<int> d){
			bool t=true;
			for(int i=0;i<5/2+1;i++){
				if(c[i]!=d[5-1-i]){
					t=false;
				}
			}
			return t;
		}
		string solve(node *ptr){
			if(ptr==NULL){
				string st="";
				return st;
			}
			if(ptr->left==NULL && ptr->right==NULL){
				string stp;
				stp=ptr->data+'0';
				return stp;
			}
			string stl,str;
			stl=solve(ptr->left);
			//stl=v1.pop_back();
			str=solve(ptr->right);
			//str=v2.pop_back();
			string st,sto;
			sto=ptr->data+'0';
			st=sto+stl+str;
			v1.push_back(st);
			return st;
		}
};
int main(){
	node *ptr;
	ptr=new node;
	ptr->data=1;
	ptr->left=NULL;
	ptr->right=NULL;
	tree t;
	vector<int> c;
	int a[8]={1,2,3,4,5,2,4,5};
	for(int i=1;i<8;i++){
		t.insert(ptr,a[i]);
	}
	t.display(ptr,c,0);
	t.solve(ptr);
	cout<<endl;
	vector<string>::iterator it;
	for(it=v1.begin();it!=v1.end();it++){
		cout<<*it<<" ";
	}
	return 0;
}
