#include<iostream>
#include<map>
using namespace std;
int main(){
	string s1="abbc";
	string s2="adbb";
	int f=0;
	map<char,int> mp;
	for(int i=0;i<s1.length();i++){
		if(mp.find(s1[i])==mp.end()){
			mp[s1[i]]=1;
		}
		else{
			mp[s1[i]]=mp[s1[i]]+1;
		}
	}
	for(int j=0;j<s2.length();j++){
		if(mp.find(s2[j])!=mp.end()){
			mp[s2[j]]--;
		}
		else{
			f=1;
			cout<<"-1";
			break;
		}
	}
	map<char,int>::iterator itr;
	for(itr=mp.begin();itr!=mp.end();itr++){
		if(itr->second>0){
			f=1;
			cout<<"-1";
		}
	}
	if(f==0){
		cout<<"yes";
	}
	return 0;
}
