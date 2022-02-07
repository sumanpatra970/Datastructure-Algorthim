#include<iostream>
#include<vector>
using namespace std;
class node{
	public:
		node *left;
		node *right;
		int data;
};
class tree{
	public:
		int a[11];
		int n=1;
		vector<int> v;
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
			cout<<ptr->data;
			v.push_back(ptr->data);
			display(ptr->right);
			return ;
		}
	void iinsert(int val){
		if(n==1)
		{
			a[n]=val;
			n++;
		}
		else
		{
			a[n]=val;
			int temp=val;
			int i=n;
			int j=n;
			while(i>1)
			{
				i=i/2;
				if(a[i]<=temp)
				{
					int flag;
					flag=a[i];
					a[i]=a[j];
					a[j]=flag;
					j=i;
				}
				else
				{
					break;
				}	
			}
			n++;
		}
	}
	void ddisplay(){
		for(int j=1;j<11;j++)
		{
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
};
int main(){
	tree t;
	node *ptr=new node;
	ptr->data=1;
	ptr->left=NULL;
	ptr->right=NULL;
	int a[5]={2,3,4,6,7};
	int b[4]={1,9,10,11};
	int m=5;
	int n=4;
	int i=0;
	int j=0;
	int k=0;
	int s[m+n];
	while(i!=m && j!=n){
		if(a[i]<b[j]){
			s[k]=a[i];
			k++;
			i++;
		}
		else{
			s[k]=b[j];
			k++;
			j++;
		}
	}
	for(int ii=i;ii<m;ii++){
		s[k]=a[i];
		k++;
	}
	for(int jj=j;jj<n;jj++){
		s[k]=b[jj];
		k++;
	}
	for(int iik=1;iik<m+n;iik++){
		t.insert(ptr,s[iik]);
	}
	t.display(ptr);
	vector<int>::iterator itr;
	for(itr=t.v.begin();itr!=t.v.end();itr++){
		t.iinsert(*itr);
	}
	cout<<endl;
	t.ddisplay();
	return 0;
}
