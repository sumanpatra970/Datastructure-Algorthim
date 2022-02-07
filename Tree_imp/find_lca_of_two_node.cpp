#include<iostream>
#include<vector>
int c=0;
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
		vector<int> check(int b,node *ptr,vector<int> v1){
			vector<int> :: iterator it;
			for(it=v1.begin();it!=v1.end();it++){
				cout<<ptr->data<<" "<<*it<<" ";
			}
			cout<<endl;
			if(ptr==NULL){
				return v1;
			}
			if(ptr->data==b){
				c=1;
				return v1;
			}
			if(ptr->left==NULL && ptr->right==NULL){
				return v1;
			}
			if(c==0 && ptr->left!=NULL){
				v1.push_back(ptr->left->data);
				v1=check(b,ptr->left,v1);
				if(c==0){
					v1.pop_back();
				}
			}
			if(c==0 && ptr->right!=NULL){
				v1.push_back(ptr->right->data);
				v1=check(b,ptr->right,v1);
				if(c==0){
					v1.pop_back();	
				}
			}
			return v1;	
		}
		int findcommon(vector<int> v1,vector<int> v2){
			vector<int>::iterator it1,it2;
			int cc=0;
			for(it1=v1.begin(),it2=v2.begin();it1!=v1.end() && it2!=v2.end();it1++,it2++){
				if(*it1==*it2){
					cc++;
				}
				else{
					break;
				}
			}
			return cc-1;
		}
};
int main(){
	node *ptr;
	ptr=new node;
	ptr->data=1;
	ptr->left=NULL;
	ptr->right=NULL;
	tree t;
	int a[8]={1,2,3,4,5,1,7,6};
	for(int i=1;i<8;i++){
		t.insert(ptr,a[i]);
	}
	t.display(ptr);
	cout<<endl;
	int max1=-1;
	int max2=-1;
	vector<int> v1;
	vector<int> v2;
	v1.push_back(1);
	v1=t.check(5,ptr,v1);
	cout<<"st"<<endl;
	vector<int> :: iterator it1;
	for(it1=v1.begin();it1!=v1.end();it1++){
		cout<<*it1<<" ";
		max1++;
	}
		c=0;
	cout<<endl;
	v2.push_back(1);
	v2=t.check(6,ptr,v2);
	vector<int> :: iterator it2;
	for(it2=v2.begin();it2!=v2.end();it2++){
		cout<<*it2<<" ";
		max2++;
	}
	int idx=t.findcommon(v1,v2);
	cout<<endl;
	cout<<"max1 "<<max1<<" max2 "<<max2<<" idx "<<idx<<endl;
	cout<<max1-idx+max2-idx;
	return 0;
}
