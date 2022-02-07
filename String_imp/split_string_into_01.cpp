#include<iostream>
#include<vector>
using namespace std;
vector<string> v;
bool check(string op){
	int s=0;
	vector<string>::iterator itr;
	for(itr=v.begin();itr!=v.end();itr++){
		if(*itr==op){
			return false;
		}
	}
	for(int i=0;i<op.length();i++){
		if(op[i]=='0'){
			s++;
		}
	}
	int t=0;
	for(int i=0;i<op.length();i++){
		if(op[i]=='1'){
			t++;
		}
	}
	if(s==t){
		return true;
	}
	else{
		return false;
	}
}
void solve(string st,int n,string op){
	if(n==4){
		if(check(op)==true){
			v.push_back(op);
			cout<<op<<" ";
		}
		return ;
	}
	solve(st,n+1,op+st[n]);
	solve(st,n+1,op);
	return ;
}
int main(){
	string st="0011";
	solve(st,0,"");
	return 0;
}
