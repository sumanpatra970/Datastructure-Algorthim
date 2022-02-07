#include<iostream>
using namespace std;
int maxx=-1;
void solve(int *a,int p,int n,int sum,string op){
	if(p==n){
		cout<<sum<<" "<<13-sum<<" "<<op.length()<<endl;
		return ;
	}
	char ch=a[p]+'0';
	solve(a,p+1,n,sum,op);
	solve(a,p+1,n,sum+a[p],op+ch);
	return ;
}
int main(){
	int a[4]={3,1,7,2};
	int p=0;
	int n=4;
	int sum=0;
	string op="";
	solve(a,p,n,sum,op);
	return 0;
}
