#include<iostream>
#include<map>
using namespace std;
bool check(string s,map<char,int> mp){
	map<char,int> mpp;
	for(int i=0;i<s.length();i++){
			if(mpp.find(s[i])==mpp.end()){
				mpp[s[i]]++;
			}
			else{
				mpp[s[i]]=1;
			}
	}
	map<char,int>::iterator itr,it;
	for(itr=mp.begin() && it=mpp.begin();itr!=mp.end() || it!=mpp.end();itr++,it++;){
		if(itr->second!=it->second){
			return false;
		}
	}
	return true;
}
int main(){
	string p="aabccded";
	string t="abc";
	int i=0;int j=0;
	int k=t.length();
	map<char,int> mp;
	for(int i=0;i<t.length();i++){
			if(mp.find(t[i])==mp.end()){
				mp[t[i]]++;
			}
			else{
				mp[t[i]]=1;
			}
	}
	while(j<p.length()){
		if(j-i+1!=k){
			j++;
		}
		else{
			string ts=p.substr(i,j+1);
			int nn=check(ts,mp);
			if(nn==1){
				cout<<"ans "<<ts<<" ";
			}
			i++;
			j++;
		}
	}
	return 0;
}
