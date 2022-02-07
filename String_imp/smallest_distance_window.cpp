#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<string> v;
void solve(string s,int i,int n,string op){
	if(i==n+1){
		return ;
	}
	v.push_back(op);
	solve(s,i+1,n,op+s[i]);
	return ;
}
bool check(string s,map<char,int> mp){
	map<char,int>::iterator itr;
	for(itr=mp.begin();itr!=mp.end();itr++){
		int f=0;
		char ch=itr->first;
		for(int j=0;j<s.length();j++){
			if(s[j]==ch){
				f=1;
			}
		}
		if(f==1){
			
		}
		else{
			return false;
		}
	}
	return true;
}
int main(){
	string s="abcc";
	map<char,int> mp;
	for(int i=0;i<s.length();i++){
		if(mp.find(s[i])==mp.end()){
			mp[s[i]]=1;
		}
	}
	map<char,int>::iterator it;
	for(it=mp.begin();it!=mp.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	string op="";
	for(int i=0;i<s.length();i++){
		solve(s,i+1,s.length(),op+s[i]);
	}
	string res;
	int minn=9009;
	vector<string>::iterator itr;
	for(itr=v.begin();itr!=v.end();itr++){
		if(check(*itr,mp)){
			string st=*itr;
			if(minn>st.length()){
				minn=st.length();
				res=st;	
			}
		}
	}
	cout<<minn<<" "<<res;
	return 0;
}
