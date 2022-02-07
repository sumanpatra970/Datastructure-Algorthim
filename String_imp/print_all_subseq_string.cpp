#include<iostream>
using namespace std;
void solve(string st,string op,int n,int *v){
	if(n==3){
		cout<<op<<" ";
		return ;
	}
	for(int i=0;i<st.length();i++){
		if(v[i]==0){
			v[i]=1;
			solve(st,op+st[i],n+1,v);
			v[i]=0;	
		}
	}
	return ;
}
int main(){
	string st="ABC";
	string op="";
	int v[st.length()]={0,0,0};
	solve(st,op,0,v);
	return 0;
}
