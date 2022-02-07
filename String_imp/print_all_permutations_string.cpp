#include<iostream>
using namespace std;
void solve(string st,int n,string op){
	if(n==4){
		cout<<op<<" ";
		return ;
	}
	solve(st,n+1,op+st[n]);
	solve(st,n+1,op);
	return ;
}
int main(){
	string st="012";
	solve(st,0,"");
	return 0;
}
