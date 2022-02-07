#include<iostream>
#include<map>
using namespace std;
map<char,int> mp;
void solve(string s,int i,int n){
	if(i==n-1){
		mp[s[i]]=1;
		return ;
	}
	char ch=s[i];
	solve(s,i+1,n);
	if(mp.find(ch)!=mp.end()){
		cout<<ch<<"found at"<<i<<endl;
	}
	else{
		mp[ch]=i;
	}
	return ;
	
}
int main(){
	string s="aabbbc";
	int n=s.length();
	int i=0;
	solve(s,i,n);
}
