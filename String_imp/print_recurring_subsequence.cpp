#include<iostream>
#include<map>
using namespace std;
map<string,int> mp;
void solve(string st,int n,string op){
	if(n==6){
		if(mp.find(op)!=mp.end()){
			mp[op]++;
		}
		else{
			mp[op]=1;
		}
		return ;
	}
	solve(st,n+1,op+st[n]);
	solve(st,n+1,op);
	return ;
}
int main(){
	string st="aabbaa";
	string stt="";
	mp[stt]=1;
	solve(st,0,"");
	map<string,int>::iterator itr;
	for(itr=mp.begin();itr!=mp.end();itr++){
		cout<<itr->first<<" "<<itr->second<<endl;
	}
}
