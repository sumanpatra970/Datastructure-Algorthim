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
		void preorder(node *ptr){
			if(ptr==NULL){
				return ;
			}
			cout<<ptr->data;
			preorder(ptr->left);
			preorder(ptr->right);
			return ;
		}
		int height(node *ptr){
			if(ptr==NULL){
				return 0;
			}
			int h;
			int hr,hl;
			hl=height(ptr->left);
			hr=height(ptr->right);
			if(hl>hr){
				h=(hl-hr)+1;	
			}
			else{
				h=h=(hr-hl)+1;
			}
			//cout<<"ptr "<<ptr->data<<" hl "<<hl<<" hr "<<hr<<" h "<<h<<endl;
			return h;
		}
		void balance(node *ptr,node *qtr){
			if(ptr->data==4){
				return ;
			}
			else{
				if(qtr->left->data==ptr->data){
					qtr->left=ptr->left;
					ptr->left->right=ptr;
					ptr->left=NULL;
				}
			}
		}
		void solve(node *ptr,node *qtr){
			if(ptr==NULL){
				return;
			}
			cout<<height(ptr)<<endl;
			if(height(ptr)>2){
				balance(ptr,qtr);
				cout<<"balanced"<<endl;
				cout<<qtr->left->data;
				cout<<endl;
			}
			else{
				solve(ptr->left,ptr);
				solve(ptr->right,ptr);
			}
			return ;
		}
		void heightcalculator(node *ptr){
			if(ptr==NULL){
				return ;
			}
			cout<<ptr->data<<" "<<height(ptr)-1;
			heightcalculator(ptr->left);
			heightcalculator(ptr->right);
			return ;
		}
};
int main(){
	tree t;
	node *ptr=new node;
	ptr->data=4;
	ptr->left=NULL;
	ptr->right=NULL;
	int a[6]={4,3,2,6,7,1};
	for(int i=1;i<6;i++){
		t.insert(ptr,a[i]);
	}
	cout<<"end"<<endl;
	t.display(ptr);
	cout<<endl;
	t.solve(ptr,NULL);
	//t.preorder(ptr);
	cout<<endl;
	//t.heightcalculator(ptr);
	return 0;
}
