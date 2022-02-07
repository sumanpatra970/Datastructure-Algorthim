//program to insert element in desired pos in doubly ll
#include<iostream>
#include<map>
using namespace std;
class node{
	public:
	node *prev;
	node *next;
	int data;
};
void display(node *p){
	while(p!=NULL){
		cout<<p->data;
		p=p->next;
	}
}
int main(){
	int a[5]={2,3,5,6,7};
	int n=5;
	node *first;
	first=new node;
	first->data=9;
	first->next=NULL;
	first->prev=NULL;
	node *temp;
	node *ptemp;
	temp=first;
	ptemp=NULL;
	for(int i=0;i<5;i++)
	{
		node *y=new node;
		temp->next=y;
		y->next=NULL;
		y->data=a[i];
		y->prev=temp;
		temp=y;
	}
	node *ptrr=first;
	display(ptrr);
	map<int,int> mp;
	while(ptrr!=NULL){
		int d=ptrr->data;
		if(mp.find(d)==mp.end()){
			mp[d]=1;
		}
		else{
			mp[d]++;
		}
		ptrr=ptrr->next;
	}
	map<int,int>::iterator itr;
	for(itr=mp.begin();itr!=mp.end();itr++){
		cout<<itr->first<<" "<<itr->second<<endl;
	}
	ptrr=first;
	int s=11;
	while(ptrr!=NULL){
		int c=s-ptrr->data;
		if(mp.find(c)!=mp.end() && mp.find(c)->second!=0){
			cout<<"pair : "<<ptrr->data<<c<<endl;
			mp[c]--;
			mp[ptrr->data]--;
		}
		ptrr=ptrr->next;
	}
	return 0;
}
