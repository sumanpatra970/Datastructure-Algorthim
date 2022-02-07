#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
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
		void display(node *ptr){
			if(ptr==NULL){
				return ;
			}
			display(ptr->left);
			v.push_back(ptr->data);
			cout<<ptr->data;
			display(ptr->right);
			return ;
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
	cout<<"end"<<endl;
	t.display(ptr);
	cout<<endl;
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++){
		cout<<*it;
	}
	cout<<endl;
	int n=2;
	for(it=v.begin();it!=v.end();it++){
		if(*it==n){
			if(n>4){
				it--;
				cout<<"inorder successor "<<*it;
				break;
			}
			else{
				it++;
				cout<<"inorder successor "<<*it;
				break;
			}
		}
	}
	return 0;
}
