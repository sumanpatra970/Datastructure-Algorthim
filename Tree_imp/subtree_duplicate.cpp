#include<iostream>
#include<vector>
#include<map>
int c=0;
std::map<std::string,int> m;
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
		string solve(node *ptr){
			if(ptr->left==NULL && ptr->right==NULL){
				string stt;
				stt=ptr->data+'0';
				if(m.find(stt)==m.end()){
					m.insert(pair<string,int>(stt,1));					
				}
				else{
					map<string,int>::iterator it;
					it=m.find(stt);
					it->second++;
				}
				return stt;
			}
			string stl;
			if(ptr->left!=NULL){
				stl=solve(ptr->left);
			}
			string str;
			if(ptr->right!=NULL){
				str=solve(ptr->right);
			}
			string stm,st;
			stm=ptr->data+'0';
			st=stm+stl+str;
			if(m.find(st)==m.end()){
					m.insert(pair<string,int>(st,1));					
				}
			else{
					map<string,int>::iterator it;
					it=m.find(st);
					it->second++;
				}
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
	int a[8]={1,2,3,4,5,2,4,5};
	for(int i=1;i<8;i++){
		t.insert(ptr,a[i]);
	}
	t.display(ptr);
	t.solve(ptr);
	cout<<"end";
	map<string,int> ::iterator it;
	for(it=m.begin();it!=m.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
}
