#include<iostream>
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
		int display(node *ptr,int a,int b){
			static int c;
			if(ptr->data==a || ptr->data==b){
				return ptr->data;
			}
			if(ptr==NULL){
				return 0;
			}
			if(a<ptr->data && b<ptr->data){
				c=display(ptr->left,a,b);	
			}
			else if(a>ptr->data && b>ptr->data){
				c=display(ptr->right,a,b);
			}
			else{
				return ptr->data;
			}
			return c;
		}
};
int main(){
	tree t;
	node *ptr=new node;
	ptr->data=12;
	ptr->left=NULL;
	ptr->right=NULL;
	int a[5]={12,10,13,6,11};
	for(int i=1;i<5;i++){
		t.insert(ptr,a[i]);
	}
	cout<<"end"<<endl;
	cout<<t.display(ptr,6,11);
	return 0;
}
