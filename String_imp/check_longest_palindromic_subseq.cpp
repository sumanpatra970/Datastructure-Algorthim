#include<iostream>
using namespace std;
int maxx=0;
string stt="";
bool pallindrome(string op){
	int n=op.length();
	int m=n/2;
	int f=0;
	for(int i=0;i<m;i++){
		if(op[i]!=op[n-1-i]){
			f=1;
		}
	}
	if(f==0){
		return true;
	}
	else{
		return false;
	}
}
void solve(string st,int n,string op){
	if(n==5){
		if(pallindrome(op)){
			int m=op.length();
			if(m>maxx){
				maxx=m;
				stt=op;
			}	
		}
		return ;
	}
	solve(st,n+1,op+st[n]);
	solve(st,n+1,op);
	return ;
}
int main(){
	string st="aabba";
	solve(st,0,"");
	cout<<maxx<<" "<<stt;
	return 0;
}
