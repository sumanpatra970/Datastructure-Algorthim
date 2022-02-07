#include<iostream>
#include<vector>
using namespace std;
vector<int> solve(int *a,int i,int k,int op,vector<int> v){
	if(i==k){
		cout<<op<<" ";
		v.push_back(op);
		return v;
	}
	int x=a[i];
	v=solve(a,i+1,k,op+x,v);
	v=solve(a,i+1,k,op,v);
	return v;
	
}
int main(){
	int a[6]={5,6,8,9,2,1};
	int n=6;
	int k=n/2;
	vector<int> v1;
	int op=0;
	v1=solve(a,0,k,op,v1);
	cout<<endl;
	vector<int> v2;
	op=0;
	v2=solve(a,k,n,op,v2);
	cout<<endl;
	int x,y;
	int A=12;
	int B=16;
	for(itr=v1.begin();itr!=v1.end();itr++){
		x=*itr;
		int a=A-x;
		int b=B-x;
		vector<int>::iterator it;
		for(it=v2.begin();it!=v2.end();it++){
			if(*it>=a && *it<=b){
				cout<<*itr<<" "<<*it<<endl;
			}
		}
	}
}
