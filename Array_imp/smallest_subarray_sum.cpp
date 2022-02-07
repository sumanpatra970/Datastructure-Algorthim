#include<iostream>
using namespace std;
void solve(int *a,int d,int s,int n,string op){
	if(s>d){
		cout<<op<<" ";
		return;
	}
	if(n==4){
		return ;
	}
	char ch;
	ch=a[n]+'0';
	solve(a,d,s+a[n],n+1,op+ch);
	solve(a,d,s,n+1,op);
}
int main(){
	int a[4]={2,3,4,1};
	int s=0;
	int n=0;
	string op="";
	solve(a,5,s,n,op);
}
