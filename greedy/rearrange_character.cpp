#include<iostream>
#include<map>
using namespace std;
int main(){
	string s="adbdcdddd";
	int n=s.length();
	map<char,int> mp;
	for(int i=0;i<n;i++){
		if(mp.find(s[i])==mp.end()){
			mp[s[i]]=1;
		}
		else{
			mp[s[i]]++;
		}
	}
	int maxx=-1;
	map<char,int>::iterator itr;
	for(itr=mp.begin();itr!=mp.end();itr++){
		maxx=max(maxx,itr->second);
	}
	if(n-maxx>=maxx-2){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	return 0;
}
