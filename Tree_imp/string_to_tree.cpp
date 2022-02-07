#include<iostream>
using namespace std;
int l=1;
class node{
	public:
		int data;
		node *left;
		node *right;
};
void display(node *p){
			if(p==NULL){
				return ;
			}
			display(p->left);
			cout<<p->data<<" ";
			display(p->right);
			return ;
		}
void generatetree(string s,node *p){
	cout<<l<<" ";
	if(s[l]==')'){
		return ;
	}
	else if(s[l]=='('){
		if(p->left==NULL){
			node *p1=new node;
			p1->data=s[l+1]-'0';
			p1->left=NULL;
			p1->right=NULL;
			p->left=p1;
			cout<<"left "<<p1->data<<" ";
			p=p->left);
		}
		else(p->right==NULL){
			node *p2=new node;
			p2->data=s[l+1]-'0';
			p2->left=NULL;
			p2->right=NULL;
			p->right=p2;
			cout<<"right "<<p2->data<<" ";
			generatetree(s,p->right);
		}
		return;
	}
}
int main(){
	string s;
	s="4(2(3)(5))(7))";
	node *p=new node;
	p->data=4;
	p->left=NULL;
	p->right=NULL;
	generatetree(s,p);
	cout<<endl;
	display(p);
	return 0;
}
