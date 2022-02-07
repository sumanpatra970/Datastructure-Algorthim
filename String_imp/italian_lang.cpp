#include<iostream>
#include<map>
using namespace std;
int main(){
	map<char,int> mp;
	mp['I']=1;
	mp['V']=5;
	mp['X']=10;
	string s="VII";
	int val=0;
	if(s.length()==2){
		if(mp[s[0]]>mp[s[1]]){
			val=mp[s[0]]+mp[s[1]];
		}
		else{
			val=mp[s[1]]-mp[s[0]];
		}
	}
	else{
		for(int i=0;i<s.length();i++){
			val=val+mp[s[i]];
		}
	}
	cout<<val;
	return 0;
}
