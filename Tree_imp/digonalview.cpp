#include<iostream>
#include<map>
#include<set>
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
		map<int,map<int,set<int> > > verticaltraversal(int* v,node *ptr,int l,int n,map<int,map<int,set<int> > > m){
			if(ptr==NULL){
				return m;
			}
			
			map<int,map<int,set<int> > > ::iterator itt;
			itt=m.find(l);
				cout<<itt->first<<" "<<l<<" "<<endl;
				int pp=itt->first;
				if(v[pp]==0){
					v[pp]=1;
				set<int> s;
				s.insert(ptr->data);
				map<int,set<int> > m1;
				m1.insert(pair<int,set<int> >(n,s));
				m.insert(pair<int,map<int,set<int> > >(l,m1));
		}
		else{
			map<int,set<int> >:: iterator it;
			map<int,set<int> > mv;
			mv=itt->second;
			set<int> ss;
			ss.insert(ptr->data);
			mv.insert(pair<int,set<int> >(n,ss));
			for(it=mv.begin();it!=mv.end();it++){
				cout<<it->first<<" no ";
			}
			itt->second=mv;
		}
			m=verticaltraversal(v,ptr->left,l-1,n+1,m);
			m=verticaltraversal(v,ptr->right,l+1,n+1,m);
			return m;
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
	for(int i=1;i<5;i++){
		t.insert(ptr,a[i]);
	}
	t.display(ptr);
	cout<<endl;
	map<int,map<int,set<int> > > m;
	int v[5]={0,0,0,0,0};
	node *p[5];
	for(int u=0;u<5;u++){
		p[u]=NULL;
	}
	m=t.verticaltraversal(v,ptr,0,0,m);
	map<int,map<int,set<int> > >::iterator itr;
	for(itr=m.begin();itr!=m.end();itr++){
		int y=itr->first;
		map<int,set<int> >m1;
		m1=itr->second;
		map<int,set<int> >:: iterator itr1;
		for(itr1=m1.begin();itr1!=m1.end();itr1++){
			int x = itr1->first;
			int r=x-y;
			cout<<" y "<<y<<" x "<<x<<" r "<<r;
			vector<int> v1;
			set<int> s1=itr1->second;
			set<int> :: iterator itr2;
			for(itr2=s1.begin();itr2!=s1.end();itr2++){
				node *p1;
				p1=p[r];
				if(p1==NULL){
					p1=new node;
					p1->data=*itr2;
					p1->left=NULL;
					p1->right=NULL;
					p[r]=p1;
				}
				else{
					node *p2=new node;
					p2->data=*itr2;
					p2->left=NULL;
					p2->right=NULL;
					p1->right=p2;
				}
			}
		}
		cout<<endl;
	}
	for(int k=0;k<5;k++){
		if(p[k]!=NULL){
			node *pp;
			pp=p[k];
			while(pp!=NULL){
				cout<<pp->data<<" ";
				pp=pp->right;
			}
		}
	}
	return 0;
}
